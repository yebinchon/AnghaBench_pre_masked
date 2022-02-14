
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quotafile {int fd; } ;
struct dqblk32 {void* dqb_itime; void* dqb_btime; void* dqb_curinodes; void* dqb_isoftlimit; void* dqb_ihardlimit; void* dqb_curblocks; void* dqb_bsoftlimit; void* dqb_bhardlimit; } ;
struct dqblk {int dqb_itime; int dqb_btime; int dqb_curinodes; int dqb_isoftlimit; int dqb_ihardlimit; int dqb_curblocks; int dqb_bsoftlimit; int dqb_bhardlimit; } ;
typedef int off_t ;
typedef int dqb32 ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,struct dqblk32*,int) ;

__attribute__((used)) static int
FUNC_3(struct quotafile *VAR_1, const struct dqblk *VAR_2, int VAR_3)
{
 struct dqblk32 VAR_4;
 off_t VAR_5;

 VAR_4 = FUNC_0(VAR_2->dqb_bhardlimit);
 VAR_4 = FUNC_0(VAR_2->dqb_bsoftlimit);
 VAR_4 = FUNC_0(VAR_2->dqb_curblocks);
 VAR_4 = FUNC_0(VAR_2->dqb_ihardlimit);
 VAR_4 = FUNC_0(VAR_2->dqb_isoftlimit);
 VAR_4 = FUNC_0(VAR_2->dqb_curinodes);
 VAR_4 = FUNC_0(VAR_2->dqb_btime);
 VAR_4 = FUNC_0(VAR_2->dqb_itime);

 VAR_5 = VAR_3 * sizeof(struct dqblk32);
 if (FUNC_1(VAR_1->fd, VAR_5, VAR_0) == -1)
  return (-1);
 if (FUNC_2(VAR_1->fd, &VAR_4, sizeof(VAR_4)) == sizeof(VAR_4))
  return (0);
 return (-1);
}
