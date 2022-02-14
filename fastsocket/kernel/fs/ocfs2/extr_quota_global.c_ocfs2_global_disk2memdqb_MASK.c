
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_global_disk_dqblk {int dqb_use_count; int dqb_itime; int dqb_btime; int dqb_curspace; int dqb_bsoftlimit; int dqb_bhardlimit; int dqb_curinodes; int dqb_isoftlimit; int dqb_ihardlimit; } ;
struct mem_dqblk {void* dqb_itime; void* dqb_btime; void* dqb_curspace; void* dqb_bsoftlimit; void* dqb_bhardlimit; void* dqb_curinodes; void* dqb_isoftlimit; void* dqb_ihardlimit; } ;
struct dquot {int dq_flags; struct mem_dqblk dq_dqb; } ;
struct TYPE_2__ {int dq_use_count; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct dquot*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_4(struct dquot *VAR_7, void *VAR_8)
{
 struct ocfs2_global_disk_dqblk *VAR_9 = VAR_8;
 struct mem_dqblk *VAR_10 = &VAR_7->dq_dqb;


 if (!FUNC_3(VAR_0 + VAR_3, &VAR_7->dq_flags)) {
  VAR_10->dqb_ihardlimit = FUNC_2(VAR_9->dqb_ihardlimit);
  VAR_10->dqb_isoftlimit = FUNC_2(VAR_9->dqb_isoftlimit);
 }
 if (!FUNC_3(VAR_0 + VAR_4, &VAR_7->dq_flags))
  VAR_10->dqb_curinodes = FUNC_2(VAR_9->dqb_curinodes);
 if (!FUNC_3(VAR_0 + VAR_1, &VAR_7->dq_flags)) {
  VAR_10->dqb_bhardlimit = FUNC_2(VAR_9->dqb_bhardlimit);
  VAR_10->dqb_bsoftlimit = FUNC_2(VAR_9->dqb_bsoftlimit);
 }
 if (!FUNC_3(VAR_0 + VAR_6, &VAR_7->dq_flags))
  VAR_10->dqb_curspace = FUNC_2(VAR_9->dqb_curspace);
 if (!FUNC_3(VAR_0 + VAR_2, &VAR_7->dq_flags))
  VAR_10->dqb_btime = FUNC_2(VAR_9->dqb_btime);
 if (!FUNC_3(VAR_0 + VAR_5, &VAR_7->dq_flags))
  VAR_10->dqb_itime = FUNC_2(VAR_9->dqb_itime);
 FUNC_0(VAR_7)->dq_use_count = FUNC_1(VAR_9->dqb_use_count);
}
