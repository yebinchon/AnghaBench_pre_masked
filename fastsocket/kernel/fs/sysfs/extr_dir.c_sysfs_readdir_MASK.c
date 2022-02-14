
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysfs_dirent {int s_ino; char* s_name; TYPE_2__* s_parent; } ;
struct TYPE_3__ {struct dentry* dentry; } ;
struct file {int f_pos; struct sysfs_dirent* private_data; TYPE_1__ f_path; } ;
struct dentry {struct sysfs_dirent* d_fsdata; } ;
typedef int ino_t ;
typedef scalar_t__ (* filldir_t ) (void*,char const*,int,int,int,unsigned int) ;
struct TYPE_4__ {int s_ino; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct sysfs_dirent*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*) ;
 struct sysfs_dirent* FUNC_4 (struct sysfs_dirent*,int,struct sysfs_dirent*) ;
 struct sysfs_dirent* FUNC_5 (struct sysfs_dirent*,int,struct sysfs_dirent*) ;
 struct sysfs_dirent* FUNC_6 (struct sysfs_dirent*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(struct file * VAR_3, void * VAR_4, filldir_t VAR_5)
{
 struct dentry *VAR_6 = VAR_3->f_path.dentry;
 struct sysfs_dirent * VAR_7 = VAR_6->d_fsdata;
 struct sysfs_dirent *VAR_8 = VAR_3->private_data;
 ino_t VAR_9;

 if (VAR_3->f_pos == 0) {
  VAR_9 = VAR_7->s_ino;
  if (VAR_5(VAR_4, ".", 1, VAR_3->f_pos, VAR_9, VAR_0) == 0)
   VAR_3->f_pos++;
 }
 if (VAR_3->f_pos == 1) {
  if (VAR_7->s_parent)
   VAR_9 = VAR_7->s_parent->s_ino;
  else
   VAR_9 = VAR_7->s_ino;
  if (VAR_5(VAR_4, "..", 2, VAR_3->f_pos, VAR_9, VAR_0) == 0)
   VAR_3->f_pos++;
 }
 FUNC_1(&VAR_2);
 for (VAR_8 = FUNC_5(VAR_7, VAR_3->f_pos, VAR_8);
      VAR_8;
      VAR_8 = FUNC_4(VAR_7, VAR_3->f_pos, VAR_8)) {
  const char * VAR_10;
  unsigned int VAR_11;
  int VAR_12, VAR_13;

  VAR_10 = VAR_8->s_name;
  VAR_12 = FUNC_3(VAR_10);
  VAR_9 = VAR_8->s_ino;
  VAR_11 = FUNC_0(VAR_8);
  VAR_3->f_pos = VAR_9;
  VAR_3->private_data = FUNC_6(VAR_8);

  FUNC_2(&VAR_2);
  VAR_13 = VAR_5(VAR_4, VAR_10, VAR_12, VAR_3->f_pos, VAR_9, VAR_11);
  FUNC_1(&VAR_2);
  if (VAR_13 < 0)
   break;
 }
 FUNC_2(&VAR_2);
 if ((VAR_3->f_pos > 1) && !VAR_8) {
  VAR_3->f_pos = VAR_1;
  VAR_3->private_data = ((void*)0);
 }
 return 0;
}
