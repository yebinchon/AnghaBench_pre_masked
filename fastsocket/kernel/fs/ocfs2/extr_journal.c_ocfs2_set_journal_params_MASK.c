
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_super {long osb_commit_interval; int s_mount_opt; TYPE_1__* journal; } ;
struct TYPE_4__ {unsigned long j_commit_interval; int j_state_lock; int j_flags; } ;
typedef TYPE_2__ journal_t ;
struct TYPE_3__ {TYPE_2__* j_journal; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ocfs2_super *VAR_3)
{
 journal_t *VAR_4 = VAR_3->journal->j_journal;
 unsigned long VAR_5 = VAR_1;

 if (VAR_3->osb_commit_interval)
  VAR_5 = VAR_3->osb_commit_interval;

 FUNC_0(&VAR_4->j_state_lock);
 VAR_4->j_commit_interval = VAR_5;
 if (VAR_3->s_mount_opt & VAR_2)
  VAR_4->j_flags |= VAR_0;
 else
  VAR_4->j_flags &= ~VAR_0;
 FUNC_1(&VAR_4->j_state_lock);
}
