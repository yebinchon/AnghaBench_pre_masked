
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ocfs2_path {int dummy; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_rec {int e_cpos; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; int l_next_free_rec; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,unsigned long long,scalar_t__,scalar_t__,int,scalar_t__,scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,unsigned long long,scalar_t__,...) ;
 int FUNC_6 (struct ocfs2_extent_tree*,int ) ;
 int FUNC_7 (int ,struct ocfs2_path*,scalar_t__) ;
 int FUNC_8 (struct ocfs2_path*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 struct ocfs2_path* FUNC_11 (struct ocfs2_extent_tree*) ;
 scalar_t__ FUNC_12 (struct ocfs2_extent_list*,struct ocfs2_extent_rec*) ;
 int FUNC_13 (struct ocfs2_path*,int) ;
 int FUNC_14 (struct ocfs2_extent_list*,scalar_t__) ;
 int FUNC_15 (int *,struct ocfs2_extent_tree*,struct ocfs2_path*,int,scalar_t__,struct ocfs2_alloc_context*) ;
 int FUNC_16 (int *,struct ocfs2_extent_tree*,struct ocfs2_path*,int,struct ocfs2_cached_dealloc_ctxt*,scalar_t__,scalar_t__) ;
 struct ocfs2_extent_list* FUNC_17 (struct ocfs2_path*) ;

int FUNC_18(handle_t *VAR_2,
   struct ocfs2_extent_tree *VAR_3,
   u32 VAR_4, u32 VAR_5,
   struct ocfs2_alloc_context *VAR_6,
   struct ocfs2_cached_dealloc_ctxt *VAR_7)
{
 int VAR_8, VAR_9;
 u32 VAR_10, VAR_11;
 struct ocfs2_extent_rec *VAR_12;
 struct ocfs2_extent_list *VAR_13;
 struct ocfs2_path *VAR_14 = ((void*)0);





 FUNC_6(VAR_3, 0);

 VAR_14 = FUNC_11(VAR_3);
 if (!VAR_14) {
  VAR_8 = -VAR_0;
  FUNC_4(VAR_8);
  goto out;
 }

 VAR_8 = FUNC_7(VAR_3->et_ci, VAR_14, VAR_4);
 if (VAR_8) {
  FUNC_4(VAR_8);
  goto out;
 }

 VAR_13 = FUNC_17(VAR_14);
 VAR_9 = FUNC_14(VAR_13, VAR_4);
 if (VAR_9 == -1 || VAR_9 >= FUNC_1(VAR_13->l_next_free_rec)) {
  FUNC_5(FUNC_9(VAR_3->et_ci),
       "Owner %llu has an extent at cpos %u which can no "
       "longer be found.\n",
       (unsigned long long)FUNC_10(VAR_3->et_ci),
       VAR_4);
  VAR_8 = -VAR_1;
  goto out;
 }
 VAR_12 = &VAR_13->l_recs[VAR_9];
 VAR_10 = FUNC_2(VAR_12->e_cpos) + FUNC_12(VAR_13, VAR_12);
 VAR_11 = VAR_4 + VAR_5;

 FUNC_0(VAR_4 < FUNC_2(VAR_12->e_cpos) || VAR_11 > VAR_10);

 FUNC_3(0, "Owner %llu, remove (cpos %u, len %u). Existing index %d "
      "(cpos %u, len %u)\n",
      (unsigned long long)FUNC_10(VAR_3->et_ci),
      VAR_4, VAR_5, VAR_9,
      FUNC_2(VAR_12->e_cpos), FUNC_12(VAR_13, VAR_12));

 if (FUNC_2(VAR_12->e_cpos) == VAR_4 || VAR_10 == VAR_11) {
  VAR_8 = FUNC_16(VAR_2, VAR_3, VAR_14, VAR_9, VAR_7,
      VAR_4, VAR_5);
  if (VAR_8) {
   FUNC_4(VAR_8);
   goto out;
  }
 } else {
  VAR_8 = FUNC_15(VAR_2, VAR_3, VAR_14, VAR_9,
           VAR_11, VAR_6);
  if (VAR_8) {
   FUNC_4(VAR_8);
   goto out;
  }





  FUNC_13(VAR_14, 1);

  VAR_8 = FUNC_7(VAR_3->et_ci, VAR_14, VAR_4);
  if (VAR_8) {
   FUNC_4(VAR_8);
   goto out;
  }

  VAR_13 = FUNC_17(VAR_14);
  VAR_9 = FUNC_14(VAR_13, VAR_4);
  if (VAR_9 == -1 || VAR_9 >= FUNC_1(VAR_13->l_next_free_rec)) {
   FUNC_5(FUNC_9(VAR_3->et_ci),
        "Owner %llu: split at cpos %u lost record.",
        (unsigned long long)FUNC_10(VAR_3->et_ci),
        VAR_4);
   VAR_8 = -VAR_1;
   goto out;
  }





  VAR_12 = &VAR_13->l_recs[VAR_9];
  VAR_10 = FUNC_2(VAR_12->e_cpos) +
   FUNC_12(VAR_13, VAR_12);
  if (VAR_10 != VAR_11) {
   FUNC_5(FUNC_9(VAR_3->et_ci),
        "Owner %llu: error after split at cpos %u"
        "trunc len %u, existing record is (%u,%u)",
        (unsigned long long)FUNC_10(VAR_3->et_ci),
        VAR_4, VAR_5, FUNC_2(VAR_12->e_cpos),
        FUNC_12(VAR_13, VAR_12));
   VAR_8 = -VAR_1;
   goto out;
  }

  VAR_8 = FUNC_16(VAR_2, VAR_3, VAR_14, VAR_9, VAR_7,
      VAR_4, VAR_5);
  if (VAR_8) {
   FUNC_4(VAR_8);
   goto out;
  }
 }

out:
 FUNC_8(VAR_14);
 return VAR_8;
}
