
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct p2ps_advertisement {scalar_t__ id; struct p2ps_advertisement* next; } ;
struct p2p_data {struct p2ps_advertisement* p2ps_adv_list; } ;



struct p2ps_advertisement *
FUNC_0(struct p2p_data *VAR_0, u32 VAR_1)
{
 struct p2ps_advertisement *VAR_2;

 if (!VAR_0)
  return ((void*)0);

 VAR_2 = VAR_0->p2ps_adv_list;
 while (VAR_2) {
  if (VAR_2->id == VAR_1)
   return VAR_2;
  VAR_2 = VAR_2->next;
 }

 return ((void*)0);
}
