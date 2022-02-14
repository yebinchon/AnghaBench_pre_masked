
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int budg_idx_growth; int max_idx_node_sz; int space_lock; int min_idx_lebs; scalar_t__ page_budget; int budg_dd_growth; int budg_data_growth; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ubifs_info*) ;

void FUNC_3(struct ubifs_info *VAR_1)
{
 FUNC_0(&VAR_1->space_lock);

 VAR_1->budg_idx_growth -= VAR_1->max_idx_node_sz << VAR_0;

 VAR_1->budg_data_growth -= VAR_1->page_budget;

 VAR_1->budg_dd_growth += VAR_1->page_budget;

 VAR_1->min_idx_lebs = FUNC_2(VAR_1);
 FUNC_1(&VAR_1->space_lock);
}
