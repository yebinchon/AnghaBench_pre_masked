
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct power_event {int cpu; struct power_event* next; int type; int end_time; int start_time; int state; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 struct power_event* VAR_3 ;
 struct power_event* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(int VAR_4, u64 VAR_5)
{
 struct power_event *VAR_6 = FUNC_0(sizeof(*VAR_6));

 if (!VAR_6)
  return;

 VAR_6->state = VAR_2[VAR_4];
 VAR_6->start_time = VAR_1[VAR_4];
 VAR_6->end_time = VAR_5;
 VAR_6->cpu = VAR_4;
 VAR_6->type = VAR_0;
 VAR_6->next = VAR_3;

 VAR_3 = VAR_6;
}
