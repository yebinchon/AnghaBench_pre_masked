
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quotafile {int fd; } ;
struct dqhdr64 {int dummy; } ;
struct dqblk64 {int dqb_itime; int dqb_btime; int dqb_curinodes; int dqb_isoftlimit; int dqb_ihardlimit; int dqb_curblocks; int dqb_bsoftlimit; int dqb_bhardlimit; } ;
struct dqblk {void* dqb_itime; void* dqb_btime; void* dqb_curinodes; void* dqb_isoftlimit; void* dqb_ihardlimit; void* dqb_curblocks; void* dqb_bsoftlimit; void* dqb_bhardlimit; } ;
typedef int off_t ;
typedef int dqb64 ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct dqblk*,int ,int) ;
 int FUNC_3 (int ,struct dqblk64*,int) ;

__attribute__((used)) static int
FUNC_4(struct quotafile *VAR_1, struct dqblk *VAR_2, int VAR_3)
{
 struct dqblk64 VAR_4;
 off_t VAR_5;

 VAR_5 = sizeof(struct dqhdr64) + VAR_3 * sizeof(struct dqblk64);
 if (FUNC_1(VAR_1->fd, VAR_5, VAR_0) == -1)
  return (-1);
 switch (FUNC_3(VAR_1->fd, &VAR_4, sizeof(VAR_4))) {
 case 0:
  FUNC_2(VAR_2, 0, sizeof(*VAR_2));
  return (0);
 case sizeof(VAR_4):
  VAR_2->dqb_bhardlimit = FUNC_0(VAR_4);
  VAR_2->dqb_bsoftlimit = FUNC_0(VAR_4);
  VAR_2->dqb_curblocks = FUNC_0(VAR_4);
  VAR_2->dqb_ihardlimit = FUNC_0(VAR_4);
  VAR_2->dqb_isoftlimit = FUNC_0(VAR_4);
  VAR_2->dqb_curinodes = FUNC_0(VAR_4);
  VAR_2->dqb_btime = FUNC_0(VAR_4);
  VAR_2->dqb_itime = FUNC_0(VAR_4);
  return (0);
 default:
  return (-1);
 }
}
