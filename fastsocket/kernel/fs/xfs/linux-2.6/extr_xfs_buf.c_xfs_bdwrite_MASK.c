
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buf {int b_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct xfs_buf*,int ) ;
 int FUNC_1 (struct xfs_buf*,int) ;

void
FUNC_2(
 void *VAR_4,
 struct xfs_buf *VAR_5)
{
 FUNC_0(VAR_5, VAR_3);

 VAR_5->b_flags &= ~VAR_2;
 VAR_5->b_flags |= (VAR_1 | VAR_0);

 FUNC_1(VAR_5, 1);
}
