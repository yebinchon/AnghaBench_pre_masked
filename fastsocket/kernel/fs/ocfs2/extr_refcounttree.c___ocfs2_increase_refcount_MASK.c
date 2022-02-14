
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct ocfs2_refcount_rec {void* r_refcount; int r_cpos; void* r_clusters; } ;
struct ocfs2_caching_info {int dummy; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (struct buffer_head*) ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (void**,int) ;
 int FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int ,char*,unsigned long long,unsigned int,...) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,struct ocfs2_caching_info*,struct buffer_head*,int,int,int) ;
 int FUNC_10 (struct ocfs2_caching_info*,struct buffer_head*,scalar_t__,int,struct ocfs2_refcount_rec*,int*,struct buffer_head**) ;
 int FUNC_11 (int *,struct ocfs2_caching_info*,struct buffer_head*,struct buffer_head*,struct ocfs2_refcount_rec*,int,int,struct ocfs2_alloc_context*) ;
 scalar_t__ FUNC_12 (struct ocfs2_caching_info*) ;
 int FUNC_13 (int *,struct ocfs2_caching_info*,struct buffer_head*,struct buffer_head*,struct ocfs2_refcount_rec*,int,int,struct ocfs2_alloc_context*,struct ocfs2_cached_dealloc_ctxt*) ;

__attribute__((used)) static int FUNC_14(handle_t *VAR_0,
         struct ocfs2_caching_info *VAR_1,
         struct buffer_head *VAR_2,
         u64 VAR_3, u32 VAR_4, int VAR_5,
         struct ocfs2_alloc_context *VAR_6,
         struct ocfs2_cached_dealloc_ctxt *VAR_7)
{
 int VAR_8 = 0, VAR_9;
 struct buffer_head *VAR_10 = ((void*)0);
 struct ocfs2_refcount_rec VAR_11;
 unsigned int VAR_12 = 0;

 FUNC_7(0, "Tree owner %llu, add refcount start %llu, len %u\n",
      (unsigned long long)FUNC_12(VAR_1),
      (unsigned long long)VAR_3, VAR_4);

 while (VAR_4) {
  VAR_8 = FUNC_10(VAR_1, VAR_2,
          VAR_3, VAR_4, &VAR_11, &VAR_9,
          &VAR_10);
  if (VAR_8) {
   FUNC_8(VAR_8);
   goto out;
  }

  VAR_12 = FUNC_4(VAR_11.r_clusters);
  if (VAR_11.r_refcount && FUNC_5(VAR_11.r_cpos) == VAR_3 &&
      VAR_12 <= VAR_4) {
   FUNC_7(0, "increase refcount rec, start %llu, len %u, "
        "count %u\n", (unsigned long long)VAR_3, VAR_12,
        FUNC_4(VAR_11.r_refcount));
   VAR_8 = FUNC_9(VAR_0, VAR_1,
       VAR_10, VAR_9,
       VAR_5, 1);
   if (VAR_8) {
    FUNC_8(VAR_8);
    goto out;
   }
  } else if (!VAR_11.r_refcount) {
   VAR_11.r_refcount = FUNC_1(1);

   FUNC_7(0, "insert refcount rec, start %llu, len %u\n",
        (unsigned long long)FUNC_5(VAR_11.r_cpos),
        VAR_12);
   VAR_8 = FUNC_11(VAR_0, VAR_1, VAR_2,
       VAR_10,
       &VAR_11, VAR_9,
       VAR_5, VAR_6);
   if (VAR_8) {
    FUNC_8(VAR_8);
    goto out;
   }
  } else {
   VAR_12 = FUNC_6((u64)(VAR_3 + VAR_4),
          FUNC_5(VAR_11.r_cpos) + VAR_12) - VAR_3;
   VAR_11.r_cpos = FUNC_2(VAR_3);
   VAR_11.r_clusters = FUNC_1(VAR_12);
   FUNC_3(&VAR_11.r_refcount, 1);

   FUNC_7(0, "split refcount rec, start %llu, "
        "len %u, count %u\n",
        (unsigned long long)FUNC_5(VAR_11.r_cpos),
        VAR_12, FUNC_4(VAR_11.r_refcount));
   VAR_8 = FUNC_13(VAR_0, VAR_1,
             VAR_2, VAR_10,
             &VAR_11, VAR_9, VAR_5,
             VAR_6, VAR_7);
   if (VAR_8) {
    FUNC_8(VAR_8);
    goto out;
   }
  }

  VAR_3 += VAR_12;
  VAR_4 -= VAR_12;
  FUNC_0(VAR_10);
  VAR_10 = ((void*)0);
 }

out:
 FUNC_0(VAR_10);
 return VAR_8;
}
