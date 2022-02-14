
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
typedef unsigned int u32 ;
struct super_block {int dummy; } ;
struct ocfs2_refcount_rec {int r_refcount; int r_clusters; int r_cpos; } ;
struct ocfs2_caching_info {int dummy; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 unsigned int FUNC_4 (unsigned int,scalar_t__) ;
 int FUNC_5 (int ,char*,unsigned long long,unsigned long long,unsigned int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ocfs2_cached_dealloc_ctxt*,int ,unsigned int) ;
 int FUNC_8 (struct super_block*,unsigned int) ;
 int FUNC_9 (int *,struct ocfs2_caching_info*,struct buffer_head*,struct buffer_head*,int,unsigned int,unsigned int,struct ocfs2_alloc_context*,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_10 (struct ocfs2_caching_info*,struct buffer_head*,unsigned int,unsigned int,struct ocfs2_refcount_rec*,int*,struct buffer_head**) ;
 struct super_block* FUNC_11 (struct ocfs2_caching_info*) ;
 scalar_t__ FUNC_12 (struct ocfs2_caching_info*) ;

__attribute__((used)) static int FUNC_13(handle_t *VAR_0,
         struct ocfs2_caching_info *VAR_1,
         struct buffer_head *VAR_2,
         u64 VAR_3, u32 VAR_4,
         struct ocfs2_alloc_context *VAR_5,
         struct ocfs2_cached_dealloc_ctxt *VAR_6,
         int VAR_7)
{
 int VAR_8 = 0, VAR_9 = 0;
 struct ocfs2_refcount_rec VAR_10;
 unsigned int VAR_11 = 0, VAR_12;
 struct super_block *VAR_13 = FUNC_11(VAR_1);
 struct buffer_head *VAR_14 = ((void*)0);

 FUNC_5(0, "Tree owner %llu, decrease refcount start %llu, "
      "len %u, delete %u\n",
      (unsigned long long)FUNC_12(VAR_1),
      (unsigned long long)VAR_3, VAR_4, VAR_7);

 while (VAR_4) {
  VAR_8 = FUNC_10(VAR_1, VAR_2,
          VAR_3, VAR_4, &VAR_10, &VAR_9,
          &VAR_14);
  if (VAR_8) {
   FUNC_6(VAR_8);
   goto out;
  }

  VAR_11 = FUNC_2(VAR_10.r_refcount);
  FUNC_0(VAR_11 == 0);
  if (!VAR_7)
   FUNC_0(VAR_11 > 1);

  VAR_12 = FUNC_4((u64)(VAR_3 + VAR_4), FUNC_3(VAR_10.r_cpos) +
         FUNC_2(VAR_10.r_clusters)) - VAR_3;

  VAR_8 = FUNC_9(VAR_0, VAR_1, VAR_2,
        VAR_14, VAR_9,
        VAR_3, VAR_12,
        VAR_5, VAR_6);
  if (VAR_8) {
   FUNC_6(VAR_8);
   goto out;
  }

  if (FUNC_2(VAR_10.r_refcount) == 1 && VAR_7) {
   VAR_8 = FUNC_7(VAR_6,
       FUNC_8(VAR_13, VAR_3),
         VAR_12);
   if (VAR_8) {
    FUNC_6(VAR_8);
    goto out;
   }
  }

  VAR_3 += VAR_12;
  VAR_4 -= VAR_12;
  FUNC_1(VAR_14);
  VAR_14 = ((void*)0);
 }

out:
 FUNC_1(VAR_14);
 return VAR_8;
}
