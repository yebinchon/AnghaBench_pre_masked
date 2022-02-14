
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_caching_info {TYPE_1__* ci_ops; } ;
struct TYPE_2__ {int (* co_cache_unlock ) (struct ocfs2_caching_info*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ocfs2_caching_info*) ;

__attribute__((used)) static void FUNC_2(struct ocfs2_caching_info *VAR_0)
{
 FUNC_0(!VAR_0 || !VAR_0->ci_ops);

 VAR_0->ci_ops->co_cache_unlock(VAR_0);
}
