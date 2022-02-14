
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int i_mount; } ;
typedef TYPE_1__ xfs_inode_t ;
struct xfs_name {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct xfs_name*,unsigned char const*) ;
 int FUNC_4 (TYPE_1__*,struct xfs_name*,int) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int VAR_3 ;

int
FUNC_8(
 xfs_inode_t *VAR_4,
 const unsigned char *VAR_5,
 int VAR_6)
{
 int VAR_7;
 struct xfs_name VAR_8;

 FUNC_2(VAR_3);

 if (FUNC_1(VAR_4->i_mount))
  return (VAR_0);

 VAR_7 = FUNC_3(&VAR_8, VAR_5);
 if (VAR_7)
  return VAR_7;

 FUNC_5(VAR_4, VAR_2);
 if (!FUNC_6(VAR_4)) {
  FUNC_7(VAR_4, VAR_2);
  return FUNC_0(VAR_1);
 }
 FUNC_7(VAR_4, VAR_2);

 return FUNC_4(VAR_4, &VAR_8, VAR_6);
}
