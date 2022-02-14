
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct file* FUNC_1 (int) ;
 int FUNC_2 (struct file*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 unsigned int FUNC_4 (struct inode*) ;
 int FUNC_5 (unsigned int,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static struct file *FUNC_6(int VAR_3)
{
 struct file *VAR_4;
 struct inode *VAR_5;
 unsigned int VAR_6;

 VAR_4 = FUNC_1(VAR_3);
 if (!VAR_4)
  return ((void*)0);
 VAR_5 = VAR_4->f_path.dentry->d_inode;
 if (!FUNC_0(VAR_5->i_mode) ||
     FUNC_3(VAR_5) != VAR_2) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }
 VAR_6 = FUNC_4(VAR_5);
 if (!FUNC_5(VAR_6, VAR_1) &&
     !FUNC_5(VAR_6, VAR_0)) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }
 return VAR_4;
}
