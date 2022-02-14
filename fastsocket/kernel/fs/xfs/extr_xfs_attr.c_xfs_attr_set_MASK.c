
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_mount; } ;
typedef TYPE_1__ xfs_inode_t ;
struct xfs_name {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xfs_name*,unsigned char const*) ;
 int FUNC_3 (TYPE_1__*,struct xfs_name*,unsigned char*,int,int) ;
 int VAR_1 ;

int
FUNC_4(
 xfs_inode_t *VAR_2,
 const unsigned char *VAR_3,
 unsigned char *VAR_4,
 int VAR_5,
 int VAR_6)
{
 int VAR_7;
 struct xfs_name VAR_8;

 FUNC_1(VAR_1);

 if (FUNC_0(VAR_2->i_mount))
  return (VAR_0);

 VAR_7 = FUNC_2(&VAR_8, VAR_3);
 if (VAR_7)
  return VAR_7;

 return FUNC_3(VAR_2, &VAR_8, VAR_4, VAR_5, VAR_6);
}
