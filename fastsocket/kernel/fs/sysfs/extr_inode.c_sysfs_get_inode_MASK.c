
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysfs_dirent {int s_ino; } ;
struct inode {int i_state; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sysfs_dirent*,struct inode*) ;
 int VAR_1 ;

struct inode * FUNC_2(struct sysfs_dirent *VAR_2)
{
 struct inode *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2->s_ino);
 if (VAR_3 && (VAR_3->i_state & VAR_0))
  FUNC_1(VAR_2, VAR_3);

 return VAR_3;
}
