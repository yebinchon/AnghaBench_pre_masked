
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_9__ {int * base_ntfs_ino; } ;
struct TYPE_7__ {scalar_t__ vcn_size_bits; scalar_t__ block_size_bits; scalar_t__ collation_rule; scalar_t__ vcn_size; scalar_t__ block_size; } ;
struct TYPE_8__ {TYPE_1__ index; } ;
struct TYPE_11__ {int lock; } ;
struct TYPE_10__ {TYPE_3__ ext; scalar_t__ nr_extents; int extent_lock; TYPE_2__ itype; TYPE_5__ attr_list_rl; int * attr_list; scalar_t__ attr_list_size; scalar_t__ page_ofs; int * page; int mrec_lock; TYPE_5__ runlist; int vol; int count; scalar_t__ seq_no; scalar_t__ allocated_size; scalar_t__ initialized_size; int size_lock; } ;
typedef TYPE_4__ ntfs_inode ;


 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct super_block *VAR_1, ntfs_inode *VAR_2)
{
 FUNC_4("Entering.");
 FUNC_6(&VAR_2->size_lock);
 VAR_2->initialized_size = VAR_2->allocated_size = 0;
 VAR_2->seq_no = 0;
 FUNC_1(&VAR_2->count, 1);
 VAR_2->vol = FUNC_0(VAR_1);
 FUNC_5(&VAR_2->runlist);
 FUNC_3(&VAR_2->mrec_lock);
 VAR_2->page = ((void*)0);
 VAR_2->page_ofs = 0;
 VAR_2->attr_list_size = 0;
 VAR_2->attr_list = ((void*)0);
 FUNC_5(&VAR_2->attr_list_rl);
 FUNC_2(&VAR_2->attr_list_rl.lock,
    &VAR_0);
 VAR_2->itype.index.block_size = 0;
 VAR_2->itype.index.vcn_size = 0;
 VAR_2->itype.index.collation_rule = 0;
 VAR_2->itype.index.block_size_bits = 0;
 VAR_2->itype.index.vcn_size_bits = 0;
 FUNC_3(&VAR_2->extent_lock);
 VAR_2->nr_extents = 0;
 VAR_2->ext.base_ntfs_ino = ((void*)0);
}
