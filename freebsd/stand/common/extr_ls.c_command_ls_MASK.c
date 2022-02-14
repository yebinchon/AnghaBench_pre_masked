
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; scalar_t__ st_size; } ;
struct dirent {char* d_name; int d_type; } ;
typedef int lbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char**,char*) ;
 int FUNC_4 (char**) ;
 char* FUNC_5 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (char*,int,...) ;
 struct dirent* FUNC_10 (int) ;
 int FUNC_11 (char*,int,char*,int,...) ;
 int FUNC_12 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_13 (char*,struct stat*) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 scalar_t__ FUNC_15 (char*) ;
 int* VAR_4 ;

__attribute__((used)) static int
FUNC_16(int VAR_5, char *VAR_6[])
{
    int VAR_7;
    struct stat VAR_8;
    struct dirent *VAR_9;
    char *VAR_10, *VAR_11;
    char VAR_12[128];
    int VAR_13, VAR_14;
    int VAR_15;

    VAR_13 = VAR_1;
    VAR_7 = -1;
    VAR_15 = 0;
    VAR_2 = 1;
    VAR_3 = 1;
    while ((VAR_14 = FUNC_3(VAR_5, VAR_6, "l")) != -1) {
 switch (VAR_14) {
 case 'l':
     VAR_15 = 1;
     break;
 case '?':
 default:

     return (VAR_1);
 }
    }
    VAR_6 += (VAR_2 - 1);
    VAR_5 -= (VAR_2 - 1);

    if (VAR_5 < 2) {
 VAR_11 = "";
    } else {
 VAR_11 = VAR_6[1];
    }

    if (FUNC_13(VAR_11, &VAR_8) == 0 && !FUNC_0(VAR_8.st_mode)) {
 if (VAR_15) {
     FUNC_9(" %c %8d %s\n",
  VAR_4[VAR_8.st_mode >> 12],
  (int)VAR_8.st_size, VAR_11);
 } else {
     FUNC_9(" %c  %s\n",
  VAR_4[VAR_8.st_mode >> 12], VAR_11);
 }
 return (VAR_1);
    }

    VAR_7 = FUNC_4(&VAR_11);
    if (VAR_7 == -1) {
 VAR_13 = VAR_0;
 goto out;
    }
    FUNC_7();
    FUNC_8(VAR_11);
    FUNC_8("\n");

    while ((VAR_9 = FUNC_10(VAR_7)) != ((void*)0)) {
 if (FUNC_14(VAR_9->d_name, ".") && FUNC_14(VAR_9->d_name, "..")) {
     if (VAR_9->d_type == 0 || VAR_15) {

  VAR_8.st_size = 0;
  VAR_8.st_mode = 0;
  VAR_10 = FUNC_5(FUNC_15(VAR_11) + FUNC_15(VAR_9->d_name) + 2);
  if (VAR_10 != ((void*)0)) {
      FUNC_12(VAR_10, "%s/%s", VAR_11, VAR_9->d_name);

      if (FUNC_13(VAR_10, &VAR_8)) {
   VAR_8.st_size = 0;
   VAR_8.st_mode = 0;
      }
      FUNC_2(VAR_10);
  }
     }
     if (VAR_15) {
  FUNC_11(VAR_12, sizeof(VAR_12), " %c %8d %s\n",
      VAR_4[VAR_9->d_type? VAR_9->d_type:VAR_8.st_mode >> 12],
      (int)VAR_8.st_size, VAR_9->d_name);
     } else {
  FUNC_11(VAR_12, sizeof(VAR_12), " %c  %s\n",
      VAR_4[VAR_9->d_type? VAR_9->d_type:VAR_8.st_mode >> 12], VAR_9->d_name);
     }
     if (FUNC_8(VAR_12))
  goto out;
 }
    }
 out:
    FUNC_6();
    if (VAR_7 != -1)
 FUNC_1(VAR_7);
    FUNC_2(VAR_11);
    return (VAR_13);
}
