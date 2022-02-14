
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddi_soft_state_item {int ssi_item; } ;
struct ddi_soft_state {int ss_lock; int ss_list; } ;


 struct ddi_soft_state_item* FUNC_0 (int *) ;
 int FUNC_1 (struct ddi_soft_state*,int) ;
 int FUNC_2 (struct ddi_soft_state*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(void **VAR_0)
{
 struct ddi_soft_state *VAR_1 = *VAR_0;
 struct ddi_soft_state_item *VAR_2;
 int VAR_3;

 FUNC_4(&VAR_1->ss_lock);
 while ((VAR_2 = FUNC_0(&VAR_1->ss_list)) != ((void*)0)) {
  VAR_3 = VAR_2->ssi_item;
  FUNC_1(VAR_1, VAR_3);
 }
 FUNC_5(&VAR_1->ss_lock);
 FUNC_3(&VAR_1->ss_lock);
 FUNC_2(VAR_1, sizeof(*VAR_1));

 *VAR_0 = ((void*)0);
}
