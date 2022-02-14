
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_caching_operations {int dummy; } ;
struct ocfs2_caching_info {struct ocfs2_caching_operations const* ci_ops; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ocfs2_caching_info*,int) ;

void FUNC_2(struct ocfs2_caching_info *VAR_0,
          const struct ocfs2_caching_operations *VAR_1)
{
 FUNC_0(!VAR_1);

 VAR_0->ci_ops = VAR_1;
 FUNC_1(VAR_0, 1);
}
