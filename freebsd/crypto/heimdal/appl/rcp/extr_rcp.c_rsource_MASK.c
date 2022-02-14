
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; scalar_t__ st_atime; scalar_t__ st_mtime; } ;
struct dirent {scalar_t__ d_ino; char* d_name; } ;
typedef int path ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int * FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;
 struct dirent* FUNC_2 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (char*,int,char*,...) ;
 int FUNC_6 (int,char**) ;
 int FUNC_7 (char*,char*) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (int ,char*,int) ;

void
FUNC_12(char *VAR_5, struct stat *VAR_6)
{
 DIR *VAR_7;
 struct dirent *VAR_8;
 char *VAR_9, *VAR_10[1], VAR_11[VAR_0];

 if (!(VAR_7 = FUNC_1(VAR_5))) {
  FUNC_4("%s: %s", VAR_5, FUNC_8(VAR_2));
  return;
 }
 VAR_9 = FUNC_10(VAR_5, '/');
 if (VAR_9 == 0)
  VAR_9 = VAR_5;
 else
  VAR_9++;
 if (VAR_3) {
  FUNC_5(VAR_11, sizeof(VAR_11), "T%ld 0 %ld 0\n",
      (long)VAR_6->st_mtime,
      (long)VAR_6->st_atime);
  FUNC_11(VAR_4, VAR_11, FUNC_9(VAR_11));
  if (FUNC_3() < 0) {
   FUNC_0(VAR_7);
   return;
  }
 }
 FUNC_5(VAR_11, sizeof(VAR_11),
   "D%04o %d %s\n",
   (unsigned int)(VAR_6->st_mode & VAR_1), 0, VAR_9);
 FUNC_11(VAR_4, VAR_11, FUNC_9(VAR_11));
 if (FUNC_3() < 0) {
  FUNC_0(VAR_7);
  return;
 }
 while ((VAR_8 = FUNC_2(VAR_7)) != ((void*)0)) {
  if (VAR_8->d_ino == 0)
   continue;
  if (!FUNC_7(VAR_8->d_name, ".") || !FUNC_7(VAR_8->d_name, ".."))
   continue;
  if (FUNC_9(VAR_5) + 1 + FUNC_9(VAR_8->d_name) >= VAR_0 - 1) {
   FUNC_4("%s/%s: name too long", VAR_5, VAR_8->d_name);
   continue;
  }
  FUNC_5(VAR_11, sizeof(VAR_11), "%s/%s", VAR_5, VAR_8->d_name);
  VAR_10[0] = VAR_11;
  FUNC_6(1, VAR_10);
 }
 FUNC_0(VAR_7);
 FUNC_11(VAR_4, "E\n", 2);
 FUNC_3();
}
