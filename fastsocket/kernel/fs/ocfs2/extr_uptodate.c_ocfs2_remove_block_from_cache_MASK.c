
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_meta_cache_item {int dummy; } ;
struct ocfs2_caching_info {int ci_flags; int ci_num_cached; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ocfs2_meta_cache_item*) ;
 int FUNC_1 (int ,char*,unsigned long long,unsigned long long,int ,int) ;
 int FUNC_2 (struct ocfs2_caching_info*) ;
 scalar_t__ FUNC_3 (struct ocfs2_caching_info*) ;
 int FUNC_4 (struct ocfs2_caching_info*) ;
 int FUNC_5 (struct ocfs2_caching_info*,int) ;
 int FUNC_6 (struct ocfs2_caching_info*,struct ocfs2_meta_cache_item*) ;
 int FUNC_7 (struct ocfs2_caching_info*,scalar_t__) ;
 struct ocfs2_meta_cache_item* FUNC_8 (struct ocfs2_caching_info*,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_9(struct ocfs2_caching_info *VAR_2,
       sector_t VAR_3)
{
 int VAR_4;
 struct ocfs2_meta_cache_item *VAR_5 = ((void*)0);

 FUNC_2(VAR_2);
 FUNC_1(0, "Owner %llu, remove %llu, items = %u, array = %u\n",
      (unsigned long long)FUNC_3(VAR_2),
      (unsigned long long) VAR_3, VAR_2->ci_num_cached,
      VAR_2->ci_flags & VAR_0);

 if (VAR_2->ci_flags & VAR_0) {
  VAR_4 = FUNC_7(VAR_2, VAR_3);
  if (VAR_4 != -1)
   FUNC_5(VAR_2, VAR_4);
 } else {
  VAR_5 = FUNC_8(VAR_2, VAR_3);
  if (VAR_5)
   FUNC_6(VAR_2, VAR_5);
 }
 FUNC_4(VAR_2);

 if (VAR_5)
  FUNC_0(VAR_1, VAR_5);
}
