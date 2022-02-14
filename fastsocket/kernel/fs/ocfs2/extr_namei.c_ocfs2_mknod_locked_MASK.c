
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u64 ;
typedef int u16 ;
struct ocfs2_super {TYPE_5__* sb; scalar_t__ fs_generation; int osb_lock; int s_next_generation; } ;
struct ocfs2_extent_list {void* l_count; scalar_t__ l_next_free_rec; scalar_t__ l_tree_depth; } ;
struct TYPE_14__ {void* id_count; } ;
struct TYPE_15__ {struct ocfs2_extent_list i_list; TYPE_3__ i_data; } ;
struct TYPE_12__ {void* i_rdev; } ;
struct TYPE_13__ {TYPE_1__ dev1; } ;
struct ocfs2_dinode {TYPE_4__ id2; void* i_dyn_features; scalar_t__ i_dtime; void* i_atime_nsec; void* i_ctime_nsec; void* i_mtime_nsec; void* i_mtime; void* i_ctime; void* i_atime; int i_flags; int i_signature; scalar_t__ i_last_eb_blk; TYPE_2__ id1; void* i_mode; void* i_gid; void* i_uid; void* i_suballoc_slot; void* i_suballoc_bit; void* i_blkno; void* i_fs_generation; void* i_generation; } ;
struct ocfs2_alloc_context {int ac_alloc_slot; } ;
struct inode {int i_mode; int i_nlink; scalar_t__ i_gid; scalar_t__ i_uid; scalar_t__ i_generation; int i_ino; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
typedef int dev_t ;
struct TYPE_17__ {int ip_blkno; } ;
struct TYPE_16__ {int s_blocksize; } ;
struct TYPE_11__ {scalar_t__ tv_nsec; int tv_sec; } ;


 TYPE_10__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 TYPE_9__* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct buffer_head*) ;
 void* FUNC_6 (int) ;
 void* FUNC_7 (scalar_t__) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_5__*,int ) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (struct ocfs2_dinode*,int ,int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (struct ocfs2_super*,int ) ;
 int FUNC_17 (struct ocfs2_super*,int *,struct inode*,struct buffer_head*,struct ocfs2_alloc_context*,int*,int *) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (TYPE_5__*) ;
 int FUNC_20 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_21 (int *,struct buffer_head*) ;
 int FUNC_22 (TYPE_5__*,struct ocfs2_dinode*) ;
 int FUNC_23 (struct ocfs2_super*) ;
 int FUNC_24 (struct inode*,struct ocfs2_dinode*,int) ;
 int FUNC_25 (struct ocfs2_dinode*,int ) ;
 int FUNC_26 (int ,struct buffer_head*) ;
 scalar_t__ FUNC_27 (struct ocfs2_super*) ;
 struct buffer_head* FUNC_28 (TYPE_5__*,int ) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int ,int ) ;

__attribute__((used)) static int FUNC_32(struct ocfs2_super *VAR_6,
         struct inode *VAR_7,
         struct inode *VAR_8,
         dev_t VAR_9,
         struct buffer_head **VAR_10,
         struct buffer_head *VAR_11,
         handle_t *VAR_12,
         struct ocfs2_alloc_context *VAR_13)
{
 int VAR_14 = 0;
 struct ocfs2_dinode *VAR_15 = ((void*)0);
 struct ocfs2_extent_list *VAR_16;
 u64 VAR_17 = 0;
 u16 VAR_18;
 u16 VAR_19;

 *VAR_10 = ((void*)0);

 VAR_14 = FUNC_17(VAR_6, VAR_12, VAR_7, VAR_11,
           VAR_13, &VAR_18, &VAR_17);
 if (VAR_14 < 0) {
  FUNC_14(VAR_14);
  goto leave;
 }




 VAR_8->i_ino = FUNC_10(VAR_6->sb, VAR_17);
 FUNC_1(VAR_8)->ip_blkno = VAR_17;
 FUNC_29(&VAR_6->osb_lock);
 VAR_8->i_generation = VAR_6->s_next_generation++;
 FUNC_30(&VAR_6->osb_lock);

 *VAR_10 = FUNC_28(VAR_6->sb, VAR_17);
 if (!*VAR_10) {
  VAR_14 = -VAR_1;
  FUNC_14(VAR_14);
  goto leave;
 }
 FUNC_26(FUNC_0(VAR_8), *VAR_10);

 VAR_14 = FUNC_20(VAR_12, FUNC_0(VAR_8),
      *VAR_10,
      VAR_4);
 if (VAR_14 < 0) {
  FUNC_14(VAR_14);
  goto leave;
 }

 VAR_15 = (struct ocfs2_dinode *) (*VAR_10)->b_data;
 FUNC_13(VAR_15, 0, VAR_6->sb->s_blocksize);

 VAR_15->i_generation = FUNC_7(VAR_8->i_generation);
 VAR_15->i_fs_generation = FUNC_7(VAR_6->fs_generation);
 VAR_15->i_blkno = FUNC_8(VAR_17);
 VAR_15->i_suballoc_bit = FUNC_6(VAR_18);
 VAR_15->i_suballoc_slot = FUNC_6(VAR_13->ac_alloc_slot);
 VAR_15->i_uid = FUNC_7(VAR_8->i_uid);
 VAR_15->i_gid = FUNC_7(VAR_8->i_gid);
 VAR_15->i_mode = FUNC_6(VAR_8->i_mode);
 if (FUNC_3(VAR_8->i_mode) || FUNC_2(VAR_8->i_mode))
  VAR_15->id1.dev1.i_rdev = FUNC_8(FUNC_9(VAR_9));

 FUNC_25(VAR_15, VAR_8->i_nlink);

 VAR_15->i_last_eb_blk = 0;
 FUNC_31(VAR_15->i_signature, VAR_3);
 FUNC_12(&VAR_15->i_flags, VAR_5);
 VAR_15->i_atime = VAR_15->i_ctime = VAR_15->i_mtime =
  FUNC_8(VAR_0.tv_sec);
 VAR_15->i_mtime_nsec = VAR_15->i_ctime_nsec = VAR_15->i_atime_nsec =
  FUNC_7(VAR_0.tv_nsec);
 VAR_15->i_dtime = 0;





 VAR_19 = FUNC_11(VAR_15->i_dyn_features);
 if (FUNC_4(VAR_8->i_mode) && FUNC_27(VAR_6)) {
  VAR_15->i_dyn_features = FUNC_6(VAR_19 | VAR_2);

  VAR_15->id2.i_data.id_count = FUNC_6(
    FUNC_22(VAR_6->sb, VAR_15));
 } else {
  VAR_16 = &VAR_15->id2.i_list;
  VAR_16->l_tree_depth = 0;
  VAR_16->l_next_free_rec = 0;
  VAR_16->l_count = FUNC_6(FUNC_19(VAR_6->sb));
 }

 VAR_14 = FUNC_21(VAR_12, *VAR_10);
 if (VAR_14 < 0) {
  FUNC_14(VAR_14);
  goto leave;
 }

 FUNC_24(VAR_8, VAR_15, 1);
 FUNC_16(VAR_6, FUNC_0(VAR_8));
 if (!FUNC_23(VAR_6)) {
  VAR_14 = FUNC_18(VAR_8);
  if (VAR_14 < 0)
   FUNC_14(VAR_14);
 }

 VAR_14 = 0;


leave:
 if (VAR_14 < 0) {
  if (*VAR_10) {
   FUNC_5(*VAR_10);
   *VAR_10 = ((void*)0);
  }
 }

 FUNC_15(VAR_14);
 return VAR_14;
}
