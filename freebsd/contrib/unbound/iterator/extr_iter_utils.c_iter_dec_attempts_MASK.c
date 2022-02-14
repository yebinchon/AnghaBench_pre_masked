
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delegpt_addr {int attempts; struct delegpt_addr* next_result; struct delegpt_addr* next_target; } ;
struct delegpt {struct delegpt_addr* result_list; struct delegpt_addr* target_list; } ;


 int VAR_0 ;

void FUNC_0(struct delegpt* VAR_1, int VAR_2)
{
 struct delegpt_addr* VAR_3;
 for(VAR_3=VAR_1->target_list; VAR_3; VAR_3 = VAR_3->next_target) {
  if(VAR_3->attempts >= VAR_0) {

   VAR_3->next_result = VAR_1->result_list;
   VAR_1->result_list = VAR_3;
  }
  if(VAR_3->attempts > VAR_2)
   VAR_3->attempts -= VAR_2;
  else VAR_3->attempts = 0;
 }
}
