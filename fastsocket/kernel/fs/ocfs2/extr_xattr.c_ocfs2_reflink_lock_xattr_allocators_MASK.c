
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xattr_header {int dummy; } ;
struct ocfs2_super {int sb; } ;
struct TYPE_2__ {int l_next_free_rec; int l_tree_depth; } ;
struct ocfs2_refcount_block {TYPE_1__ rf_list; int rf_flags; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ocfs2_super*,int,struct ocfs2_alloc_context**) ;
 int FUNC_5 (int ,int *,struct ocfs2_xattr_header*,int*,int*,int*,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct ocfs2_super *VAR_3,
     struct ocfs2_xattr_header *VAR_4,
     struct buffer_head *VAR_5,
     int *VAR_6,
     struct ocfs2_alloc_context **VAR_7)
{
 int VAR_8, VAR_9 = 0, VAR_10 = 0;
 struct ocfs2_refcount_block *VAR_11 =
   (struct ocfs2_refcount_block *)VAR_5->b_data;

 *VAR_6 = 0;

 VAR_8 = FUNC_5(VAR_3->sb, ((void*)0), VAR_4,
      &VAR_9, VAR_6, &VAR_10,
      VAR_2,
      ((void*)0));
 if (VAR_8) {
  FUNC_2(VAR_8);
  goto out;
 }
 VAR_10 = VAR_10 / FUNC_3(VAR_3->sb) * 2;
 VAR_9 += VAR_10;
 *VAR_6 += VAR_10 + VAR_10 * VAR_0;
 if (FUNC_1(VAR_11->rf_flags) & VAR_1)
  *VAR_6 += FUNC_0(VAR_11->rf_list.l_tree_depth) *
       FUNC_0(VAR_11->rf_list.l_next_free_rec) + 1;
 else
  *VAR_6 += 1;

 VAR_8 = FUNC_4(VAR_3, VAR_9, VAR_7);
 if (VAR_8)
  FUNC_2(VAR_8);

out:
 return VAR_8;
}
