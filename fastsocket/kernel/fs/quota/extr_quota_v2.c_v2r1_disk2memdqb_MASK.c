
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v2r1_disk_dqblk {int dqb_itime; int dqb_btime; int dqb_curspace; int dqb_bsoftlimit; int dqb_bhardlimit; int dqb_curinodes; int dqb_isoftlimit; int dqb_ihardlimit; } ;
struct mem_dqblk {void* dqb_itime; void* dqb_btime; void* dqb_curspace; void* dqb_bsoftlimit; void* dqb_bhardlimit; void* dqb_curinodes; void* dqb_isoftlimit; void* dqb_ihardlimit; } ;
struct dquot {struct mem_dqblk dq_dqb; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct v2r1_disk_dqblk*,void*,int) ;
 int FUNC_3 (struct v2r1_disk_dqblk*,int ,int) ;
 void* FUNC_4 (void*) ;

__attribute__((used)) static void FUNC_5(struct dquot *VAR_0, void *VAR_1)
{
 struct v2r1_disk_dqblk *VAR_2 = VAR_1, VAR_3;
 struct mem_dqblk *VAR_4 = &VAR_0->dq_dqb;

 VAR_4->dqb_ihardlimit = FUNC_1(VAR_2->dqb_ihardlimit);
 VAR_4->dqb_isoftlimit = FUNC_1(VAR_2->dqb_isoftlimit);
 VAR_4->dqb_curinodes = FUNC_1(VAR_2->dqb_curinodes);
 VAR_4->dqb_itime = FUNC_1(VAR_2->dqb_itime);
 VAR_4->dqb_bhardlimit = FUNC_4(FUNC_1(VAR_2->dqb_bhardlimit));
 VAR_4->dqb_bsoftlimit = FUNC_4(FUNC_1(VAR_2->dqb_bsoftlimit));
 VAR_4->dqb_curspace = FUNC_1(VAR_2->dqb_curspace);
 VAR_4->dqb_btime = FUNC_1(VAR_2->dqb_btime);

 FUNC_3(&VAR_3, 0, sizeof(struct v2r1_disk_dqblk));
 VAR_3.dqb_itime = FUNC_0(1);
 if (!FUNC_2(&VAR_3, VAR_1, sizeof(struct v2r1_disk_dqblk)))
  VAR_4->dqb_itime = 0;
}
