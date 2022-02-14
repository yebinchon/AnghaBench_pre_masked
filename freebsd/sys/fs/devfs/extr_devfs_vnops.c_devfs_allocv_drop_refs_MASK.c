
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfs_mount {int dm_lock; } ;
struct devfs_dirent {int de_flags; } ;


 scalar_t__ FUNC_0 (struct devfs_dirent*) ;
 scalar_t__ FUNC_1 (struct devfs_mount*) ;
 int VAR_0 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct devfs_dirent*) ;
 int FUNC_4 (struct devfs_mount*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(int VAR_1, struct devfs_mount *VAR_2,
 struct devfs_dirent *VAR_3)
{
 int VAR_4;

 VAR_4 = 0;
 if (VAR_3->de_flags & VAR_0)
  VAR_4 = 1;
 if (FUNC_0(VAR_3)) {
  FUNC_2(VAR_4 == 1, ("DEVFS de dropped but not doomed"));
  FUNC_3(VAR_3);
 }
 if (FUNC_1(VAR_2)) {
  FUNC_2(VAR_4 == 1,
   ("DEVFS mount struct freed before dirent"));
  VAR_4 = 2;
  FUNC_6(&VAR_2->dm_lock);
  FUNC_4(VAR_2);
 }
 if (VAR_4 == 1 || (VAR_1 && VAR_4 != 2))
  FUNC_5(&VAR_2->dm_lock);
 return (VAR_4);
}
