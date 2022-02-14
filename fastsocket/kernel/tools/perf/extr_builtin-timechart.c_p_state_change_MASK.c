
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct power_event {int state; int start_time; int end_time; int cpu; struct power_event* next; int type; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct power_event* VAR_6 ;
 int VAR_7 ;
 struct power_event* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(int VAR_8, u64 VAR_9, u64 VAR_10)
{
 struct power_event *VAR_11;

 if (VAR_10 > 8000000)
  return;

 VAR_11 = FUNC_0(sizeof(*VAR_11));
 if (!VAR_11)
  return;

 VAR_11->state = VAR_2[VAR_8];
 VAR_11->start_time = VAR_1[VAR_8];
 VAR_11->end_time = VAR_9;
 VAR_11->cpu = VAR_8;
 VAR_11->type = VAR_0;
 VAR_11->next = VAR_6;

 if (!VAR_11->start_time)
  VAR_11->start_time = VAR_3;

 VAR_6 = VAR_11;

 VAR_2[VAR_8] = VAR_10;
 VAR_1[VAR_8] = VAR_9;

 if ((u64)VAR_10 > VAR_4)
  VAR_4 = VAR_10;

 if (VAR_10 < VAR_5 || VAR_5 == 0)
  VAR_5 = VAR_10;

 if (VAR_10 == VAR_4 - 1000)
   VAR_7 = VAR_4;
}
