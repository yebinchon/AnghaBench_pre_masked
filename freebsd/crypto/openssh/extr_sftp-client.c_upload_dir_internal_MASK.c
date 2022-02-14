
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct sftp_conn {int dummy; } ;
struct dirent {scalar_t__ d_ino; char* d_name; } ;
struct TYPE_7__ {int perm; int flags; } ;
typedef int DIR ;
typedef TYPE_1__ Attrib ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct sftp_conn*,char const*,TYPE_1__*,int ) ;
 int FUNC_5 (struct sftp_conn*,char const*,TYPE_1__*) ;
 TYPE_1__* FUNC_6 (struct sftp_conn*,char const*,int ) ;
 int FUNC_7 (struct sftp_conn*,char*,char*,int,int,int) ;
 int VAR_4 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*) ;
 int VAR_5 ;
 int FUNC_10 (char*,char*,...) ;
 int FUNC_11 (char*,struct stat*) ;
 int FUNC_12 (char*,char const*) ;
 int * FUNC_13 (char const*) ;
 char* FUNC_14 (char const*,char*) ;
 struct dirent* FUNC_15 (int *) ;
 int FUNC_16 (char const*,struct stat*) ;
 int FUNC_17 (struct stat*,TYPE_1__*) ;
 scalar_t__ FUNC_18 (char*,char*) ;
 char* FUNC_19 (int ) ;

__attribute__((used)) static int
FUNC_20(struct sftp_conn *VAR_6, const char *VAR_7, const char *VAR_8,
    int VAR_9, int VAR_10, int VAR_11, int VAR_12, int VAR_13)
{
 int VAR_14 = 0;
 DIR *VAR_15;
 struct dirent *VAR_16;
 char *VAR_17, *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
 struct stat VAR_20;
 Attrib VAR_21, *VAR_22;

 if (VAR_9 >= VAR_0) {
  FUNC_8("Maximum directory depth exceeded: %d levels", VAR_9);
  return -1;
 }

 if (FUNC_16(VAR_7, &VAR_20) == -1) {
  FUNC_8("Couldn't stat directory \"%s\": %s",
      VAR_7, FUNC_19(VAR_4));
  return -1;
 }
 if (!FUNC_0(VAR_20.st_mode)) {
  FUNC_8("\"%s\" is not a directory", VAR_7);
  return -1;
 }
 if (VAR_11)
  FUNC_12("Entering %s\n", VAR_7);

 FUNC_2(&VAR_21);
 FUNC_17(&VAR_20, &VAR_21);
 VAR_21.flags &= ~VAR_2;
 VAR_21.flags &= ~VAR_3;
 VAR_21.perm &= 01777;
 if (!VAR_10)
  VAR_21.flags &= ~VAR_1;






 if (FUNC_4(VAR_6, VAR_8, &VAR_21, 0) != 0) {
  if ((VAR_22 = FUNC_6(VAR_6, VAR_8, 0)) == ((void*)0))
   return -1;
  if (!FUNC_0(VAR_22->perm)) {
   FUNC_8("\"%s\" exists but is not a directory", VAR_8);
   return -1;
  }
 }

 if ((VAR_15 = FUNC_13(VAR_7)) == ((void*)0)) {
  FUNC_8("Failed to open dir \"%s\": %s", VAR_7, FUNC_19(VAR_4));
  return -1;
 }

 while (((VAR_16 = FUNC_15(VAR_15)) != ((void*)0)) && !VAR_5) {
  if (VAR_16->d_ino == 0)
   continue;
  FUNC_9(VAR_19);
  FUNC_9(VAR_18);
  VAR_17 = VAR_16->d_name;
  VAR_19 = FUNC_14(VAR_8, VAR_17);
  VAR_18 = FUNC_14(VAR_7, VAR_17);

  if (FUNC_11(VAR_18, &VAR_20) == -1) {
   FUNC_10("%s: lstat failed: %s", VAR_17,
       FUNC_19(VAR_4));
   VAR_14 = -1;
  } else if (FUNC_0(VAR_20.st_mode)) {
   if (FUNC_18(VAR_17, ".") == 0 ||
       FUNC_18(VAR_17, "..") == 0)
    continue;

   if (FUNC_20(VAR_6, VAR_18, VAR_19,
       VAR_9 + 1, VAR_10, VAR_11, VAR_12,
       VAR_13) == -1)
    VAR_14 = -1;
  } else if (FUNC_1(VAR_20.st_mode)) {
   if (FUNC_7(VAR_6, VAR_18, VAR_19,
       VAR_10, VAR_12, VAR_13) == -1) {
    FUNC_8("Uploading of file %s to %s failed!",
        VAR_18, VAR_19);
    VAR_14 = -1;
   }
  } else
   FUNC_10("%s: not a regular file\n", VAR_17);
 }
 FUNC_9(VAR_19);
 FUNC_9(VAR_18);

 FUNC_5(VAR_6, VAR_8, &VAR_21);

 (void) FUNC_3(VAR_15);
 return VAR_14;
}
