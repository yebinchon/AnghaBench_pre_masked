
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct p2ps_advertisement {scalar_t__ id; struct p2ps_advertisement* next; } ;
struct p2p_data {struct p2ps_advertisement* p2ps_adv_list; } ;


 int FUNC_0 (struct p2ps_advertisement*) ;
 int FUNC_1 (struct p2p_data*,char*,scalar_t__) ;

int FUNC_2(struct p2p_data *VAR_0, u32 VAR_1)
{
 struct p2ps_advertisement *VAR_2;
 struct p2ps_advertisement **VAR_3;

 if (!VAR_0)
  return -1;

 VAR_2 = VAR_0->p2ps_adv_list;
 VAR_3 = &VAR_0->p2ps_adv_list;
 while (VAR_2) {
  if (VAR_2->id == VAR_1) {
   FUNC_1(VAR_0, "Delete ASP adv_id=0x%x", VAR_1);
   *VAR_3 = VAR_2->next;
   FUNC_0(VAR_2);
   return 0;
  }
  VAR_3 = &VAR_2->next;
  VAR_2 = VAR_2->next;
 }

 return -1;
}
