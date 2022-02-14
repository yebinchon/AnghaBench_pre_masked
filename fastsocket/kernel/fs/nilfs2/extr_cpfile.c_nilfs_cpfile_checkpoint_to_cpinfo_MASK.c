
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_cpinfo {void* ci_next; void* ci_blocks_count; void* ci_inodes_count; void* ci_nblk_inc; void* ci_create; void* ci_cno; int ci_flags; } ;
struct TYPE_2__ {int ssl_next; } ;
struct nilfs_checkpoint {TYPE_1__ cp_snapshot_list; int cp_blocks_count; int cp_inodes_count; int cp_nblk_inc; int cp_create; int cp_cno; int cp_flags; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct inode *VAR_0,
           struct nilfs_checkpoint *VAR_1,
           struct nilfs_cpinfo *VAR_2)
{
 VAR_2->ci_flags = FUNC_0(VAR_1->cp_flags);
 VAR_2->ci_cno = FUNC_1(VAR_1->cp_cno);
 VAR_2->ci_create = FUNC_1(VAR_1->cp_create);
 VAR_2->ci_nblk_inc = FUNC_1(VAR_1->cp_nblk_inc);
 VAR_2->ci_inodes_count = FUNC_1(VAR_1->cp_inodes_count);
 VAR_2->ci_blocks_count = FUNC_1(VAR_1->cp_blocks_count);
 VAR_2->ci_next = FUNC_1(VAR_1->cp_snapshot_list.ssl_next);
}
