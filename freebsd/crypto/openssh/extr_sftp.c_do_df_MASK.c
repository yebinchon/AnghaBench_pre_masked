
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sftp_statvfs {int f_files; int f_ffree; int f_blocks; int f_bfree; int f_frsize; int f_bavail; scalar_t__ f_favail; } ;
struct sftp_conn {int dummy; } ;
typedef int s_used ;
typedef int s_total ;
typedef int s_root ;
typedef int s_icapacity ;
typedef int s_dcapacity ;
typedef int s_avail ;


 int VAR_0 ;
 int FUNC_0 (struct sftp_conn*,char const*,struct sftp_statvfs*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int,char*,unsigned long long) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_5(struct sftp_conn *VAR_1, const char *VAR_2, int VAR_3, int VAR_4)
{
 struct sftp_statvfs VAR_5;
 char VAR_6[VAR_0], VAR_7[VAR_0];
 char VAR_8[VAR_0], VAR_9[VAR_0];
 char VAR_10[16], VAR_11[16];

 if (FUNC_0(VAR_1, VAR_2, &VAR_5, 1) == -1)
  return -1;
 if (VAR_5.f_files == 0)
  FUNC_4(VAR_10, "ERR", sizeof(VAR_10));
 else {
  FUNC_3(VAR_10, sizeof(VAR_10), "%3llu%%",
      (unsigned long long)(100 * (VAR_5.f_files - VAR_5.f_ffree) /
      VAR_5.f_files));
 }
 if (VAR_5.f_blocks == 0)
  FUNC_4(VAR_11, "ERR", sizeof(VAR_11));
 else {
  FUNC_3(VAR_11, sizeof(VAR_11), "%3llu%%",
      (unsigned long long)(100 * (VAR_5.f_blocks - VAR_5.f_bfree) /
      VAR_5.f_blocks));
 }
 if (VAR_4) {
  FUNC_2("     Inodes        Used       Avail      "
      "(root)    %%Capacity\n");
  FUNC_2("%11llu %11llu %11llu %11llu         %s\n",
      (unsigned long long)VAR_5.f_files,
      (unsigned long long)(VAR_5.f_files - VAR_5.f_ffree),
      (unsigned long long)VAR_5.f_favail,
      (unsigned long long)VAR_5.f_ffree, VAR_10);
 } else if (VAR_3) {
  FUNC_4(VAR_6, "error", sizeof(VAR_6));
  FUNC_4(VAR_7, "error", sizeof(VAR_7));
  FUNC_4(VAR_8, "error", sizeof(VAR_8));
  FUNC_4(VAR_9, "error", sizeof(VAR_9));
  FUNC_1((VAR_5.f_blocks - VAR_5.f_bfree) * VAR_5.f_frsize, VAR_6);
  FUNC_1(VAR_5.f_bavail * VAR_5.f_frsize, VAR_7);
  FUNC_1(VAR_5.f_bfree * VAR_5.f_frsize, VAR_8);
  FUNC_1(VAR_5.f_blocks * VAR_5.f_frsize, VAR_9);
  FUNC_2("    Size     Used    Avail   (root)    %%Capacity\n");
  FUNC_2("%7sB %7sB %7sB %7sB         %s\n",
      VAR_9, VAR_6, VAR_7, VAR_8, VAR_11);
 } else {
  FUNC_2("        Size         Used        Avail       "
      "(root)    %%Capacity\n");
  FUNC_2("%12llu %12llu %12llu %12llu         %s\n",
      (unsigned long long)(VAR_5.f_frsize * VAR_5.f_blocks / 1024),
      (unsigned long long)(VAR_5.f_frsize *
      (VAR_5.f_blocks - VAR_5.f_bfree) / 1024),
      (unsigned long long)(VAR_5.f_frsize * VAR_5.f_bavail / 1024),
      (unsigned long long)(VAR_5.f_frsize * VAR_5.f_bfree / 1024),
      VAR_11);
 }
 return 0;
}
