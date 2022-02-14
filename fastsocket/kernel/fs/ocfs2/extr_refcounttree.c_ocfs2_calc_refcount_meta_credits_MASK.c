
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct ocfs2_refcount_rec {scalar_t__ r_clusters; int r_cpos; scalar_t__ r_refcount; } ;
struct TYPE_2__ {int rl_count; int rl_used; } ;
struct ocfs2_refcount_block {scalar_t__ rf_flags; TYPE_1__ rf_records; } ;
struct ocfs2_extent_tree {int et_root_el; } ;
struct ocfs2_caching_info {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,char*,int,...) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct super_block*,int ,int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct ocfs2_caching_info*,struct buffer_head*,scalar_t__,scalar_t__,struct ocfs2_refcount_rec*,int*,struct buffer_head**) ;
 int FUNC_11 (struct ocfs2_extent_tree*,struct ocfs2_caching_info*,struct buffer_head*) ;

__attribute__((used)) static int FUNC_12(struct super_block *VAR_2,
         struct ocfs2_caching_info *VAR_3,
         struct buffer_head *VAR_4,
         u64 VAR_5,
         u32 VAR_6,
         int *VAR_7,
         int *VAR_8)
{
 int VAR_9 = 0, VAR_10, VAR_11 = 0, VAR_12 = 0;
 u64 VAR_13 = VAR_5;
 struct ocfs2_refcount_block *VAR_14;
 struct ocfs2_refcount_rec VAR_15;
 struct buffer_head *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
 u32 VAR_18;

 FUNC_6(0, "start_cpos %llu, clusters %u\n",
      (unsigned long long)VAR_5, VAR_6);
 while (VAR_6) {
  VAR_9 = FUNC_10(VAR_3, VAR_4,
          VAR_13, VAR_6, &VAR_15,
          &VAR_10, &VAR_16);
  if (VAR_9) {
   FUNC_7(VAR_9);
   goto out;
  }

  if (VAR_16 != VAR_17) {




   if (VAR_17) {
    VAR_14 = (struct ocfs2_refcount_block *)
       VAR_17->b_data;

    if (FUNC_4(VAR_14->rf_records.rl_used) +
        VAR_12 >
        FUNC_2(VAR_14->rf_records.rl_count))
     VAR_11++;
   }

   VAR_12 = 0;
   *VAR_8 += 1;
   FUNC_0(VAR_17);
   VAR_17 = VAR_16;
   FUNC_1(VAR_17);
  }

  VAR_14 = (struct ocfs2_refcount_block *)VAR_16->b_data;

  FUNC_6(0, "recs_add %d,cpos %llu, clusters %u, rec->r_cpos %llu,"
       "rec->r_clusters %u, rec->r_refcount %u, index %d\n",
       VAR_12, (unsigned long long)VAR_13, VAR_6,
       (unsigned long long)FUNC_4(VAR_15.r_cpos),
       FUNC_3(VAR_15.r_clusters),
       FUNC_3(VAR_15.r_refcount), VAR_10);

  VAR_18 = FUNC_5((u64)VAR_13 + VAR_6, FUNC_4(VAR_15.r_cpos) +
     FUNC_3(VAR_15.r_clusters)) - VAR_13;
  if (VAR_15.r_refcount) {

   if (VAR_13 == VAR_5 &&
       VAR_13 != FUNC_4(VAR_15.r_cpos))
    VAR_12++;


   if (VAR_13 + VAR_6 < FUNC_4(VAR_15.r_cpos) +
       FUNC_3(VAR_15.r_clusters))
    VAR_12++;
  } else
   VAR_12++;

  FUNC_0(VAR_16);
  VAR_16 = ((void*)0);
  VAR_6 -= VAR_18;
  VAR_13 += VAR_18;
 }

 if (VAR_17) {
  VAR_14 = (struct ocfs2_refcount_block *)VAR_17->b_data;

  if (FUNC_4(VAR_14->rf_records.rl_used) + VAR_12 >
      FUNC_2(VAR_14->rf_records.rl_count))
   VAR_11++;

  *VAR_8 += 1;
 }

 if (!VAR_11)
  goto out;

 FUNC_6(0, "we need ref_blocks %d\n", VAR_11);
 *VAR_7 += VAR_11;
 *VAR_8 += VAR_11;
 VAR_14 = (struct ocfs2_refcount_block *)VAR_4->b_data;
 if (FUNC_3(VAR_14->rf_flags) & VAR_1) {
  struct ocfs2_extent_tree VAR_19;

  FUNC_11(&VAR_19, VAR_3, VAR_4);
  *VAR_7 += FUNC_9(VAR_19.et_root_el);
  *VAR_8 += FUNC_8(VAR_2,
            VAR_19.et_root_el,
            VAR_11);
 } else {
  *VAR_8 += VAR_0;
  *VAR_7 += 1;
 }

out:
 FUNC_0(VAR_16);
 FUNC_0(VAR_17);
 return VAR_9;
}
