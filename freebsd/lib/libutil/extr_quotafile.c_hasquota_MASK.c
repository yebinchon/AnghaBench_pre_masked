
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usrname ;
struct statfs {char* f_mntonname; } ;
struct fstab {char* fs_file; int fs_mntops; } ;
typedef int grpname ;


 int VAR_0 ;
 size_t VAR_1 ;
 char* VAR_2 ;
 size_t VAR_3 ;
 char** VAR_4 ;
 int FUNC_0 (char*,int,char*,char*,char*,...) ;
 scalar_t__ FUNC_1 (char*,struct statfs*) ;
 char* FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,char*,int) ;
 char* FUNC_6 (char*,char*) ;

__attribute__((used)) static int
FUNC_7(struct fstab *VAR_5, int VAR_6, char *VAR_7, int VAR_8)
{
 char *VAR_9;
 char *VAR_10;
 struct statfs VAR_11;
 char VAR_12[VAR_0];
 static char VAR_13, VAR_14[100], VAR_15[100];





 if (!VAR_13) {
  (void)FUNC_0(VAR_14, sizeof(VAR_14), "%s%s",
      VAR_4[VAR_3], VAR_2);
  (void)FUNC_0(VAR_15, sizeof(VAR_15), "%s%s",
      VAR_4[VAR_1], VAR_2);
  VAR_13 = 1;
 }
 FUNC_4(VAR_12, VAR_5->fs_mntops);
 for (VAR_9 = FUNC_6(VAR_12, ","); VAR_9; VAR_9 = FUNC_6(((void*)0), ",")) {
  if ((VAR_10 = FUNC_2(VAR_9, '=')))
   *VAR_10++ = '\0';
  if (VAR_6 == VAR_3 && FUNC_3(VAR_9, VAR_14) == 0)
   break;
  if (VAR_6 == VAR_1 && FUNC_3(VAR_9, VAR_15) == 0)
   break;
 }
 if (!VAR_9)
  return (0);



 if (FUNC_1(VAR_5->fs_file, &VAR_11) != 0 ||
     FUNC_3(VAR_5->fs_file, VAR_11.f_mntonname)) {
  return (0);
 }
 if (VAR_10) {
  FUNC_5(VAR_7, VAR_10, VAR_8);
 } else {
  (void)FUNC_0(VAR_7, VAR_8, "%s/%s.%s", VAR_5->fs_file,
      VAR_2, VAR_4[VAR_6]);
 }
 return (1);
}
