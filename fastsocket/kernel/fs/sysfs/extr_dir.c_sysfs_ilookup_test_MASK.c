
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysfs_dirent {scalar_t__ s_ino; } ;
struct inode {scalar_t__ i_ino; } ;



__attribute__((used)) static int FUNC_0(struct inode *VAR_0, void *VAR_1)
{
 struct sysfs_dirent *VAR_2 = VAR_1;
 return VAR_0->i_ino == VAR_2->s_ino;
}
