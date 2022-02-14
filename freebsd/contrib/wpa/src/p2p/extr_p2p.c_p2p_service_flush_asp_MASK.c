
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2ps_advertisement {struct p2ps_advertisement* next; } ;
struct p2p_data {struct p2ps_advertisement* p2ps_adv_list; } ;


 int FUNC_0 (struct p2ps_advertisement*) ;
 int FUNC_1 (struct p2p_data*,char*) ;
 int FUNC_2 (struct p2p_data*) ;

void FUNC_3(struct p2p_data *VAR_0)
{
 struct p2ps_advertisement *VAR_1, *VAR_2;

 if (!VAR_0)
  return;

 VAR_1 = VAR_0->p2ps_adv_list;
 while (VAR_1) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_0(VAR_2);
 }

 VAR_0->p2ps_adv_list = ((void*)0);
 FUNC_2(VAR_0);
 FUNC_1(VAR_0, "All ASP advertisements flushed");
}
