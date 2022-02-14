
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v2r0_disk_dqblk {void* dqb_itime; void* dqb_id; void* dqb_btime; void* dqb_curspace; void* dqb_bsoftlimit; void* dqb_bhardlimit; void* dqb_curinodes; void* dqb_isoftlimit; void* dqb_ihardlimit; } ;
struct qtree_mem_dqinfo {int dummy; } ;
struct mem_dqblk {int dqb_itime; int dqb_curspace; int dqb_btime; int dqb_bsoftlimit; int dqb_bhardlimit; int dqb_curinodes; int dqb_isoftlimit; int dqb_ihardlimit; } ;
struct dquot {int dq_id; int dq_type; int dq_sb; struct mem_dqblk dq_dqb; } ;
struct TYPE_2__ {struct qtree_mem_dqinfo* dqi_priv; } ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct qtree_mem_dqinfo*,void*) ;
 TYPE_1__* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_0, struct dquot *VAR_1)
{
 struct v2r0_disk_dqblk *VAR_2 = VAR_0;
 struct mem_dqblk *VAR_3 = &VAR_1->dq_dqb;
 struct qtree_mem_dqinfo *VAR_4 =
   FUNC_3(VAR_1->dq_sb, VAR_1->dq_type)->dqi_priv;

 VAR_2->dqb_ihardlimit = FUNC_0(VAR_3->dqb_ihardlimit);
 VAR_2->dqb_isoftlimit = FUNC_0(VAR_3->dqb_isoftlimit);
 VAR_2->dqb_curinodes = FUNC_0(VAR_3->dqb_curinodes);
 VAR_2->dqb_itime = FUNC_1(VAR_3->dqb_itime);
 VAR_2->dqb_bhardlimit = FUNC_0(FUNC_4(VAR_3->dqb_bhardlimit));
 VAR_2->dqb_bsoftlimit = FUNC_0(FUNC_4(VAR_3->dqb_bsoftlimit));
 VAR_2->dqb_curspace = FUNC_1(VAR_3->dqb_curspace);
 VAR_2->dqb_btime = FUNC_1(VAR_3->dqb_btime);
 VAR_2->dqb_id = FUNC_0(VAR_1->dq_id);
 if (FUNC_2(VAR_4, VAR_0))
  VAR_2->dqb_itime = FUNC_1(1);
}
