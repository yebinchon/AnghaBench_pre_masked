
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quotafile {int fd; int accmode; int wordsize; int fsname; int quotatype; } ;
struct dqblk {scalar_t__ dqb_bsoftlimit; scalar_t__ dqb_curblocks; scalar_t__ dqb_isoftlimit; scalar_t__ dqb_curinodes; scalar_t__ dqb_itime; scalar_t__ dqb_btime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct quotafile*,struct dqblk*,int) ;
 int FUNC_2 (struct quotafile*,struct dqblk*,int) ;
 int FUNC_3 (struct quotafile*,struct dqblk*,int) ;
 int FUNC_4 (int ,int,int,struct dqblk*) ;

int
FUNC_5(struct quotafile *VAR_5, struct dqblk *VAR_6, int VAR_7)
{
 struct dqblk VAR_8;
 int VAR_9;

 if (VAR_5->fd == -1) {
  VAR_9 = FUNC_0(VAR_3, VAR_5->quotatype);
  return (FUNC_4(VAR_5->fsname, VAR_9, VAR_7, VAR_6));
 }



 if ((VAR_5->accmode & VAR_2) != VAR_2) {
  VAR_4 = VAR_0;
  return (-1);
 }
 if (FUNC_1(VAR_5, &VAR_8, VAR_7) != 0)
  return (-1);




 if (VAR_8.dqb_bsoftlimit && VAR_7 != 0 &&
     VAR_8.dqb_curblocks < VAR_8.dqb_bsoftlimit &&
     VAR_6->dqb_curblocks >= VAR_8.dqb_bsoftlimit)
  VAR_8.dqb_btime = 0;
 if (VAR_8.dqb_isoftlimit && VAR_7 != 0 &&
     VAR_8.dqb_curinodes < VAR_8.dqb_isoftlimit &&
     VAR_6->dqb_curinodes >= VAR_8.dqb_isoftlimit)
  VAR_8.dqb_itime = 0;
 VAR_8.dqb_curinodes = VAR_6->dqb_curinodes;
 VAR_8.dqb_curblocks = VAR_6->dqb_curblocks;



 switch (VAR_5->wordsize) {
 case 32:
  return (FUNC_2(VAR_5, &VAR_8, VAR_7));
 case 64:
  return (FUNC_3(VAR_5, &VAR_8, VAR_7));
 default:
  VAR_4 = VAR_1;
  return (-1);
 }

}
