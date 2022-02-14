
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsnode {int n_flag; int n_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfsnode*) ;
 int FUNC_1 (struct nfsnode*) ;
 int VAR_1 ;
 int FUNC_2 (int*,int *,int ,char*,int ) ;

void
FUNC_3(struct nfsnode *VAR_2)
{
 FUNC_0(VAR_2);
 while (VAR_2->n_flag & VAR_0)
  (void) FUNC_2(&VAR_2->n_flag, &VAR_2->n_mtx, VAR_1, "nfsdirlk", 0);
 VAR_2->n_flag |= VAR_0;
 FUNC_1(VAR_2);
}
