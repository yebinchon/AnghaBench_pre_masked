
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
struct statfs {int dummy; } ;
struct stat64 {scalar_t__ st_ino; int st_dev; } ;
struct extmnttab {scalar_t__ mnt_major; scalar_t__ mnt_minor; char* mnt_fstype; char* mnt_mountp; int mnt_special; } ;
typedef int smbshare_prop ;
typedef int nfs_mnt_prop ;
typedef int mtpt_prop ;
typedef scalar_t__ ino_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_9 ;
 int FUNC_1 (int ,struct extmnttab*,int ) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_10 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*,struct stat64*) ;
 scalar_t__ FUNC_7 (char*,struct statfs*) ;
 int FUNC_8 (struct statfs*,struct extmnttab*) ;
 int VAR_11 ;
 scalar_t__ FUNC_9 (char*,char*) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 char* FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (int ,int ,int ) ;
 scalar_t__ FUNC_17 (int *,int ,char*,int,int *,int *,int ,int ) ;
 int FUNC_18 (int *,int *,int) ;
 int FUNC_19 (int *,int) ;
 int FUNC_20 (int *,char*) ;

__attribute__((used)) static int
FUNC_21(int VAR_12, char *VAR_13, int VAR_14, boolean_t VAR_15)
{
 zfs_handle_t *VAR_16;
 int VAR_17 = 0;
 struct stat64 VAR_18;
 struct extmnttab VAR_19;
 const char *VAR_20 = (VAR_12 == VAR_2) ? "unshare" : "unmount";
 ino_t VAR_21;







 if (FUNC_6(VAR_13, &VAR_18) != 0) {
  (void) FUNC_0(VAR_11, FUNC_2("cannot %s '%s': %s\n"),
      VAR_20, VAR_13, FUNC_10(VAR_8));
  return (1);
 }
 VAR_21 = VAR_18.st_ino;
 {
  struct statfs VAR_22;

  if (FUNC_7(VAR_13, &VAR_22) != 0) {
   (void) FUNC_0(VAR_11, "%s: %s\n", VAR_13,
       FUNC_10(VAR_8));
   VAR_17 = -1;
  }
  FUNC_8(&VAR_22, &VAR_19);
 }

 if (VAR_17 != 0) {
  if (VAR_12 == VAR_2) {
   (void) FUNC_0(VAR_11, FUNC_2("cannot %s '%s': not "
       "currently mounted\n"), VAR_20, VAR_13);
   return (1);
  }
  (void) FUNC_0(VAR_11, FUNC_2("warning: %s not in mnttab\n"),
      VAR_13);
  if ((VAR_17 = FUNC_11(VAR_13, VAR_14)) != 0)
   (void) FUNC_0(VAR_11, FUNC_2("%s: %s\n"), VAR_13,
       FUNC_10(VAR_8));
  return (VAR_17 != 0);
 }

 if (FUNC_9(VAR_19.mnt_fstype, VAR_1) != 0) {
  (void) FUNC_0(VAR_11, FUNC_2("cannot %s '%s': not a ZFS "
      "filesystem\n"), VAR_20, VAR_13);
  return (1);
 }

 if ((VAR_16 = FUNC_16(VAR_9, VAR_19.mnt_special,
     VAR_7)) == ((void*)0))
  return (1);

 VAR_17 = 1;
 if (FUNC_6(VAR_19.mnt_mountp, &VAR_18) != 0) {
  (void) FUNC_0(VAR_11, FUNC_2("cannot %s '%s': %s\n"),
      VAR_20, VAR_13, FUNC_10(VAR_8));
  goto out;
 } else if (VAR_18.st_ino != VAR_21) {
  (void) FUNC_0(VAR_11, FUNC_2("cannot "
      "%s '%s': not a mountpoint\n"), VAR_20, VAR_13);
  goto out;
 }

 if (VAR_12 == VAR_2) {
  char VAR_23[VAR_3];
  char VAR_24[VAR_3];

  FUNC_12(FUNC_17(VAR_16, VAR_5, VAR_23,
      sizeof (VAR_23), ((void*)0), ((void*)0), 0, VAR_0) == 0);
  FUNC_12(FUNC_17(VAR_16, VAR_6, VAR_24,
      sizeof (VAR_24), ((void*)0), ((void*)0), 0, VAR_0) == 0);

  if (FUNC_9(VAR_23, "off") == 0 &&
      FUNC_9(VAR_24, "off") == 0) {
   (void) FUNC_0(VAR_11, FUNC_2("cannot unshare "
       "'%s': legacy share\n"), VAR_13);




  } else if (!FUNC_15(VAR_16)) {
   (void) FUNC_0(VAR_11, FUNC_2("cannot unshare '%s': "
       "not currently shared\n"), VAR_13);
  } else {
   VAR_17 = FUNC_20(VAR_16, VAR_13);
  }
 } else {
  char VAR_25[VAR_3];

  FUNC_12(FUNC_17(VAR_16, VAR_4, VAR_25,
      sizeof (VAR_25), ((void*)0), ((void*)0), 0, VAR_0) == 0);

  if (VAR_15) {
   VAR_17 = FUNC_18(VAR_16, ((void*)0), VAR_14);
  } else if (FUNC_9(VAR_25, "legacy") == 0) {
   (void) FUNC_0(VAR_11, FUNC_2("cannot unmount "
       "'%s': legacy mountpoint\n"),
       FUNC_14(VAR_16));
   (void) FUNC_0(VAR_11, "%s", FUNC_2("use umount(8) "
       "to unmount this filesystem\n"));
  } else {
   VAR_17 = FUNC_19(VAR_16, VAR_14);
  }
 }

out:
 FUNC_13(VAR_16);

 return (VAR_17 != 0);
}
