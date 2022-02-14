
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_super {int osb_lock; struct ocfs2_refcount_tree* osb_ref_tree_lru; } ;
struct ocfs2_refcount_tree {int rf_ci; int rf_generation; int rf_blkno; } ;
struct ocfs2_refcount_block {int rf_generation; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct ocfs2_refcount_tree*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 struct ocfs2_refcount_tree* FUNC_4 (struct ocfs2_super*,int ) ;
 struct ocfs2_refcount_tree* FUNC_5 (struct ocfs2_super*,int ) ;
 int FUNC_6 (struct ocfs2_refcount_tree*) ;
 int FUNC_7 (struct ocfs2_super*,struct ocfs2_refcount_tree*,int ,int ) ;
 int FUNC_8 (struct ocfs2_super*,struct ocfs2_refcount_tree*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,struct buffer_head**) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct ocfs2_super *VAR_1, u64 VAR_2,
       struct ocfs2_refcount_tree **VAR_3)
{
 int VAR_4 = 0;
 struct ocfs2_refcount_tree *VAR_5, *VAR_6 = ((void*)0);
 struct buffer_head *VAR_7 = ((void*)0);
 struct ocfs2_refcount_block *VAR_8;

 FUNC_12(&VAR_1->osb_lock);
 if (VAR_1->osb_ref_tree_lru &&
     VAR_1->osb_ref_tree_lru->rf_blkno == VAR_2)
  VAR_5 = VAR_1->osb_ref_tree_lru;
 else
  VAR_5 = FUNC_5(VAR_1, VAR_2);
 if (VAR_5)
  goto out;

 FUNC_13(&VAR_1->osb_lock);

 VAR_6 = FUNC_4(VAR_1, VAR_2);
 if (!VAR_6) {
  VAR_4 = -VAR_0;
  FUNC_3(VAR_4);
  return VAR_4;
 }
 VAR_4 = FUNC_11(&VAR_6->rf_ci, VAR_2, &VAR_7);
 if (VAR_4) {
  FUNC_3(VAR_4);
  FUNC_9(&VAR_6->rf_ci);
  FUNC_1(VAR_6);
  return VAR_4;
 }

 VAR_8 = (struct ocfs2_refcount_block *)VAR_7->b_data;
 VAR_6->rf_generation = FUNC_2(VAR_8->rf_generation);
 FUNC_7(VAR_1, VAR_6, VAR_2,
          VAR_6->rf_generation);
 FUNC_10(&VAR_6->rf_ci);

 FUNC_12(&VAR_1->osb_lock);
 VAR_5 = FUNC_5(VAR_1, VAR_2);
 if (VAR_5)
  goto out;

 FUNC_8(VAR_1, VAR_6);

 VAR_5 = VAR_6;
 VAR_6 = ((void*)0);

out:
 *VAR_3 = VAR_5;

 VAR_1->osb_ref_tree_lru = VAR_5;

 FUNC_13(&VAR_1->osb_lock);

 if (VAR_6)
  FUNC_6(VAR_6);

 FUNC_0(VAR_7);
 return VAR_4;
}
