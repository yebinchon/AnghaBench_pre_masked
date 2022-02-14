
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_caching_info {scalar_t__ ci_last_trans; scalar_t__ ci_created_trans; scalar_t__ ci_num_cached; int ci_flags; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ocfs2_caching_info *VAR_1,
           int VAR_2)
{
 VAR_1->ci_flags |= VAR_0;
 VAR_1->ci_num_cached = 0;

 if (VAR_2) {
  VAR_1->ci_created_trans = 0;
  VAR_1->ci_last_trans = 0;
 }
}
