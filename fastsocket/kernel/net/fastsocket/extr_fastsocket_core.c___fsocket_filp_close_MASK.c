
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * mnt; struct file* dentry; } ;
struct file {int f_count; int i_count; struct file* d_inode; int d_count; TYPE_1__ f_path; int * private_data; } ;
struct dentry {int f_count; int i_count; struct dentry* d_inode; int d_count; TYPE_1__ f_path; int * private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct file*,int ) ;
 int FUNC_1 (int ,char*,struct file*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (struct file*) ;
 int FUNC_7 (struct file*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_2)
{
 struct dentry *VAR_3 = VAR_2->f_path.dentry;

 if (FUNC_2(&VAR_2->f_count)) {

  FUNC_6(VAR_2);

  VAR_2->private_data = ((void*)0);
  VAR_2->f_path.dentry = ((void*)0);
  VAR_2->f_path.mnt = ((void*)0);

  FUNC_7(VAR_2);

  FUNC_0(VAR_0, "Free file 0x%p[%ld]\n", VAR_2, FUNC_3(&VAR_2->f_count));

  if (VAR_3) {
   FUNC_0(VAR_0, "Release dentry 0x%p[%d]\n", VAR_3, FUNC_4(&VAR_3->d_count));
   FUNC_0(VAR_0, "Release inode 0x%p[%d]\n", VAR_3->d_inode, FUNC_4(&VAR_3->d_inode->i_count));
  } else {
   FUNC_1(VAR_1, "No dentry for file 0x%p\n", VAR_2);
   return 1;
  }

  FUNC_5(VAR_3);
 } else {
  FUNC_0(VAR_0, "Next time to release file 0x%p[%ld]\n", VAR_2, FUNC_3(&VAR_2->f_count));
 }

 return 0;
}
