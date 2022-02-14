
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct stat {int st_mode; scalar_t__ st_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int VAR_7 ;
 int FUNC_2 (int ,char*,char*,...) ;
 scalar_t__ FUNC_3 (char*,struct stat*) ;

__attribute__((used)) static int
FUNC_4(char *VAR_8)
{
  struct stat VAR_9;


  if (!VAR_8) {
    FUNC_1("exec_check_permission got a NULL map");
    return VAR_1;
  }
  if (FUNC_3(VAR_8, &VAR_9)) {
    FUNC_2(VAR_6, "map \"%s\" stat failure: %m", VAR_8);
    return VAR_7;
  }
  if (!FUNC_0(VAR_9.st_mode)) {
    FUNC_2(VAR_6, "map \"%s\" should be regular file", VAR_8);
    return VAR_1;
  }
  if (VAR_9.st_uid != 0) {
    FUNC_2(VAR_6, "map \"%s\" owned by uid %u (must be 0)", VAR_8, (u_int) VAR_9.st_uid);
    return VAR_0;
  }
  if (!(VAR_9.st_mode & VAR_5)) {
    FUNC_2(VAR_6, "map \"%s\" should be executable", VAR_8);
    return VAR_0;
  }
  if (VAR_9.st_mode & (VAR_3|VAR_2)) {
    FUNC_2(VAR_6, "map \"%s\" should not be setuid/setgid", VAR_8);
    return VAR_0;
  }
  if (VAR_9.st_mode & VAR_4) {
    FUNC_2(VAR_6, "map \"%s\" should not be world writeable", VAR_8);
    return VAR_0;
  }

  return 0;
}
