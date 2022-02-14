
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int mntfs ;
typedef int am_nfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,char*,char*,int *) ;
 int FUNC_3 (int ,char*,char*) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;

__attribute__((used)) static int
FUNC_5(am_nfs_handle_t *VAR_4, char *VAR_5, char *VAR_6, mntfs *VAR_7)
{
  struct stat VAR_8;

  FUNC_0("amfs_host: mounting fs %s on %s\n", VAR_6, VAR_5);

  (void) FUNC_1(VAR_5, 0555);
  if (FUNC_4(VAR_5, &VAR_8) < 0 || (VAR_8.st_mode & VAR_2) != VAR_1) {
    FUNC_3(VAR_3, "No mount point for %s - skipping", VAR_5);
    return VAR_0;
  }

  return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7);
}
