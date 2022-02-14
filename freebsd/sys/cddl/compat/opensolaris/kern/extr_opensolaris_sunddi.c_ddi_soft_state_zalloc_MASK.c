
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddi_soft_state_item {int ssi_item; struct ddi_soft_state_item* ssi_data; } ;
struct ddi_soft_state {int ss_size; int ss_lock; int ss_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct ddi_soft_state_item*,int ) ;
 int * FUNC_1 (struct ddi_soft_state*,int) ;
 struct ddi_soft_state_item* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ddi_soft_state_item*,int) ;
 struct ddi_soft_state_item* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;

int
FUNC_7(void *VAR_4, int VAR_5)
{
 struct ddi_soft_state *VAR_6 = VAR_4;
 struct ddi_soft_state_item *VAR_7;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_2);
 VAR_7->ssi_item = VAR_5;
 VAR_7->ssi_data = FUNC_4(VAR_6->ss_size, VAR_2);

 FUNC_5(&VAR_6->ss_lock);
 if (FUNC_1(VAR_6, VAR_5) != ((void*)0)) {
  FUNC_6(&VAR_6->ss_lock);
  FUNC_3(VAR_7->ssi_data, VAR_6->ss_size);
  FUNC_3(VAR_7, sizeof(*VAR_7));
  return (VAR_0);
 }
 FUNC_0(&VAR_6->ss_list, VAR_7, VAR_3);
 FUNC_6(&VAR_6->ss_lock);
 return (VAR_1);
}
