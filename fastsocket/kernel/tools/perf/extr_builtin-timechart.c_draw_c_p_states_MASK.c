
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_event {scalar_t__ type; struct power_event* next; scalar_t__ state; int end_time; int start_time; int cpu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct power_event* VAR_3 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct power_event *VAR_4;
 VAR_4 = VAR_3;




 while (VAR_4) {
  if (VAR_4->type == VAR_0)
   FUNC_0(VAR_4->cpu, VAR_4->start_time, VAR_4->end_time, VAR_4->state);
  VAR_4 = VAR_4->next;
 }

 VAR_4 = VAR_3;
 while (VAR_4) {
  if (VAR_4->type == VAR_1) {
   if (!VAR_4->state)
    VAR_4->state = VAR_2;
   FUNC_1(VAR_4->cpu, VAR_4->start_time, VAR_4->end_time, VAR_4->state);
  }
  VAR_4 = VAR_4->next;
 }
}
