
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
typedef int u16 ;
struct ocfs2_xattr_set_ctxt {int meta_ac; int data_ac; int * handle; } ;
struct ocfs2_xattr_bucket {int dummy; } ;
struct ocfs2_super {scalar_t__ s_clustersize_bits; int sb; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
struct TYPE_2__ {scalar_t__ ip_blkno; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ocfs2_super* FUNC_3 (int ) ;
 int FUNC_4 (struct ocfs2_super*,int *,int ,int,int,int*,int*) ;
 scalar_t__ FUNC_5 (struct ocfs2_xattr_bucket*) ;
 int FUNC_6 (int ,char*,int,...) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct inode*,int *,struct ocfs2_xattr_bucket*,struct ocfs2_xattr_bucket*,scalar_t__,int,int*,int*) ;
 void* FUNC_9 (int ,int) ;
 int FUNC_10 (struct ocfs2_extent_tree*,int ,struct buffer_head*) ;
 int FUNC_11 (int *,struct ocfs2_extent_tree*,int,scalar_t__,int,int ,int ) ;
 int FUNC_12 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_13 (int *,struct buffer_head*) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_3,
           struct buffer_head *VAR_4,
           struct ocfs2_xattr_bucket *VAR_5,
           struct ocfs2_xattr_bucket *VAR_6,
           u32 *VAR_7,
           u32 VAR_8,
           int *VAR_9,
           struct ocfs2_xattr_set_ctxt *VAR_10)
{
 int VAR_11;
 u16 VAR_12 = FUNC_9(VAR_3->i_sb, 1);
 u32 VAR_13 = *VAR_7;
 u32 VAR_14 = 1, VAR_15, VAR_16, VAR_17 = 0;
 u64 VAR_18;
 handle_t *VAR_19 = VAR_10->handle;
 struct ocfs2_super *VAR_20 = FUNC_3(VAR_3->i_sb);
 struct ocfs2_extent_tree VAR_21;

 FUNC_6(0, "Add new xattr cluster for %llu, previous xattr hash = %u, "
      "previous xattr blkno = %llu\n",
      (unsigned long long)FUNC_2(VAR_3)->ip_blkno,
      VAR_8, (unsigned long long)FUNC_5(VAR_5));

 FUNC_10(&VAR_21, FUNC_1(VAR_3), VAR_4);

 VAR_11 = FUNC_12(VAR_19, FUNC_1(VAR_3), VAR_4,
          VAR_1);
 if (VAR_11 < 0) {
  FUNC_7(VAR_11);
  goto leave;
 }

 VAR_11 = FUNC_4(VAR_20, VAR_19, VAR_10->data_ac, 1,
         VAR_14, &VAR_15, &VAR_16);
 if (VAR_11 < 0) {
  if (VAR_11 != -VAR_0)
   FUNC_7(VAR_11);
  goto leave;
 }

 FUNC_0(VAR_16 > VAR_14);

 VAR_18 = FUNC_9(VAR_20->sb, VAR_15);
 FUNC_6(0, "Allocating %u clusters at block %u for xattr in inode %llu\n",
      VAR_16, VAR_15, (unsigned long long)FUNC_2(VAR_3)->ip_blkno);

 if (FUNC_5(VAR_5) + (VAR_13 * VAR_12) == VAR_18 &&
     (VAR_13 + VAR_16) << VAR_20->s_clustersize_bits <=
      VAR_2) {
  VAR_17 = VAR_8 + VAR_13;
  *VAR_7 = VAR_13 + VAR_16;
  FUNC_6(0, "Add contiguous %u clusters to previous extent rec.\n",
       VAR_16);
 } else {
  VAR_11 = FUNC_8(VAR_3,
             VAR_19,
             VAR_5,
             VAR_6,
             VAR_18,
             VAR_13,
             &VAR_17,
             VAR_9);
  if (VAR_11) {
   FUNC_7(VAR_11);
   goto leave;
  }
 }

 FUNC_6(0, "Insert %u clusters at block %llu for xattr at %u\n",
      VAR_16, (unsigned long long)VAR_18, VAR_17);
 VAR_11 = FUNC_11(VAR_19, &VAR_21, VAR_17, VAR_18,
      VAR_16, 0, VAR_10->meta_ac);
 if (VAR_11 < 0) {
  FUNC_7(VAR_11);
  goto leave;
 }

 VAR_11 = FUNC_13(VAR_19, VAR_4);
 if (VAR_11 < 0)
  FUNC_7(VAR_11);

leave:
 return VAR_11;
}
