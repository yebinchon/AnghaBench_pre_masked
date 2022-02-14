
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfsmount {int * spa; } ;
struct stat {int dummy; } ;
struct open_file {scalar_t__ f_fsdata; scalar_t__ f_devdata; } ;
struct file {int f_dnode; } ;
typedef int spa_t ;


 int FUNC_0 (int const*,int *,struct stat*) ;

__attribute__((used)) static int
FUNC_1(struct open_file *VAR_0, struct stat *VAR_1)
{
 const spa_t *VAR_2 = ((struct zfsmount *)VAR_0->f_devdata)->spa;
 struct file *VAR_3 = (struct file *)VAR_0->f_fsdata;

 return (FUNC_0(VAR_2, &VAR_3->f_dnode, VAR_1));
}
