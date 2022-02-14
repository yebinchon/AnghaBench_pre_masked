
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int i_mount; } ;
typedef TYPE_1__ xfs_inode_t ;
struct xfs_name {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,struct xfs_name*,unsigned char*,int*,int) ;
 int FUNC_3 (struct xfs_name*,unsigned char const*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int VAR_2 ;

int
FUNC_6(
 xfs_inode_t *VAR_3,
 const unsigned char *VAR_4,
 unsigned char *VAR_5,
 int *VAR_6,
 int VAR_7)
{
 int VAR_8;
 struct xfs_name VAR_9;

 FUNC_1(VAR_2);

 if (FUNC_0(VAR_3->i_mount))
  return(VAR_0);

 VAR_8 = FUNC_3(&VAR_9, VAR_4);
 if (VAR_8)
  return VAR_8;

 FUNC_4(VAR_3, VAR_1);
 VAR_8 = FUNC_2(VAR_3, &VAR_9, VAR_5, VAR_6, VAR_7);
 FUNC_5(VAR_3, VAR_1);
 return(VAR_8);
}
