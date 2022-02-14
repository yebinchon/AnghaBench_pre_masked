
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_extent_list {int dummy; } ;
struct ocfs2_caching_info {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct ocfs2_caching_info*,struct ocfs2_extent_list*,int ,int ,struct buffer_head**) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

int FUNC_2(struct ocfs2_caching_info *VAR_1,
      struct ocfs2_extent_list *VAR_2, u32 VAR_3,
      struct buffer_head **VAR_4)
{
 int VAR_5;
 struct buffer_head *VAR_6 = ((void*)0);

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0, &VAR_6);
 if (VAR_5) {
  FUNC_1(VAR_5);
  goto out;
 }

 *VAR_4 = VAR_6;
out:
 return VAR_5;
}
