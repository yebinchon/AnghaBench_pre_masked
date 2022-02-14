
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_bdi; int ns_blocksize_bits; } ;
struct super_block {int dummy; } ;
struct nilfs_mdt_info {int mi_sem; struct the_nilfs* mi_nilfs; } ;
struct address_space {int backing_dev_info; int * assoc_mapping; scalar_t__ flags; int * host; } ;
struct inode {int i_nlink; struct address_space* i_mapping; int i_alloc_sem; int i_mutex; int i_lock; scalar_t__ i_state; int i_sb_list; int i_list; scalar_t__ dirtied_when; int * i_security; scalar_t__ i_rdev; int * i_cdev; int * i_bdev; int * i_pipe; int i_dquot; scalar_t__ i_generation; scalar_t__ i_bytes; scalar_t__ i_blocks; scalar_t__ i_size; int i_writecount; struct nilfs_mdt_info* i_private; int i_mode; int i_ino; int i_count; scalar_t__ i_flags; int i_blkbits; struct super_block* i_sb; struct address_space i_data; } ;
typedef int ino_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 struct nilfs_mdt_info* FUNC_3 (int,int ) ;
 int FUNC_4 (struct address_space* const,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *) ;
 struct inode* FUNC_7 (struct the_nilfs*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *) ;

struct inode *
FUNC_10(struct the_nilfs *VAR_2, struct super_block *VAR_3,
       ino_t VAR_4, gfp_t VAR_5)
{
 struct inode *VAR_6 = FUNC_7(VAR_2);

 if (!VAR_6)
  return ((void*)0);
 else {
  struct address_space * const VAR_7 = &VAR_6->i_data;
  struct nilfs_mdt_info *VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_0);

  if (!VAR_8) {
   FUNC_8(VAR_6);
   return ((void*)0);
  }
  VAR_8->mi_nilfs = VAR_2;
  FUNC_2(&VAR_8->mi_sem);

  VAR_6->i_sb = VAR_3;
  VAR_6->i_blkbits = VAR_2->ns_blocksize_bits;
  VAR_6->i_flags = 0;
  FUNC_1(&VAR_6->i_count, 1);
  VAR_6->i_nlink = 1;
  VAR_6->i_ino = VAR_4;
  VAR_6->i_mode = VAR_1;
  VAR_6->i_private = VAR_8;
  FUNC_9(&VAR_6->i_lock);
  FUNC_6(&VAR_6->i_mutex);
  FUNC_2(&VAR_6->i_alloc_sem);

  VAR_7->host = ((void*)0);
  VAR_7->flags = 0;
  FUNC_4(VAR_7, VAR_5);
  VAR_7->assoc_mapping = ((void*)0);
  VAR_7->backing_dev_info = VAR_2->ns_bdi;

  VAR_6->i_mapping = VAR_7;
 }

 return VAR_6;
}
