
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_caching_info {int dummy; } ;
struct buffer_head {int dummy; } ;


 scalar_t__ FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct ocfs2_caching_info*,struct buffer_head*) ;

int FUNC_2(struct ocfs2_caching_info *VAR_0,
       struct buffer_head *VAR_1)
{
 return FUNC_0(VAR_1) && FUNC_1(VAR_0, VAR_1);
}
