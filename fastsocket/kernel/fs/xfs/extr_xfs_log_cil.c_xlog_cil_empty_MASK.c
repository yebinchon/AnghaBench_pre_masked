
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_cil {int xc_cil_lock; int xc_cil; } ;
struct log {struct xfs_cil* l_cilp; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool
FUNC_3(
 struct log *VAR_0)
{
 struct xfs_cil *VAR_1 = VAR_0->l_cilp;
 bool VAR_2 = 0;

 FUNC_1(&VAR_1->xc_cil_lock);
 if (FUNC_0(&VAR_1->xc_cil))
  VAR_2 = 1;
 FUNC_2(&VAR_1->xc_cil_lock);
 return VAR_2;
}
