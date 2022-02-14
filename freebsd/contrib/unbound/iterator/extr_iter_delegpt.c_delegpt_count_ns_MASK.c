
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delegpt_ns {int resolved; struct delegpt_ns* next; } ;
struct delegpt {struct delegpt_ns* nslist; } ;



void
FUNC_0(struct delegpt* VAR_0, size_t* VAR_1, size_t* VAR_2)
{
 struct delegpt_ns* VAR_3;
 *VAR_1 = 0;
 *VAR_2 = 0;
 for(VAR_3 = VAR_0->nslist; VAR_3; VAR_3 = VAR_3->next) {
  (*VAR_1)++;
  if(!VAR_3->resolved)
   (*VAR_2)++;
 }
}
