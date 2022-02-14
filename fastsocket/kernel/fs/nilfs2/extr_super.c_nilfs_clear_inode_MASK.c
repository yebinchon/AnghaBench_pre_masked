
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_inode_info {int i_btnode_cache; int i_bmap; int i_state; int * i_bh; int i_dirty; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int) ;
 struct nilfs_inode_info* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct inode *VAR_1)
{
 struct nilfs_inode_info *VAR_2 = FUNC_1(VAR_1);




 FUNC_0(!FUNC_3(&VAR_2->i_dirty));
 FUNC_2(VAR_2->i_bh);
 VAR_2->i_bh = ((void*)0);

 if (FUNC_6(VAR_0, &VAR_2->i_state))
  FUNC_4(VAR_2->i_bmap);

 FUNC_5(&VAR_2->i_btnode_cache);
}
