
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct ocfs2_super {int s_mount_opt; int s_num_inodes_stolen; int osb_lock; scalar_t__ osb_inode_alloc_group; int slot_num; } ;
struct ocfs2_alloc_context {int ac_bits_wanted; scalar_t__ ac_max_block; int ac_group_search; int ac_which; } ;
typedef scalar_t__ s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 struct ocfs2_alloc_context* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,char*,unsigned long long) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_10 ;
 int FUNC_7 (struct ocfs2_alloc_context*) ;
 int FUNC_8 (struct ocfs2_alloc_context*) ;
 scalar_t__ FUNC_9 (struct ocfs2_super*) ;
 int FUNC_10 (struct ocfs2_super*) ;
 int FUNC_11 (struct ocfs2_super*,struct ocfs2_alloc_context*,int ,int ,scalar_t__*,int) ;
 int FUNC_12 (struct ocfs2_super*,struct ocfs2_alloc_context*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

int FUNC_15(struct ocfs2_super *VAR_11,
       struct ocfs2_alloc_context **VAR_12)
{
 int VAR_13;
 s16 VAR_14 = FUNC_9(VAR_11);
 u64 VAR_15;

 *VAR_12 = FUNC_3(sizeof(struct ocfs2_alloc_context), VAR_4);
 if (!(*VAR_12)) {
  VAR_13 = -VAR_2;
  FUNC_5(VAR_13);
  goto bail;
 }

 (*VAR_12)->ac_bits_wanted = 1;
 (*VAR_12)->ac_which = VAR_6;

 (*VAR_12)->ac_group_search = VAR_10;






 if (!(VAR_11->s_mount_opt & VAR_9))
  (*VAR_12)->ac_max_block = (u32)~0U;
 if (VAR_14 != VAR_7 &&
     FUNC_1(&VAR_11->s_num_inodes_stolen) < VAR_8)
  goto inode_steal;

 FUNC_2(&VAR_11->s_num_inodes_stolen, 0);
 VAR_15 = VAR_11->osb_inode_alloc_group;
 VAR_13 = FUNC_11(VAR_11, *VAR_12,
          VAR_5,
          VAR_11->slot_num,
          &VAR_15,
          VAR_1 |
          VAR_0);
 if (VAR_13 >= 0) {
  VAR_13 = 0;

  FUNC_13(&VAR_11->osb_lock);
  VAR_11->osb_inode_alloc_group = VAR_15;
  FUNC_14(&VAR_11->osb_lock);
  FUNC_4(0, "after reservation, new allocation group is "
       "%llu\n", (unsigned long long)VAR_15);





  if (VAR_14 != VAR_7)
   FUNC_10(VAR_11);
  goto bail;
 } else if (VAR_13 < 0 && VAR_13 != -VAR_3) {
  FUNC_5(VAR_13);
  goto bail;
 }

 FUNC_7(*VAR_12);

inode_steal:
 VAR_13 = FUNC_12(VAR_11, *VAR_12);
 FUNC_0(&VAR_11->s_num_inodes_stolen);
 if (VAR_13 < 0) {
  if (VAR_13 != -VAR_3)
   FUNC_5(VAR_13);
  goto bail;
 }

 VAR_13 = 0;
bail:
 if ((VAR_13 < 0) && *VAR_12) {
  FUNC_8(*VAR_12);
  *VAR_12 = ((void*)0);
 }

 FUNC_6(VAR_13);
 return VAR_13;
}
