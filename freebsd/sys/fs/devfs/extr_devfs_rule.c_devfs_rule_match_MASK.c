
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfs_rule {int dr_icond; int dr_dswflags; } ;
struct devfs_mount {int dummy; } ;
struct devfs_krule {struct devfs_rule dk_rule; } ;
struct devfs_dirent {int dummy; } ;
struct cdevsw {int d_flags; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cdevsw* FUNC_0 (struct cdev*,int*) ;
 int FUNC_1 (struct cdev*,int) ;
 struct cdev* FUNC_2 (struct devfs_dirent*) ;
 int FUNC_3 (struct devfs_krule*,struct devfs_mount*,struct devfs_dirent*) ;

__attribute__((used)) static int
FUNC_4(struct devfs_krule *VAR_2, struct devfs_mount *VAR_3,
    struct devfs_dirent *VAR_4)
{
 struct devfs_rule *VAR_5 = &VAR_2->dk_rule;
 struct cdev *VAR_6;
 struct cdevsw *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_5->dr_icond & VAR_0) {
  if (VAR_6 == ((void*)0))
   return (0);
  VAR_7 = FUNC_0(VAR_6, &VAR_8);
  if (VAR_7 == ((void*)0))
   return (0);
  if ((VAR_7->d_flags & VAR_5->dr_dswflags) == 0) {
   FUNC_1(VAR_6, VAR_8);
   return (0);
  }
  FUNC_1(VAR_6, VAR_8);
 }
 if (VAR_5->dr_icond & VAR_1)
  if (!FUNC_3(VAR_2, VAR_3, VAR_4))
   return (0);

 return (1);
}
