
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct ocfs2_refcount_rec {int r_refcount; int r_clusters; int r_cpos; } ;
struct ocfs2_refcount_list {scalar_t__ rl_used; scalar_t__ rl_count; struct ocfs2_refcount_rec* rl_recs; } ;
struct ocfs2_refcount_block {struct ocfs2_refcount_list rf_records; int rf_flags; } ;
struct ocfs2_caching_info {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (scalar_t__*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct ocfs2_refcount_rec*,struct ocfs2_refcount_rec*,int) ;
 int FUNC_7 (int ,char*,unsigned long long,int,int,unsigned long long,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,struct ocfs2_caching_info*,struct buffer_head*,struct buffer_head*,struct ocfs2_refcount_rec*) ;
 int FUNC_10 (int *,struct ocfs2_caching_info*,struct buffer_head*,struct buffer_head*,struct ocfs2_alloc_context*) ;
 int FUNC_11 (struct ocfs2_caching_info*,struct buffer_head*,scalar_t__,int,int *,int*,struct buffer_head**) ;
 int FUNC_12 (int *,struct ocfs2_caching_info*,struct buffer_head*,int ) ;
 int FUNC_13 (int *,struct buffer_head*) ;
 int FUNC_14 (struct ocfs2_refcount_block*,int) ;

__attribute__((used)) static int FUNC_15(handle_t *VAR_2,
         struct ocfs2_caching_info *VAR_3,
         struct buffer_head *VAR_4,
         struct buffer_head *VAR_5,
         struct ocfs2_refcount_rec *VAR_6,
         int VAR_7, int VAR_8,
         struct ocfs2_alloc_context *VAR_9)
{
 int VAR_10;
 struct ocfs2_refcount_block *VAR_11 =
   (struct ocfs2_refcount_block *)VAR_5->b_data;
 struct ocfs2_refcount_list *VAR_12 = &VAR_11->rf_records;
 struct buffer_head *VAR_13 = ((void*)0);

 FUNC_0(FUNC_4(VAR_11->rf_flags) & VAR_1);

 if (VAR_12->rl_used == VAR_12->rl_count) {
  u64 VAR_14 = FUNC_5(VAR_6->r_cpos);
  u32 VAR_15 = FUNC_4(VAR_6->r_clusters);

  VAR_10 = FUNC_10(VAR_2, VAR_3, VAR_4,
       VAR_5, VAR_9);
  if (VAR_10) {
   FUNC_8(VAR_10);
   goto out;
  }

  VAR_10 = FUNC_11(VAR_3, VAR_4,
          VAR_14, VAR_15, ((void*)0), &VAR_7,
          &VAR_13);
  if (VAR_10) {
   FUNC_8(VAR_10);
   goto out;
  }

  VAR_5 = VAR_13;
  VAR_11 = (struct ocfs2_refcount_block *)VAR_5->b_data;
  VAR_12 = &VAR_11->rf_records;
 }

 VAR_10 = FUNC_12(VAR_2, VAR_3, VAR_5,
          VAR_0);
 if (VAR_10) {
  FUNC_8(VAR_10);
  goto out;
 }

 if (VAR_7 < FUNC_3(VAR_12->rl_used))
  FUNC_6(&VAR_12->rl_recs[VAR_7 + 1],
   &VAR_12->rl_recs[VAR_7],
   (FUNC_3(VAR_12->rl_used) - VAR_7) *
    sizeof(struct ocfs2_refcount_rec));

 FUNC_7(0, "insert refcount record start %llu, len %u, count %u "
      "to leaf block %llu at index %d\n",
      (unsigned long long)FUNC_5(VAR_6->r_cpos),
      FUNC_4(VAR_6->r_clusters), FUNC_4(VAR_6->r_refcount),
      (unsigned long long)VAR_5->b_blocknr, VAR_7);

 VAR_12->rl_recs[VAR_7] = *VAR_6;

 FUNC_2(&VAR_12->rl_used, 1);

 if (VAR_8)
  FUNC_14(VAR_11, VAR_7);

 VAR_10 = FUNC_13(VAR_2, VAR_5);
 if (VAR_10) {
  FUNC_8(VAR_10);
  goto out;
 }

 if (VAR_7 == 0) {
  VAR_10 = FUNC_9(VAR_2, VAR_3,
      VAR_4,
      VAR_5, VAR_6);
  if (VAR_10)
   FUNC_8(VAR_10);
 }
out:
 FUNC_1(VAR_13);
 return VAR_10;
}
