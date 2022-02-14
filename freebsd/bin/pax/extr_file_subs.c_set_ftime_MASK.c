
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* time_t ;
struct timeval {long member_0; long member_1; void* tv_sec; } ;
struct stat {void* st_mtime; void* st_atime; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,struct stat*) ;
 scalar_t__ FUNC_1 (char*,struct timeval*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int ,char*,char*) ;

void
FUNC_3(char *VAR_3, time_t VAR_4, time_t VAR_5, int VAR_6)
{
 static struct timeval VAR_7[2] = {{0L, 0L}, {0L, 0L}};
 struct stat VAR_8;

 VAR_7[0].tv_sec = VAR_5;
 VAR_7[1].tv_sec = VAR_4;
 if (!VAR_6 && (!VAR_1 || !VAR_2)) {




  if (FUNC_0(VAR_3, &VAR_8) == 0) {
   if (!VAR_1)
    VAR_7[0].tv_sec = VAR_8.st_atime;
   if (!VAR_2)
    VAR_7[1].tv_sec = VAR_8.st_mtime;
  } else
   FUNC_2(0,VAR_0,"Unable to obtain file stats %s", VAR_3);
 }




 if (FUNC_1(VAR_3, VAR_7) < 0)
  FUNC_2(1, VAR_0, "Access/modification time set failed on: %s",
      VAR_3);
 return;
}
