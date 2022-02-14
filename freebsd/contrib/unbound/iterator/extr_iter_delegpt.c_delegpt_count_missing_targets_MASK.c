
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delegpt_ns {int resolved; struct delegpt_ns* next; } ;
struct delegpt {struct delegpt_ns* nslist; } ;



size_t
FUNC_0(struct delegpt* VAR_0)
{
 struct delegpt_ns* VAR_1;
 size_t VAR_2 = 0;
 for(VAR_1 = VAR_0->nslist; VAR_1; VAR_1 = VAR_1->next)
  if(!VAR_1->resolved)
   VAR_2++;
 return VAR_2;
}
