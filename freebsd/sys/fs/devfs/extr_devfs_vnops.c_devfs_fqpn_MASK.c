
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devfs_mount {struct devfs_dirent* dm_rootdir; int dm_lock; } ;
struct devfs_dirent {TYPE_1__* de_dirent; } ;
struct componentname {int cn_namelen; int cn_nameptr; } ;
struct TYPE_2__ {int d_namlen; int d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 struct devfs_dirent* FUNC_1 (struct devfs_dirent*) ;
 int FUNC_2 (int *,int ) ;

char *
FUNC_3(char *VAR_2, struct devfs_mount *VAR_3, struct devfs_dirent *VAR_4,
    struct componentname *VAR_5)
{
 int VAR_6;
 struct devfs_dirent *VAR_7;

 FUNC_2(&VAR_3->dm_lock, VAR_0);

 VAR_6 = VAR_1;
 VAR_2[VAR_6] = '\0';
 if (VAR_5 != ((void*)0))
  VAR_6 -= VAR_5->cn_namelen;
 if (VAR_6 < 0)
   return (((void*)0));
 if (VAR_5 != ((void*)0))
  FUNC_0(VAR_5->cn_nameptr, VAR_2 + VAR_6, VAR_5->cn_namelen);
 VAR_7 = VAR_4;
 while (VAR_7 != VAR_3->dm_rootdir) {
  if (VAR_5 != ((void*)0) || VAR_6 < VAR_1) {
   VAR_6--;
   if (VAR_6 < 0)
     return (((void*)0));
   VAR_2[VAR_6] = '/';
  }
  VAR_6 -= VAR_7->de_dirent->d_namlen;
  if (VAR_6 < 0)
    return (((void*)0));
  FUNC_0(VAR_7->de_dirent->d_name, VAR_2 + VAR_6,
      VAR_7->de_dirent->d_namlen);
  VAR_7 = FUNC_1(VAR_7);
  if (VAR_7 == ((void*)0))
   return (((void*)0));
 }
 return (VAR_2 + VAR_6);
}
