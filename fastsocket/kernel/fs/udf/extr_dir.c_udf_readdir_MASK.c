
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_ino; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {scalar_t__ f_pos; TYPE_2__ f_path; } ;
typedef scalar_t__ (* filldir_t ) (void*,char*,int,scalar_t__,int ,int ) ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,struct file*,scalar_t__ (*) (void*,char*,int,scalar_t__,int ,int ),void*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2, filldir_t VAR_3)
{
 struct inode *VAR_4 = VAR_1->f_path.dentry->d_inode;
 int VAR_5;

 FUNC_1();

 if (VAR_1->f_pos == 0) {
  if (VAR_3(VAR_2, ".", 1, VAR_1->f_pos, VAR_4->i_ino, VAR_0) < 0) {
   FUNC_2();
   return 0;
  }
  VAR_1->f_pos++;
 }

 VAR_5 = FUNC_0(VAR_4, VAR_1, VAR_3, VAR_2);
 FUNC_2();
  return VAR_5;
}
