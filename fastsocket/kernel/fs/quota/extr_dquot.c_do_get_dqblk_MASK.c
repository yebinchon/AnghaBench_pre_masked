
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_dqblk {int dqb_itime; int dqb_btime; int dqb_curinodes; int dqb_isoftlimit; int dqb_ihardlimit; scalar_t__ dqb_rsvspace; scalar_t__ dqb_curspace; int dqb_bsoftlimit; int dqb_bhardlimit; } ;
struct if_dqblk {int dqb_valid; int dqb_itime; int dqb_btime; int dqb_curinodes; int dqb_isoftlimit; int dqb_ihardlimit; scalar_t__ dqb_curspace; void* dqb_bsoftlimit; void* dqb_bhardlimit; } ;
struct dquot {struct mem_dqblk dq_dqb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct dquot *VAR_2, struct if_dqblk *VAR_3)
{
 struct mem_dqblk *VAR_4 = &VAR_2->dq_dqb;

 FUNC_0(&VAR_1);
 VAR_3->dqb_bhardlimit = FUNC_2(VAR_4->dqb_bhardlimit);
 VAR_3->dqb_bsoftlimit = FUNC_2(VAR_4->dqb_bsoftlimit);
 VAR_3->dqb_curspace = VAR_4->dqb_curspace + VAR_4->dqb_rsvspace;
 VAR_3->dqb_ihardlimit = VAR_4->dqb_ihardlimit;
 VAR_3->dqb_isoftlimit = VAR_4->dqb_isoftlimit;
 VAR_3->dqb_curinodes = VAR_4->dqb_curinodes;
 VAR_3->dqb_btime = VAR_4->dqb_btime;
 VAR_3->dqb_itime = VAR_4->dqb_itime;
 VAR_3->dqb_valid = VAR_0;
 FUNC_1(&VAR_1);
}
