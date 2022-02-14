
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_mem_dqinfo {int dqi_gi; } ;
struct ocfs2_global_disk_dqblk {int dqb_id; } ;
struct dquot {scalar_t__ dq_id; int dq_type; int dq_sb; } ;
struct TYPE_2__ {struct ocfs2_mem_dqinfo* dqi_priv; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,void*) ;
 TYPE_1__* FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, struct dquot *VAR_1)
{
 struct ocfs2_global_disk_dqblk *VAR_2 = VAR_0;
 struct ocfs2_mem_dqinfo *VAR_3 =
   FUNC_2(VAR_1->dq_sb, VAR_1->dq_type)->dqi_priv;

 if (FUNC_1(&VAR_3->dqi_gi, VAR_0))
  return 0;
 return FUNC_0(VAR_2->dqb_id) == VAR_1->dq_id;
}
