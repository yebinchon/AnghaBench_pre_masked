
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct super_block {int s_blocksize; } ;
struct ocfs2_xattr_value_buf {int vb_access; } ;
struct ocfs2_reflink_xattr_tree_args {TYPE_2__* new_bucket; TYPE_2__* old_bucket; TYPE_5__* reflink; } ;
struct ocfs2_alloc_context {int dummy; } ;
typedef int handle_t ;
struct TYPE_16__ {int xh_num_buckets; } ;
struct TYPE_15__ {TYPE_1__* old_inode; } ;
struct TYPE_14__ {int bu_blocks; int * bu_bhs; } ;
struct TYPE_13__ {struct super_block* i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 TYPE_6__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_2__*,int) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (int *,TYPE_5__*,int ,TYPE_6__*,int ,TYPE_6__*,struct ocfs2_xattr_value_buf*,struct ocfs2_alloc_context*,int ,struct ocfs2_reflink_xattr_tree_args*) ;
 int FUNC_9 (int *,TYPE_2__*,int ) ;
 int FUNC_10 (int *,TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(handle_t *VAR_4,
    u64 VAR_5, u64 VAR_6, u32 VAR_7,
    struct ocfs2_alloc_context *VAR_8,
    struct ocfs2_alloc_context *VAR_9,
    struct ocfs2_reflink_xattr_tree_args *VAR_10)
{
 int VAR_11, VAR_12, VAR_13 = 0;
 struct super_block *VAR_14 = VAR_10->reflink->old_inode->i_sb;
 u32 VAR_15 = FUNC_12(FUNC_0(VAR_14));
 u32 VAR_16 = VAR_7 * VAR_15;
 int VAR_17 = VAR_10->old_bucket->bu_blocks;
 struct ocfs2_xattr_value_buf VAR_18 = {
  .vb_access = VAR_3,
 };

 for (VAR_11 = 0; VAR_11 < VAR_16; VAR_11++, VAR_5 += VAR_17, VAR_6 += VAR_17) {
  VAR_13 = FUNC_7(VAR_10->old_bucket, VAR_5);
  if (VAR_13) {
   FUNC_5(VAR_13);
   break;
  }

  VAR_13 = FUNC_6(VAR_10->new_bucket, VAR_6);
  if (VAR_13) {
   FUNC_5(VAR_13);
   break;
  }





  if (VAR_11 == 0)
   VAR_16 = FUNC_3(
    FUNC_2(VAR_10->old_bucket)->xh_num_buckets);

  VAR_13 = FUNC_9(VAR_4,
      VAR_10->new_bucket,
      VAR_0);
  if (VAR_13) {
   FUNC_5(VAR_13);
   break;
  }

  for (VAR_12 = 0; VAR_12 < VAR_17; VAR_12++)
   FUNC_4(FUNC_1(VAR_10->new_bucket, VAR_12),
          FUNC_1(VAR_10->old_bucket, VAR_12),
          VAR_14->s_blocksize);

  FUNC_10(VAR_4, VAR_10->new_bucket);

  VAR_13 = FUNC_8(VAR_4, VAR_10->reflink,
     VAR_10->old_bucket->bu_bhs[0],
     FUNC_2(VAR_10->old_bucket),
     VAR_10->new_bucket->bu_bhs[0],
     FUNC_2(VAR_10->new_bucket),
     &VAR_18, VAR_8,
     VAR_2,
     VAR_10);
  if (VAR_13) {
   FUNC_5(VAR_13);
   break;
  }






  VAR_13 = FUNC_9(VAR_4,
      VAR_10->new_bucket,
      VAR_1);
  if (VAR_13) {
   FUNC_5(VAR_13);
   break;
  }

  FUNC_10(VAR_4, VAR_10->new_bucket);
  FUNC_11(VAR_10->old_bucket);
  FUNC_11(VAR_10->new_bucket);
 }

 FUNC_11(VAR_10->old_bucket);
 FUNC_11(VAR_10->new_bucket);
 return VAR_13;
}
