
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
struct quotafile {int wordsize; int qfname; } ;
struct dqblk64 {int dummy; } ;
struct dqblk32 {int dummy; } ;


 scalar_t__ FUNC_0 (int ,struct stat*) ;

int
FUNC_1(struct quotafile *VAR_0)
{
 struct stat VAR_1;
 int VAR_2;

 if (FUNC_0(VAR_0->qfname, &VAR_1) < 0)
  return (0);
 switch (VAR_0->wordsize) {
 case 32:
  VAR_2 = VAR_1.st_size / sizeof(struct dqblk32) - 1;
  break;
 case 64:
  VAR_2 = VAR_1.st_size / sizeof(struct dqblk64) - 2;
  break;
 default:
  VAR_2 = 0;
  break;
 }
 return (VAR_2 > 0 ? VAR_2 : 0);
}
