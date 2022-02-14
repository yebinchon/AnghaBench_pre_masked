
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_3__ {int dqi_qtree_depth; } ;
struct ocfs2_mem_dqinfo {TYPE_1__ dqi_gi; } ;
struct TYPE_4__ {struct ocfs2_mem_dqinfo* dqi_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct super_block*,int) ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_3, int VAR_4)
{
 struct ocfs2_mem_dqinfo *VAR_5 = FUNC_0(VAR_3, VAR_4)->dqi_priv;





 return (VAR_5->dqi_gi.dqi_qtree_depth + 2) *
        VAR_2 +
        VAR_1 +
        VAR_0;
}
