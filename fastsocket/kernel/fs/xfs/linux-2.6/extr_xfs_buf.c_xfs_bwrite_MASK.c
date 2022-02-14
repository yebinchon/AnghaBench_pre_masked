
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int dummy; } ;
struct xfs_buf {int b_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct xfs_buf*) ;
 int FUNC_1 (struct xfs_buf*) ;
 int FUNC_2 (struct xfs_buf*) ;
 int FUNC_3 (struct xfs_buf*) ;
 int FUNC_4 (struct xfs_mount*,int ) ;

int
FUNC_5(
 struct xfs_mount *VAR_4,
 struct xfs_buf *VAR_5)
{
 int VAR_6;

 VAR_5->b_flags |= VAR_3;
 VAR_5->b_flags &= ~(VAR_1 | VAR_2);

 FUNC_1(VAR_5);
 FUNC_0(VAR_5);

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6)
  FUNC_4(VAR_4, VAR_0);
 FUNC_3(VAR_5);
 return VAR_6;
}
