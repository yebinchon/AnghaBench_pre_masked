
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_data {unsigned int num_groups; struct p2p_group** groups; } ;



void FUNC_0(struct p2p_data *VAR_0,
       int (*VAR_1)(struct p2p_group *VAR_2,
        void *VAR_3),
       void *VAR_4)
{
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0->num_groups; VAR_5++) {
  if (!VAR_1(VAR_0->groups[VAR_5], VAR_4))
   break;
 }
}
