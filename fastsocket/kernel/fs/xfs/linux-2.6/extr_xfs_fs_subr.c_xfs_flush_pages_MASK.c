
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_off_t ;
typedef int xfs_inode_t ;
typedef int uint64_t ;
struct address_space {int dummy; } ;
struct TYPE_2__ {struct address_space* i_mapping; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct address_space*,int,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int,int) ;

int
FUNC_4(
 xfs_inode_t *VAR_3,
 xfs_off_t VAR_4,
 xfs_off_t VAR_5,
 uint64_t VAR_6,
 int VAR_7)
{
 struct address_space *VAR_8 = FUNC_0(VAR_3)->i_mapping;
 int VAR_9 = 0;
 int VAR_10;

 FUNC_2(VAR_3, VAR_2);
 VAR_9 = -FUNC_1(VAR_8, VAR_4,
    VAR_5 == -1 ? VAR_0 : VAR_5);
 if (VAR_6 & VAR_1)
  return VAR_9;
 VAR_10 = FUNC_3(VAR_3, VAR_4, VAR_5);
 if (!VAR_9)
  VAR_9 = VAR_10;
 return VAR_9;
}
