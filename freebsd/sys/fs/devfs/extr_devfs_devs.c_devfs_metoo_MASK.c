
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfs_mount {int dm_idx; } ;
struct devfs_dirent {int dummy; } ;
struct cdev_priv {int cdp_maxdirent; struct devfs_dirent** cdp_dirents; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct devfs_dirent**,int ) ;
 struct devfs_dirent** FUNC_3 (int,int ,int) ;
 int FUNC_4 (struct devfs_dirent**,struct devfs_dirent**,int) ;

__attribute__((used)) static void
FUNC_5(struct cdev_priv *VAR_3, struct devfs_mount *VAR_4)
{
 struct devfs_dirent **VAR_5;
 int VAR_6;

 VAR_6 = (VAR_4->dm_idx + 1) * sizeof *VAR_5;
 VAR_5 = FUNC_3(VAR_6, VAR_0, VAR_1 | VAR_2);
 FUNC_0();
 if (VAR_4->dm_idx <= VAR_3->cdp_maxdirent) {

  FUNC_1();
  FUNC_2(VAR_5, VAR_0);
  return;
 }
 FUNC_4(VAR_5, VAR_3->cdp_dirents, (VAR_3->cdp_maxdirent + 1) * sizeof *VAR_5);
 if (VAR_3->cdp_maxdirent > 0)
  FUNC_2(VAR_3->cdp_dirents, VAR_0);
 VAR_3->cdp_dirents = VAR_5;




 VAR_3->cdp_maxdirent = VAR_4->dm_idx;
 FUNC_1();
}
