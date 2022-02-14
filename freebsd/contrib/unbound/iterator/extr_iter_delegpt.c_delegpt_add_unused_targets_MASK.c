
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delegpt_addr {struct delegpt_addr* next_usable; struct delegpt_addr* next_result; } ;
struct delegpt {struct delegpt_addr* result_list; struct delegpt_addr* usable_list; } ;



void
FUNC_0(struct delegpt* VAR_0)
{
 struct delegpt_addr* VAR_1 = VAR_0->usable_list;
 VAR_0->usable_list = ((void*)0);
 while(VAR_1) {
  VAR_1->next_result = VAR_0->result_list;
  VAR_0->result_list = VAR_1;
  VAR_1 = VAR_1->next_usable;
 }
}
