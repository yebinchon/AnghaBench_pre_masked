
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {char* f_mntonname; char const* f_mntfromname; int f_fstypename; } ;
struct stat64 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (char*,struct stat64*) ;
 int FUNC_3 (char*,struct statfs*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,char const*) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 int FUNC_9 () ;

__attribute__((used)) static int
FUNC_10(const char *VAR_4, char *VAR_5, char *VAR_6,
    struct stat64 *VAR_7)
{
 struct statfs VAR_8;
 const char *VAR_9;
 char VAR_10[VAR_0];

 FUNC_0(VAR_4, VAR_10);

 if (VAR_10[0] != '/') {
  (void) FUNC_1(VAR_3, "invalid object '%s': must be full "
      "path\n", VAR_10);
  FUNC_9();
  return (-1);
 }

 if (FUNC_7(VAR_10) >= VAR_0) {
  (void) FUNC_1(VAR_3, "invalid object; pathname too long\n");
  return (-1);
 }

 if (FUNC_2(VAR_10, VAR_7) != 0) {
  (void) FUNC_1(VAR_3, "cannot open '%s': %s\n",
      VAR_10, FUNC_6(VAR_2));
  return (-1);
 }

 if (FUNC_3(VAR_10, &VAR_8) == -1) {
  (void) FUNC_1(VAR_3, "cannot find mountpoint for '%s': %s\n",
      VAR_10, FUNC_6(VAR_2));
  return (-1);
 }

 if (FUNC_4(VAR_8.f_fstypename, VAR_1) != 0) {
  (void) FUNC_1(VAR_3, "invalid path '%s': not a ZFS "
      "filesystem\n", VAR_10);
  return (-1);
 }

 if (FUNC_8(VAR_10, VAR_8.f_mntonname, FUNC_7(VAR_8.f_mntonname)) != 0) {
  (void) FUNC_1(VAR_3, "invalid path '%s': mountpoint "
      "doesn't match path\n", VAR_10);
  return (-1);
 }

 (void) FUNC_5(VAR_5, VAR_8.f_mntfromname);

 VAR_9 = VAR_10 + FUNC_7(VAR_8.f_mntonname);
 if (VAR_9[0] == '/')
  VAR_9++;
 (void) FUNC_5(VAR_6, VAR_9);

 return (0);
}
