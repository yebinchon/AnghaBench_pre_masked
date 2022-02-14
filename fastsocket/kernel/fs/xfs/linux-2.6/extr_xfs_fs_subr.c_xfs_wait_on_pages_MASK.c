
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_off_t ;
typedef int xfs_inode_t ;
struct address_space {int dummy; } ;
struct TYPE_2__ {struct address_space* i_mapping; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct address_space*,int,int) ;
 scalar_t__ FUNC_3 (struct address_space*,int ) ;

int
FUNC_4(
 xfs_inode_t *VAR_1,
 xfs_off_t VAR_2,
 xfs_off_t VAR_3)
{
 struct address_space *VAR_4 = FUNC_0(VAR_1)->i_mapping;

 if (FUNC_3(VAR_4, VAR_0)) {
  return -FUNC_2(VAR_4, VAR_2,
     VAR_3 == -1 ? FUNC_1(VAR_1) - 1 : VAR_3);
 }
 return 0;
}
