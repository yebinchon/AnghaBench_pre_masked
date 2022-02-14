
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_mode; int st_atime; int st_mtime; } ;
typedef int dblk ;
struct TYPE_2__ {int nlen; int mode; int frc_mode; int atime; int mtime; int npos; } ;
typedef TYPE_1__ DIRDATA ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,long,int ) ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (scalar_t__,char*,int) ;

void
FUNC_3(char *VAR_3, int VAR_4, struct stat *VAR_5, int VAR_6)
{
 DIRDATA VAR_7;

 if (VAR_2 < 0)
  return;





 if ((VAR_7.npos = FUNC_0(VAR_2, 0L, VAR_0)) < 0) {
  FUNC_1(1,"Unable to store mode and times for directory: %s",VAR_3);
  return;
 }




 VAR_7.nlen = VAR_4 + 1;
 VAR_7.mode = VAR_5->st_mode & 0xffff;
 VAR_7.mtime = VAR_5->st_mtime;
 VAR_7.atime = VAR_5->st_atime;
 VAR_7.frc_mode = VAR_6;
 if ((FUNC_2(VAR_2, VAR_3, VAR_7.nlen) == VAR_7.nlen) &&
     (FUNC_2(VAR_2, (char *)&VAR_7, sizeof(VAR_7)) == sizeof(VAR_7))) {
  ++VAR_1;
  return;
 }

 FUNC_1(1,"Unable to store mode and times for created directory: %s",VAR_3);
 return;
}
