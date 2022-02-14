
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_path {int p_tree_depth; } ;
struct ocfs2_extent_rec {int e_leaf_clusters; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; int l_next_free_rec; } ;
struct ocfs2_extent_block {int h_blkno; struct ocfs2_extent_list h_list; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_2__ {unsigned int ip_clusters; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct ocfs2_extent_block*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 unsigned int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,unsigned long long,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,struct ocfs2_path*,int *) ;
 int FUNC_11 (int ,int ,int ,struct buffer_head**) ;
 scalar_t__ FUNC_12 (struct ocfs2_extent_rec*) ;
 struct ocfs2_extent_list* FUNC_13 (struct ocfs2_path*) ;
 int FUNC_14 (struct ocfs2_path*) ;

__attribute__((used)) static int FUNC_15(struct inode *VAR_0,
           unsigned int VAR_1,
           struct ocfs2_path *VAR_2,
           struct buffer_head **VAR_3)
{
 int VAR_4, VAR_5 = 0;
 u32 VAR_6;
 struct ocfs2_extent_rec *VAR_7;
 struct ocfs2_extent_block *VAR_8;
 struct ocfs2_extent_list *VAR_9;
 struct buffer_head *VAR_10 = ((void*)0);

 *VAR_3 = ((void*)0);


 if (!VAR_2->p_tree_depth)
  goto out;



 if (FUNC_2(VAR_0)->ip_clusters == VAR_1)
  goto out;

 VAR_9 = FUNC_13(VAR_2);
 FUNC_0(!VAR_9->l_next_free_rec);
 VAR_4 = FUNC_6(VAR_9->l_next_free_rec);
 VAR_7 = ((void*)0);
 if (FUNC_12(&VAR_9->l_recs[0])) {
  if (VAR_4 > 2)
   goto out;


  if (VAR_4 == 2)
   VAR_7 = &VAR_9->l_recs[1];





 } else {
  if (VAR_4 > 1)
   goto out;

  VAR_7 = &VAR_9->l_recs[0];
 }

 if (VAR_7) {




  if (FUNC_6(VAR_7->e_leaf_clusters) > VAR_1)
   goto out;
 }

 VAR_5 = FUNC_10(VAR_0->i_sb, VAR_2, &VAR_6);
 if (VAR_5) {
  FUNC_9(VAR_5);
  goto out;
 }

 VAR_5 = FUNC_11(FUNC_1(VAR_0), FUNC_14(VAR_2), VAR_6, &VAR_10);
 if (VAR_5) {
  FUNC_9(VAR_5);
  goto out;
 }

 VAR_8 = (struct ocfs2_extent_block *) VAR_10->b_data;
 VAR_9 = &VAR_8->h_list;



 FUNC_0(!FUNC_3(VAR_8));

 *VAR_3 = VAR_10;
 FUNC_5(*VAR_3);
 FUNC_8(0, "returning block %llu, (cpos: %u)\n",
      (unsigned long long)FUNC_7(VAR_8->h_blkno), VAR_6);
out:
 FUNC_4(VAR_10);

 return VAR_5;
}
