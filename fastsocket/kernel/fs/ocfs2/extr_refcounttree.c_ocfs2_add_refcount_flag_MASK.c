
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_post_refcount {int (* func ) (struct inode*,int *,int ) ;int para; scalar_t__ credits; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_caching_info {int dummy; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 scalar_t__ FUNC_0 (int *) ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct ocfs2_caching_info*,struct buffer_head*,int ,int ,int ,struct ocfs2_alloc_context*,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_4 (int ,char*,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,struct ocfs2_caching_info*,struct buffer_head*,int ,int ,int*,int*) ;
 int FUNC_7 (struct ocfs2_super*,int *) ;
 int FUNC_8 (struct ocfs2_alloc_context*) ;
 int FUNC_9 (struct inode*,struct ocfs2_extent_tree*,int *,int ,int ,int ,struct ocfs2_alloc_context*,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_10 (struct ocfs2_super*,int,struct ocfs2_alloc_context**) ;
 int * FUNC_11 (struct ocfs2_super*,int) ;
 int FUNC_12 (struct inode*,int *,int ) ;

int FUNC_13(struct inode *VAR_0,
       struct ocfs2_extent_tree *VAR_1,
       struct ocfs2_caching_info *VAR_2,
       struct buffer_head *VAR_3,
       u32 VAR_4, u32 VAR_5, u32 VAR_6,
       struct ocfs2_cached_dealloc_ctxt *VAR_7,
       struct ocfs2_post_refcount *VAR_8)
{
 int VAR_9;
 handle_t *VAR_10;
 int VAR_11 = 1, VAR_12 = 0;
 struct ocfs2_super *VAR_13 = FUNC_1(VAR_0->i_sb);
 struct ocfs2_alloc_context *VAR_14 = ((void*)0);

 VAR_9 = FUNC_6(VAR_0->i_sb,
            VAR_2, VAR_3,
            VAR_5, VAR_6,
            &VAR_12, &VAR_11);
 if (VAR_9) {
  FUNC_5(VAR_9);
  goto out;
 }

 FUNC_4(0, "reserve new metadata %d, credits = %d\n",
      VAR_12, VAR_11);

 if (VAR_12) {
  VAR_9 = FUNC_10(FUNC_1(VAR_0->i_sb),
       VAR_12, &VAR_14);
  if (VAR_9) {
   FUNC_5(VAR_9);
   goto out;
  }
 }

 if (VAR_8)
  VAR_11 += VAR_8->credits;

 VAR_10 = FUNC_11(VAR_13, VAR_11);
 if (FUNC_0(VAR_10)) {
  VAR_9 = FUNC_2(VAR_10);
  FUNC_5(VAR_9);
  goto out;
 }

 VAR_9 = FUNC_9(VAR_0, VAR_1, VAR_10,
        VAR_4, VAR_6, VAR_5,
        VAR_14, VAR_7);
 if (VAR_9) {
  FUNC_5(VAR_9);
  goto out_commit;
 }

 VAR_9 = FUNC_3(VAR_10, VAR_2, VAR_3,
     VAR_5, VAR_6, 0,
     VAR_14, VAR_7);
 if (VAR_9) {
  FUNC_5(VAR_9);
  goto out_commit;
 }

 if (VAR_8 && VAR_8->func) {
  VAR_9 = VAR_8->func(VAR_0, VAR_10, VAR_8->para);
  if (VAR_9)
   FUNC_5(VAR_9);
 }

out_commit:
 FUNC_7(VAR_13, VAR_10);
out:
 if (VAR_14)
  FUNC_8(VAR_14);
 return VAR_9;
}
