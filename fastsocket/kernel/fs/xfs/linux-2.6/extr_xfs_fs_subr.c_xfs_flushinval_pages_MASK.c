
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
 int VAR_1 ;
 int FUNC_1 (struct address_space*,int,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (struct address_space*,int,int) ;
 int FUNC_4 (int *,int ) ;

int
FUNC_5(
 xfs_inode_t *VAR_2,
 xfs_off_t VAR_3,
 xfs_off_t VAR_4,
 int VAR_5)
{
 struct address_space *VAR_6 = FUNC_0(VAR_2)->i_mapping;
 int VAR_7 = 0;

 FUNC_2(VAR_2, VAR_3, VAR_4);

 FUNC_4(VAR_2, VAR_1);
 VAR_7 = FUNC_1(VAR_6, VAR_3,
    VAR_4 == -1 ? VAR_0 : VAR_4);
 if (!VAR_7)
  FUNC_3(VAR_6, VAR_3, VAR_4);
 return -VAR_7;
}
