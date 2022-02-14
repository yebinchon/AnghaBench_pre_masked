
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {struct inode* ns_gc_dat; struct inode* ns_dat; } ;
struct nilfs_inode_info {int i_state; int i_btnode_cache; int i_bmap; scalar_t__ i_cno; int i_flags; } ;
struct inode {int * i_mapping; int i_blocks; scalar_t__ i_state; } ;


 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct the_nilfs *VAR_1)
{
 struct inode *VAR_2 = VAR_1->ns_dat, *VAR_3 = VAR_1->ns_gc_dat;
 struct nilfs_inode_info *VAR_4 = FUNC_0(VAR_2), *VAR_5 = FUNC_0(VAR_3);
 int VAR_6;

 VAR_3->i_state = 0;
 VAR_3->i_blocks = VAR_2->i_blocks;
 VAR_5->i_flags = VAR_4->i_flags;
 VAR_5->i_state = VAR_4->i_state | (1 << VAR_0);
 VAR_5->i_cno = 0;
 FUNC_1(VAR_5->i_bmap, VAR_4->i_bmap);
 VAR_6 = FUNC_2(VAR_3->i_mapping, VAR_2->i_mapping);
 if (FUNC_3(VAR_6))
  return VAR_6;

 return FUNC_2(&VAR_5->i_btnode_cache,
          &VAR_4->i_btnode_cache);
}
