
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysfs_dirent {int dummy; } ;
struct inode {int i_data; struct sysfs_dirent* i_private; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct sysfs_dirent*) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(struct inode *VAR_0)
{
 struct sysfs_dirent *VAR_1 = VAR_0->i_private;

 FUNC_2(&VAR_0->i_data, 0);
 FUNC_0(VAR_0);
 FUNC_1(VAR_1);
}
