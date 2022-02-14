
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct devfs_mount {int dm_mount; int dm_lock; } ;
struct devfs_dirent {int de_mode; int de_links; int de_dlist; struct devfs_dirent* de_dir; int de_flags; TYPE_1__* de_dirent; scalar_t__ de_inode; } ;
struct TYPE_2__ {void* d_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct devfs_dirent*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct devfs_dirent* FUNC_3 (char*,int) ;
 int FUNC_4 (struct devfs_mount*,struct devfs_dirent*) ;
 int FUNC_5 (int ,char*,int,struct devfs_dirent*) ;
 int FUNC_6 (int *,int ) ;

struct devfs_dirent *
FUNC_7(struct devfs_mount *VAR_6, char *VAR_7, int VAR_8,
    struct devfs_dirent *VAR_9, u_int VAR_10)
{
 struct devfs_dirent *VAR_11;
 struct devfs_dirent *VAR_12;


 VAR_11 = FUNC_3(VAR_7, VAR_8);
 FUNC_0(&VAR_11->de_dlist);
 VAR_11->de_dirent->d_type = VAR_2;
 VAR_11->de_mode = 0555;
 VAR_11->de_links = 2;
 VAR_11->de_dir = VAR_11;
 if (VAR_10 != 0)
  VAR_11->de_inode = VAR_10;
 else
  VAR_11->de_inode = FUNC_2(VAR_5);







 VAR_12 = FUNC_3(".", 1);
 VAR_12->de_dirent->d_type = VAR_2;
 VAR_12->de_flags |= VAR_0;
 FUNC_1(&VAR_11->de_dlist, VAR_12, VAR_4);
 VAR_12->de_dir = VAR_11;


 VAR_12 = FUNC_3("..", 2);
 VAR_12->de_dirent->d_type = VAR_2;
 VAR_12->de_flags |= VAR_1;
 FUNC_1(&VAR_11->de_dlist, VAR_12, VAR_4);
 if (VAR_9 == ((void*)0)) {
  VAR_12->de_dir = VAR_11;
 } else {
  VAR_12->de_dir = VAR_9;
  FUNC_6(&VAR_6->dm_lock, VAR_3);
  FUNC_1(&VAR_9->de_dlist, VAR_11, VAR_4);
  VAR_9->de_links++;
  FUNC_4(VAR_6, VAR_11);
 }




 return (VAR_11);
}
