
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsnode {int n_flag; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfsnode*) ;
 int FUNC_1 (struct nfsnode*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct nfsnode *VAR_1)
{
 FUNC_0(VAR_1);
 VAR_1->n_flag &= ~VAR_0;
 FUNC_2(&VAR_1->n_flag);
 FUNC_1(VAR_1);
}
