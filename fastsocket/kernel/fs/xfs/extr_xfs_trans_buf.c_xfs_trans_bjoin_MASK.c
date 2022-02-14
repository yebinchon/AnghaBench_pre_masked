
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_trans {int dummy; } ;
struct xfs_buf {int b_fspriv; } ;


 int FUNC_0 (struct xfs_trans*,struct xfs_buf*,int ) ;
 int FUNC_1 (int ) ;

void
FUNC_2(
 struct xfs_trans *VAR_0,
 struct xfs_buf *VAR_1)
{
 FUNC_0(VAR_0, VAR_1, 0);
 FUNC_1(VAR_1->b_fspriv);
}
