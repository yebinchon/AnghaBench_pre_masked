
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {struct inode* ns_gc_dat; struct inode* ns_dat; } ;
struct address_space {int dummy; } ;
struct nilfs_inode_info {int i_state; struct address_space i_btnode_cache; int i_bmap; int i_flags; } ;
struct inode {int i_blocks; struct address_space* i_mapping; } ;
struct TYPE_2__ {int mi_sem; } ;


 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct address_space*) ;
 int FUNC_5 (struct address_space*,struct address_space*) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct the_nilfs *VAR_1)
{
 struct inode *VAR_2 = VAR_1->ns_dat, *VAR_3 = VAR_1->ns_gc_dat;
 struct nilfs_inode_info *VAR_4 = FUNC_0(VAR_2), *VAR_5 = FUNC_0(VAR_3);
 struct address_space *VAR_6 = VAR_2->i_mapping;
 struct address_space *VAR_7 = VAR_3->i_mapping;

 FUNC_2(&FUNC_1(VAR_2)->mi_sem);
 VAR_2->i_blocks = VAR_3->i_blocks;
 VAR_4->i_flags = VAR_5->i_flags;
 VAR_4->i_state = VAR_5->i_state & ~(1 << VAR_0);

 FUNC_3(VAR_5->i_bmap, VAR_4->i_bmap);

 FUNC_4(VAR_6);
 FUNC_5(VAR_6, VAR_7);


 FUNC_4(&VAR_4->i_btnode_cache);
 FUNC_5(&VAR_4->i_btnode_cache, &VAR_5->i_btnode_cache);

 FUNC_6(&FUNC_1(VAR_2)->mi_sem);
}
