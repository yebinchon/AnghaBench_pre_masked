
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zfs_type_t ;
typedef int zfs_handle_t ;
struct statfs {int dummy; } ;
struct stat64 {scalar_t__ st_dev; } ;
struct extmnttab {char* mnt_special; int mnt_fstype; int mnt_minor; int mnt_major; } ;
struct TYPE_4__ {int libzfs_mnttab; } ;
typedef TYPE_1__ libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*,...) ;
 int FUNC_1 (int ,struct extmnttab*,int ) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,struct stat64*) ;
 int FUNC_6 (char*,struct statfs*) ;
 int FUNC_7 (struct statfs*,struct extmnttab*) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (int ,int ) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,char*,int ) ;
 int * FUNC_12 (TYPE_1__*,char*,int ) ;

zfs_handle_t *
FUNC_13(libzfs_handle_t *VAR_4, char *VAR_5, zfs_type_t VAR_6)
{
 struct stat64 VAR_7;
 struct extmnttab VAR_8;
 int VAR_9;

 if (VAR_5[0] != '/' && FUNC_11(VAR_5, "./", FUNC_10("./")) != 0) {



  return (FUNC_12(VAR_4, VAR_5, VAR_6));
 }

 if (FUNC_5(VAR_5, &VAR_7) != 0) {
  (void) FUNC_0(VAR_3, "%s: %s\n", VAR_5, FUNC_9(VAR_2));
  return (((void*)0));
 }
 {
  struct statfs VAR_10;

  VAR_9 = FUNC_6(VAR_5, &VAR_10);
  if (VAR_9 == 0)
   FUNC_7(&VAR_10, &VAR_8);
  else {
   (void) FUNC_0(VAR_3, "%s: %s\n", VAR_5,
       FUNC_9(VAR_2));
  }
 }

 if (VAR_9 != 0) {
  return (((void*)0));
 }

 if (FUNC_8(VAR_8.mnt_fstype, VAR_0) != 0) {
  (void) FUNC_0(VAR_3, FUNC_2("'%s': not a ZFS filesystem\n"),
      VAR_5);
  return (((void*)0));
 }

 return (FUNC_12(VAR_4, VAR_8.mnt_special, VAR_1));
}
