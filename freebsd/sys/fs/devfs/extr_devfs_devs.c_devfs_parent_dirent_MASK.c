
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devfs_dirent {int de_flags; struct devfs_dirent* de_dir; int de_dlist; TYPE_1__* de_dirent; } ;
struct TYPE_2__ {scalar_t__ d_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct devfs_dirent* FUNC_0 (int *) ;
 struct devfs_dirent* FUNC_1 (struct devfs_dirent*,int ) ;
 int VAR_3 ;

struct devfs_dirent *
FUNC_2(struct devfs_dirent *VAR_4)
{

 if (VAR_4->de_dirent->d_type != VAR_2)
  return (VAR_4->de_dir);

 if (VAR_4->de_flags & (VAR_0 | VAR_1))
  return (((void*)0));

 VAR_4 = FUNC_0(&VAR_4->de_dlist);
 if (VAR_4 == ((void*)0))
  return (((void*)0));
 VAR_4 = FUNC_1(VAR_4, VAR_3);
 if (VAR_4 == ((void*)0))
  return (((void*)0));

 return (VAR_4->de_dir);
}
