
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {struct inode* ns_gc_dat; } ;
struct nilfs_inode_info {int i_btnode_cache; scalar_t__ i_flags; } ;
struct inode {int * i_mapping; int i_state; } ;


 int VAR_0 ;
 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct the_nilfs *VAR_1)
{
 struct inode *VAR_2 = VAR_1->ns_gc_dat;
 struct nilfs_inode_info *VAR_3 = FUNC_0(VAR_2);

 VAR_2->i_state = VAR_0;
 VAR_3->i_flags = 0;

 FUNC_1(VAR_2->i_mapping, 0);
 FUNC_1(&VAR_3->i_btnode_cache, 0);
}
