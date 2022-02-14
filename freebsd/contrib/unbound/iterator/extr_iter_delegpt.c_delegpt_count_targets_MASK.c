
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delegpt_addr {struct delegpt_addr* next_target; } ;
struct delegpt {struct delegpt_addr* target_list; } ;



size_t
FUNC_0(struct delegpt* VAR_0)
{
 struct delegpt_addr* VAR_1;
 size_t VAR_2 = 0;
 for(VAR_1 = VAR_0->target_list; VAR_1; VAR_1 = VAR_1->next_target)
  VAR_2++;
 return VAR_2;
}
