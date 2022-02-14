
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quotafile {int fd; int wordsize; int fsname; int quotatype; } ;
struct dqblk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct quotafile*,struct dqblk*,int) ;
 int FUNC_2 (struct quotafile*,struct dqblk*,int) ;
 int FUNC_3 (int ,int,int,struct dqblk*) ;

int
FUNC_4(struct quotafile *VAR_3, struct dqblk *VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_3->fd == -1) {
  VAR_6 = FUNC_0(VAR_1, VAR_3->quotatype);
  return (FUNC_3(VAR_3->fsname, VAR_6, VAR_5, VAR_4));
 }
 switch (VAR_3->wordsize) {
 case 32:
  return (FUNC_1(VAR_3, VAR_4, VAR_5));
 case 64:
  return (FUNC_2(VAR_3, VAR_4, VAR_5));
 default:
  VAR_2 = VAR_0;
  return (-1);
 }

}
