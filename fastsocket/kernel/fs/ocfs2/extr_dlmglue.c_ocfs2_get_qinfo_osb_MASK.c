
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct TYPE_2__ {int dqi_sb; } ;
struct ocfs2_mem_dqinfo {TYPE_1__ dqi_gi; } ;
struct ocfs2_lock_res {struct ocfs2_mem_dqinfo* l_priv; } ;


 struct ocfs2_super* FUNC_0 (int ) ;

__attribute__((used)) static struct ocfs2_super *FUNC_1(struct ocfs2_lock_res *VAR_0)
{
 struct ocfs2_mem_dqinfo *VAR_1 = VAR_0->l_priv;

 return FUNC_0(VAR_1->dqi_gi.dqi_sb);
}
