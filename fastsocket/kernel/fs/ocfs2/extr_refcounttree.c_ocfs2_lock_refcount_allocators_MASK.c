
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct super_block {int dummy; } ;
struct ocfs2_extent_tree {int et_root_el; } ;
struct ocfs2_caching_info {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct super_block*,int ,int) ;
 int FUNC_4 (struct super_block*,struct ocfs2_caching_info*,struct buffer_head*,int,int,int*,int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ocfs2_alloc_context*) ;
 int FUNC_7 (int ,struct ocfs2_extent_tree*) ;
 int FUNC_8 (int ,int,struct ocfs2_alloc_context**) ;
 int FUNC_9 (int ,int,struct ocfs2_alloc_context**) ;

__attribute__((used)) static int FUNC_10(struct super_block *VAR_0,
     u32 VAR_1, u32 VAR_2,
     struct ocfs2_extent_tree *VAR_3,
     struct ocfs2_caching_info *VAR_4,
     struct buffer_head *VAR_5,
     struct ocfs2_alloc_context **VAR_6,
     struct ocfs2_alloc_context **VAR_7,
     int *VAR_8)
{
 int VAR_9 = 0, VAR_10 = 0;
 int VAR_11 = FUNC_7(FUNC_0(VAR_0), VAR_3);

 if (VAR_11 < 0) {
  VAR_9 = VAR_11;
  FUNC_2(VAR_9);
  goto out;
 }

 if (VAR_11 < VAR_2 + 2)
  VAR_10 =
   FUNC_5(VAR_3->et_root_el);

 *VAR_8 += FUNC_3(VAR_0, VAR_3->et_root_el,
           VAR_2 + 2);

 VAR_9 = FUNC_4(VAR_0, VAR_4, VAR_5,
            VAR_1, VAR_2,
            &VAR_10, VAR_8);
 if (VAR_9) {
  FUNC_2(VAR_9);
  goto out;
 }

 FUNC_1(0, "reserve new metadata %d, clusters %u, credits = %d\n",
      VAR_10, VAR_2, *VAR_8);
 VAR_9 = FUNC_9(FUNC_0(VAR_0), VAR_10,
      VAR_6);
 if (VAR_9) {
  FUNC_2(VAR_9);
  goto out;
 }

 if (VAR_7) {
  VAR_9 = FUNC_8(FUNC_0(VAR_0), VAR_2,
          VAR_7);
  if (VAR_9)
   FUNC_2(VAR_9);
 }

out:
 if (VAR_9) {
  if (*VAR_6) {
   FUNC_6(*VAR_6);
   *VAR_6 = ((void*)0);
  }
 }

 return VAR_9;
}
