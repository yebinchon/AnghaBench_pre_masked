
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct cdev {struct timespec si_ctime; struct timespec si_mtime; struct timespec si_atime; int si_children; } ;
struct cdev_priv {struct cdev cdp_c; int cdp_dirent0; int * cdp_dirents; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cdev_priv* FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct timespec*) ;

struct cdev *
FUNC_3(int VAR_5)
{
 struct cdev_priv *VAR_6;
 struct cdev *VAR_7;
 struct timespec VAR_8;

 VAR_6 = FUNC_1(sizeof *VAR_6, VAR_1, VAR_4 |
     ((VAR_5 & VAR_0) ? VAR_2 : VAR_3));
 if (VAR_6 == ((void*)0))
  return (((void*)0));

 VAR_6->cdp_dirents = &VAR_6->cdp_dirent0;

 VAR_7 = &VAR_6->cdp_c;
 FUNC_0(&VAR_7->si_children);
 FUNC_2(&VAR_8);
 VAR_7->si_atime = VAR_7->si_mtime = VAR_7->si_ctime = VAR_8;

 return (VAR_7);
}
