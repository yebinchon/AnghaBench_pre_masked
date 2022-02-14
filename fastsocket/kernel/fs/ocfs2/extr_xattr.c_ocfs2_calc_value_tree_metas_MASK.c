
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xattr_header {int dummy; } ;
struct ocfs2_xattr_bucket {TYPE_1__** bu_bhs; scalar_t__ bu_blocks; } ;
struct ocfs2_value_tree_metas {int num_recs; int credits; int num_metas; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {scalar_t__ b_data; } ;


 int FUNC_0 (int ,TYPE_1__*,struct ocfs2_xattr_header*,int *,int *,int *,int ,struct ocfs2_xattr_bucket*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1,
          struct ocfs2_xattr_bucket *VAR_2,
          void *VAR_3)
{
 struct ocfs2_value_tree_metas *VAR_4 =
   (struct ocfs2_value_tree_metas *)VAR_3;
 struct ocfs2_xattr_header *VAR_5 =
   (struct ocfs2_xattr_header *)VAR_2->bu_bhs[0]->b_data;


 VAR_4->credits += VAR_2->bu_blocks;
 return FUNC_0(VAR_1->i_sb, VAR_2->bu_bhs[0],
     VAR_5, &VAR_4->num_metas,
     &VAR_4->credits, &VAR_4->num_recs,
     VAR_0,
     VAR_2);
}
