
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delegpt_addr {struct delegpt_addr* next_usable; struct delegpt_addr* next_result; struct delegpt_addr* next_target; } ;
struct delegpt {struct delegpt_addr* usable_list; struct delegpt_addr* result_list; struct delegpt_addr* target_list; } ;



void
FUNC_0(struct delegpt* VAR_0, size_t* VAR_1, size_t* VAR_2,
 size_t* VAR_3)
{
 struct delegpt_addr* VAR_4;
 *VAR_1 = 0;
 *VAR_2 = 0;
 *VAR_3 = 0;
 for(VAR_4 = VAR_0->target_list; VAR_4; VAR_4 = VAR_4->next_target) {
  (*VAR_1)++;
 }
 for(VAR_4 = VAR_0->result_list; VAR_4; VAR_4 = VAR_4->next_result) {
  (*VAR_2)++;
 }
 for(VAR_4 = VAR_0->usable_list; VAR_4; VAR_4 = VAR_4->next_usable) {
  (*VAR_3)++;
 }
}
