
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policydb {int cond_list; int te_cond_avtab; int bool_val_to_struct; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct policydb *VAR_0)
{
 FUNC_2(VAR_0->bool_val_to_struct);
 FUNC_0(&VAR_0->te_cond_avtab);
 FUNC_1(VAR_0->cond_list);
}
