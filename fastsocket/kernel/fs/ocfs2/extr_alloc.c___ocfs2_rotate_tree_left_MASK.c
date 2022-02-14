
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct ocfs2_path {int p_tree_depth; TYPE_2__* p_node; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
typedef int handle_t ;
struct TYPE_6__ {int * l_recs; } ;
struct TYPE_5__ {TYPE_1__* bh; } ;
struct TYPE_4__ {scalar_t__ b_blocknr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int,unsigned long long,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ocfs2_path*,struct ocfs2_path*) ;
 int FUNC_4 (int *,int,int,struct ocfs2_path*) ;
 int FUNC_5 (struct super_block*,struct ocfs2_path*,scalar_t__*) ;
 int FUNC_6 (int ,struct ocfs2_path*,scalar_t__) ;
 int FUNC_7 (struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_path*) ;
 int FUNC_8 (struct ocfs2_path*) ;
 int FUNC_9 (int *) ;
 struct super_block* FUNC_10 (int ) ;
 int FUNC_11 (struct ocfs2_path*,struct ocfs2_path*) ;
 struct ocfs2_path* FUNC_12 (struct ocfs2_path*) ;
 int FUNC_13 (int *,int ,struct ocfs2_path*,int ) ;
 int FUNC_14 (int *,struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_path*,int,struct ocfs2_cached_dealloc_ctxt*,int*) ;
 TYPE_3__* FUNC_15 (struct ocfs2_path*) ;

__attribute__((used)) static int FUNC_16(handle_t *VAR_2,
        struct ocfs2_extent_tree *VAR_3,
        int VAR_4,
        struct ocfs2_path *VAR_5,
        struct ocfs2_cached_dealloc_ctxt *VAR_6,
        struct ocfs2_path **VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 u32 VAR_11;
 struct ocfs2_path *VAR_12 = ((void*)0);
 struct ocfs2_path *VAR_13 = ((void*)0);
 struct super_block *VAR_14 = FUNC_10(VAR_3->et_ci);

 FUNC_0(!FUNC_9(&(FUNC_15(VAR_5)->l_recs[0])));

 *VAR_7 = ((void*)0);

 VAR_8 = FUNC_5(VAR_14, VAR_5, &VAR_11);
 if (VAR_8) {
  FUNC_2(VAR_8);
  goto out;
 }

 VAR_12 = FUNC_12(VAR_5);
 if (!VAR_12) {
  VAR_8 = -VAR_1;
  FUNC_2(VAR_8);
  goto out;
 }

 FUNC_3(VAR_12, VAR_5);

 VAR_13 = FUNC_12(VAR_5);
 if (!VAR_13) {
  VAR_8 = -VAR_1;
  FUNC_2(VAR_8);
  goto out;
 }

 while (VAR_11) {
  VAR_8 = FUNC_6(VAR_3->et_ci, VAR_13, VAR_11);
  if (VAR_8) {
   FUNC_2(VAR_8);
   goto out;
  }

  VAR_9 = FUNC_7(VAR_3, VAR_12,
             VAR_13);

  FUNC_1(0, "Subtree root at index %d (blk %llu, depth %d)\n",
       VAR_9,
       (unsigned long long)
       VAR_13->p_node[VAR_9].bh->b_blocknr,
       VAR_13->p_tree_depth);

  VAR_8 = FUNC_4(VAR_2, VAR_9,
            VAR_4, VAR_12);
  if (VAR_8) {
   FUNC_2(VAR_8);
   goto out;
  }





  VAR_8 = FUNC_13(VAR_2, VAR_3->et_ci,
         VAR_12, 0);
  if (VAR_8) {
   FUNC_2(VAR_8);
   goto out;
  }

  VAR_8 = FUNC_14(VAR_2, VAR_3, VAR_12,
      VAR_13, VAR_9,
      VAR_6, &VAR_10);
  if (VAR_8 == -VAR_0) {






   *VAR_7 = VAR_13;
   VAR_13 = ((void*)0);
   goto out;
  }
  if (VAR_8) {
   FUNC_2(VAR_8);
   goto out;
  }






  if (VAR_10)
   break;

  FUNC_11(VAR_12, VAR_13);

  VAR_8 = FUNC_5(VAR_14, VAR_12,
           &VAR_11);
  if (VAR_8) {
   FUNC_2(VAR_8);
   goto out;
  }
 }

out:
 FUNC_8(VAR_13);
 FUNC_8(VAR_12);

 return VAR_8;
}
