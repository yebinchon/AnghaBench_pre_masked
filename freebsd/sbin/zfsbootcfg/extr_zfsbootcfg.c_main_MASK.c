
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int libzfs_handle_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int VAR_2 ;
 int FUNC_6 (char const* const) ;
 scalar_t__ FUNC_7 (char*,int *,int) ;
 scalar_t__ FUNC_8 (int *,scalar_t__,scalar_t__,char const* const) ;

int FUNC_9(int VAR_3, const char * const *VAR_4)
{
 char VAR_5[32];
 libzfs_handle_t *VAR_6;
 uint64_t VAR_7;
 uint64_t VAR_8;
 int VAR_9;
 int VAR_10;

 if (VAR_3 != 2) {
  FUNC_0(VAR_2, "usage: zfsbootcfg <boot.config(5) options>\n");
  return (1);
 }

 VAR_10 = FUNC_6(VAR_4[1]);
 if (VAR_10 >= VAR_1) {
  FUNC_0(VAR_2, "options string is too long\n");
  return (1);
 }

 if (FUNC_1(VAR_0, "vfs.zfs.boot.primary_pool", VAR_5, sizeof(VAR_5)) <= 0) {
  FUNC_4("can't get vfs.zfs.boot.primary_pool");
  return (1);
 }
 VAR_7 = FUNC_7(VAR_5, ((void*)0), 10);
 if (VAR_7 == 0) {
  FUNC_4("can't parse vfs.zfs.boot.primary_pool");
  return (1);
 }

 if (FUNC_1(VAR_0, "vfs.zfs.boot.primary_vdev", VAR_5, sizeof(VAR_5)) <= 0) {
  FUNC_4("can't get vfs.zfs.boot.primary_vdev");
  return (1);
 }
 VAR_8 = FUNC_7(VAR_5, ((void*)0), 10);
 if (VAR_8 == 0) {
  FUNC_4("can't parse vfs.zfs.boot.primary_vdev");
  return (1);
 }

 if ((VAR_6 = FUNC_3()) == ((void*)0)) {
  (void) FUNC_0(VAR_2, "internal error: failed to "
      "initialize ZFS library\n");
  return (1);
 }

 if (FUNC_8(VAR_6, VAR_7, VAR_8, VAR_4[1]) != 0) {
  FUNC_4("ZFS_IOC_NEXTBOOT failed");
  FUNC_2(VAR_6);
  return (1);
 }

 FUNC_2(VAR_6);
 FUNC_5("zfs next boot options are successfully written\n");
 return (0);
}
