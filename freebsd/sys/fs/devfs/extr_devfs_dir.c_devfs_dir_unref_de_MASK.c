
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfs_mount {int dummy; } ;
struct devfs_dirent {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,struct devfs_mount*,struct devfs_dirent*,int *) ;

void
FUNC_3(struct devfs_mount *VAR_1, struct devfs_dirent *VAR_2)
{
 char VAR_3[VAR_0 + 1], *VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_1, VAR_2, ((void*)0));
 FUNC_0(VAR_4 != ((void*)0), ("devfs_unref_dir_de: NULL namep"));

 FUNC_1(VAR_4);
}
