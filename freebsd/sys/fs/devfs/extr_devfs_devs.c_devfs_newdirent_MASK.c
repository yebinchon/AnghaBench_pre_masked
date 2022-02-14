
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {int d_namlen; int d_reclen; int d_name; } ;
struct devfs_dirent {int de_links; int de_holdcnt; int de_ctime; int de_atime; int de_mtime; struct dirent* de_dirent; } ;


 int FUNC_0 (struct dirent*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct dirent*) ;
 int FUNC_3 (struct devfs_dirent*) ;
 struct devfs_dirent* FUNC_4 (int,int ,int) ;
 int FUNC_5 (int *) ;

struct devfs_dirent *
FUNC_6(char *VAR_3, int VAR_4)
{
 int VAR_5;
 struct devfs_dirent *VAR_6;
 struct dirent VAR_7;

 VAR_7.d_namlen = VAR_4;
 VAR_5 = sizeof(*VAR_6) + FUNC_0(&VAR_7);
 VAR_6 = FUNC_4(VAR_5, VAR_0, VAR_1 | VAR_2);
 VAR_6->de_dirent = (struct dirent *)(VAR_6 + 1);
 VAR_6->de_dirent->d_namlen = VAR_4;
 VAR_6->de_dirent->d_reclen = FUNC_0(&VAR_7);
 FUNC_1(VAR_3, VAR_6->de_dirent->d_name, VAR_4);
 FUNC_2(VAR_6->de_dirent);
 FUNC_5(&VAR_6->de_ctime);
 VAR_6->de_mtime = VAR_6->de_atime = VAR_6->de_ctime;
 VAR_6->de_links = 1;
 VAR_6->de_holdcnt = 1;



 return (VAR_6);
}
