
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct ocfs2_path {int p_tree_depth; TYPE_2__* p_node; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct TYPE_10__ {int h_buffer_credits; } ;
typedef TYPE_3__ handle_t ;
typedef enum ocfs2_split_type { ____Placeholder_ocfs2_split_type } ocfs2_split_type ;
struct TYPE_11__ {scalar_t__ b_blocknr; } ;
struct TYPE_9__ {TYPE_1__* bh; } ;
struct TYPE_8__ {scalar_t__ b_blocknr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,unsigned long long,...) ;
 int FUNC_1 (int,char*,unsigned long long,scalar_t__,scalar_t__,unsigned long long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int,int,struct ocfs2_path*) ;
 int FUNC_4 (struct super_block*,struct ocfs2_path*,scalar_t__*) ;
 int FUNC_5 (int ,struct ocfs2_path*,scalar_t__) ;
 int FUNC_6 (struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_path*) ;
 int FUNC_7 (struct ocfs2_path*) ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 struct super_block* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct ocfs2_path*,struct ocfs2_path*) ;
 struct ocfs2_path* FUNC_12 (struct ocfs2_path*) ;
 scalar_t__ FUNC_13 (struct ocfs2_path*,scalar_t__) ;
 int FUNC_14 (TYPE_3__*,struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_path*,int) ;
 TYPE_4__* FUNC_15 (struct ocfs2_path*) ;
 int FUNC_16 (struct ocfs2_path*) ;

__attribute__((used)) static int FUNC_17(handle_t *VAR_2,
       struct ocfs2_extent_tree *VAR_3,
       enum ocfs2_split_type VAR_4,
       u32 VAR_5,
       struct ocfs2_path *VAR_6,
       struct ocfs2_path **VAR_7)
{
 int VAR_8, VAR_9, VAR_10 = VAR_2->h_buffer_credits;
 u32 VAR_11;
 struct ocfs2_path *VAR_12 = ((void*)0);
 struct super_block *VAR_13 = FUNC_9(VAR_3->et_ci);

 *VAR_7 = ((void*)0);

 VAR_12 = FUNC_12(VAR_6);
 if (!VAR_12) {
  VAR_8 = -VAR_0;
  FUNC_2(VAR_8);
  goto out;
 }

 VAR_8 = FUNC_4(VAR_13, VAR_6, &VAR_11);
 if (VAR_8) {
  FUNC_2(VAR_8);
  goto out;
 }

 FUNC_0(0, "Insert: %u, first left path cpos: %u\n", VAR_5, VAR_11);
 while (VAR_11 && VAR_5 <= VAR_11) {
  FUNC_0(0, "Rotating a tree: ins. cpos: %u, left path cpos: %u\n",
       VAR_5, VAR_11);

  VAR_8 = FUNC_5(VAR_3->et_ci, VAR_12, VAR_11);
  if (VAR_8) {
   FUNC_2(VAR_8);
   goto out;
  }

  FUNC_1(FUNC_15(VAR_12) ==
    FUNC_15(VAR_6),
    "Owner %llu: error during insert of %u "
    "(left path cpos %u) results in two identical "
    "paths ending at %llu\n",
    (unsigned long long)FUNC_10(VAR_3->et_ci),
    VAR_5, VAR_11,
    (unsigned long long)
    FUNC_15(VAR_12)->b_blocknr);

  if (VAR_4 == VAR_1 &&
      FUNC_13(VAR_12,
         VAR_5)) {
   *VAR_7 = VAR_12;
   goto out_ret_path;
  }

  VAR_9 = FUNC_6(VAR_3, VAR_12, VAR_6);

  FUNC_0(0, "Subtree root at index %d (blk %llu, depth %d)\n",
       VAR_9,
       (unsigned long long) VAR_6->p_node[VAR_9].bh->b_blocknr,
       VAR_6->p_tree_depth);

  VAR_8 = FUNC_3(VAR_2, VAR_9,
            VAR_10, VAR_6);
  if (VAR_8) {
   FUNC_2(VAR_8);
   goto out;
  }

  VAR_8 = FUNC_14(VAR_2, VAR_3, VAR_12,
       VAR_6, VAR_9);
  if (VAR_8) {
   FUNC_2(VAR_8);
   goto out;
  }

  if (VAR_4 != VAR_1 &&
      FUNC_8(FUNC_16(VAR_6),
      VAR_5)) {
   *VAR_7 = VAR_12;
   goto out_ret_path;
  }






  FUNC_11(VAR_6, VAR_12);

  VAR_8 = FUNC_4(VAR_13, VAR_6, &VAR_11);
  if (VAR_8) {
   FUNC_2(VAR_8);
   goto out;
  }
 }

out:
 FUNC_7(VAR_12);

out_ret_path:
 return VAR_8;
}
