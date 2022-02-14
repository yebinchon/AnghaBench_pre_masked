
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct ocfs2_super {int sb; int fs_generation; } ;
struct ocfs2_find_inode_args {int fi_flags; scalar_t__ fi_blkno; } ;
struct TYPE_4__ {int i_rdev; } ;
struct TYPE_5__ {TYPE_1__ dev1; } ;
struct ocfs2_dinode {int i_flags; int i_blkno; TYPE_2__ id1; int i_mode; } ;
struct inode {int i_rdev; struct super_block* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_6__ {int ip_open_lockres; int ip_inode_lockres; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct ocfs2_super* FUNC_2 (struct super_block*) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int,char*,unsigned long long) ;
 int FUNC_13 (char*,struct inode*,struct ocfs2_find_inode_args*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (struct inode*,int *,int ) ;
 int FUNC_17 (int *,int ,int ,struct inode*) ;
 int FUNC_18 (struct inode*,int ) ;
 int FUNC_19 (struct ocfs2_super*) ;
 int FUNC_20 (struct inode*) ;
 int FUNC_21 (struct inode*,struct ocfs2_dinode*,int ) ;
 int FUNC_22 (struct ocfs2_super*,scalar_t__,int,struct buffer_head**) ;
 int FUNC_23 (struct inode*,struct buffer_head**,int ) ;
 int FUNC_24 (struct inode*,int ) ;
 int FUNC_25 (int ,struct buffer_head*) ;

__attribute__((used)) static int FUNC_26(struct inode *VAR_8,
       struct ocfs2_find_inode_args *VAR_9)
{
 struct super_block *VAR_10;
 struct ocfs2_super *VAR_11;
 struct ocfs2_dinode *VAR_12;
 struct buffer_head *VAR_13 = ((void*)0);
 int VAR_14, VAR_15;
 u32 VAR_16 = 0;

 FUNC_13("(0x%p, 0x%p)\n", VAR_8, VAR_9);

 VAR_14 = -VAR_0;
 if (VAR_8 == ((void*)0) || VAR_8->i_sb == ((void*)0)) {
  FUNC_11(VAR_1, "bad inode\n");
  return VAR_14;
 }
 VAR_10 = VAR_8->i_sb;
 VAR_11 = FUNC_2(VAR_10);

 if (!VAR_9) {
  FUNC_11(VAR_1, "bad inode args\n");
  FUNC_10(VAR_8);
  return VAR_14;
 }
 VAR_15 = !(VAR_9->fi_flags & VAR_4)
  && !(VAR_9->fi_flags & VAR_3)
  && !FUNC_19(VAR_11);
 if (VAR_9->fi_flags & VAR_4)
  VAR_16 = VAR_11->fs_generation;

 FUNC_17(&FUNC_1(VAR_8)->ip_inode_lockres,
      VAR_5,
      VAR_16, VAR_8);

 FUNC_17(&FUNC_1(VAR_8)->ip_open_lockres,
      VAR_6,
      0, VAR_8);

 if (VAR_15) {
  VAR_14 = FUNC_20(VAR_8);
  if (VAR_14) {
   FUNC_10(VAR_8);
   FUNC_14(VAR_14);
   return VAR_14;
  }
  VAR_14 = FUNC_16(VAR_8, ((void*)0), 0);
  if (VAR_14) {
   FUNC_10(VAR_8);
   FUNC_14(VAR_14);
   return VAR_14;
  }
 }

 if (VAR_9->fi_flags & VAR_3) {
  VAR_14 = FUNC_24(VAR_8, 0);
  if (VAR_14) {
   FUNC_10(VAR_8);
   return VAR_14;
  }
 }

 if (VAR_15) {
  VAR_14 = FUNC_23(VAR_8, &VAR_13,
           VAR_2);
 } else {
  VAR_14 = FUNC_22(VAR_11, VAR_9->fi_blkno, 1, &VAR_13);
  if (!VAR_14)
   VAR_14 = FUNC_25(VAR_11->sb, VAR_13);
 }
 if (VAR_14 < 0) {
  FUNC_14(VAR_14);
  goto bail;
 }

 VAR_14 = -VAR_0;
 VAR_12 = (struct ocfs2_dinode *) VAR_13->b_data;






 FUNC_12(!!(VAR_12->i_flags & FUNC_6(VAR_7)) !=
   !!(VAR_9->fi_flags & VAR_4),
   "Inode %llu: system file state is ambigous\n",
   (unsigned long long)VAR_9->fi_blkno);

 if (FUNC_4(FUNC_8(VAR_12->i_mode)) ||
     FUNC_3(FUNC_8(VAR_12->i_mode)))
  VAR_8->i_rdev = FUNC_7(FUNC_9(VAR_12->id1.dev1.i_rdev));

 FUNC_21(VAR_8, VAR_12, 0);

 FUNC_0(VAR_9->fi_blkno != FUNC_9(VAR_12->i_blkno));

 VAR_14 = 0;

bail:
 if (VAR_15)
  FUNC_18(VAR_8, 0);

 if (VAR_14 < 0)
  FUNC_10(VAR_8);

 if (VAR_9 && VAR_13)
  FUNC_5(VAR_13);

 FUNC_15(VAR_14);
 return VAR_14;
}
