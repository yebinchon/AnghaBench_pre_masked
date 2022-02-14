
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct power_event {size_t cpu; scalar_t__ state; scalar_t__ start_time; void* next; int type; void* end_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 void* VAR_10 ;
 struct power_event* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(void)
{
 u64 VAR_11;
 struct power_event *VAR_12;

 for (VAR_11 = 0; VAR_11 <= VAR_9; VAR_11++) {
  VAR_12 = FUNC_0(sizeof(*VAR_12));
  if (!VAR_12)
   return;

  VAR_12->state = VAR_5[VAR_11];
  VAR_12->start_time = VAR_4[VAR_11];
  VAR_12->end_time = VAR_7;
  VAR_12->cpu = VAR_11;
  VAR_12->type = VAR_1;
  VAR_12->next = VAR_10;

  if (!VAR_12->start_time)
   VAR_12->start_time = VAR_6;
  if (!VAR_12->state)
   VAR_12->state = VAR_8;
  VAR_10 = VAR_12;
 }
}
