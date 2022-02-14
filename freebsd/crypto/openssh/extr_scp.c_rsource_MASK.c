
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct stat {int st_mode; } ;
struct dirent {scalar_t__ d_ino; char* d_name; } ;
typedef int path ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,struct stat*) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,char*) ;
 int * FUNC_4 (char*) ;
 scalar_t__ VAR_3 ;
 struct dirent* FUNC_5 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (char*,char*,char*) ;
 int FUNC_8 (char*,int,char*,...) ;
 int FUNC_9 (int,char**) ;
 int VAR_5 ;
 int FUNC_10 (char*,char*) ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (char*,char) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

void
FUNC_14(char *VAR_8, struct stat *VAR_9)
{
 DIR *VAR_10;
 struct dirent *VAR_11;
 char *VAR_12, *VAR_13[1], VAR_14[VAR_1];

 if (!(VAR_10 = FUNC_4(VAR_8))) {
  FUNC_7("%s: %s", VAR_8, FUNC_11(VAR_2));
  return;
 }
 VAR_12 = FUNC_13(VAR_8, '/');
 if (VAR_12 == ((void*)0))
  VAR_12 = VAR_8;
 else
  VAR_12++;
 if (VAR_3) {
  if (FUNC_2(VAR_4, VAR_6, VAR_9) < 0) {
   FUNC_1(VAR_10);
   return;
  }
 }
 (void) FUNC_8(VAR_14, sizeof VAR_14, "D%04o %d %.1024s\n",
     (u_int) (VAR_9->st_mode & VAR_0), 0, VAR_12);
 if (VAR_6)
  FUNC_3(VAR_5, "Entering directory: %s", VAR_14);
 (void) FUNC_0(VAR_7, VAR_4, VAR_14, FUNC_12(VAR_14));
 if (FUNC_6() < 0) {
  FUNC_1(VAR_10);
  return;
 }
 while ((VAR_11 = FUNC_5(VAR_10)) != ((void*)0)) {
  if (VAR_11->d_ino == 0)
   continue;
  if (!FUNC_10(VAR_11->d_name, ".") || !FUNC_10(VAR_11->d_name, ".."))
   continue;
  if (FUNC_12(VAR_8) + 1 + FUNC_12(VAR_11->d_name) >= sizeof(VAR_14) - 1) {
   FUNC_7("%s/%s: name too long", VAR_8, VAR_11->d_name);
   continue;
  }
  (void) FUNC_8(VAR_14, sizeof VAR_14, "%s/%s", VAR_8, VAR_11->d_name);
  VAR_13[0] = VAR_14;
  FUNC_9(1, VAR_13);
 }
 (void) FUNC_1(VAR_10);
 (void) FUNC_0(VAR_7, VAR_4, "E\n", 2);
 (void) FUNC_6();
}
