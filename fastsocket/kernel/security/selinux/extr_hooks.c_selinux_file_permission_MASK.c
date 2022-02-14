
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct inode_security_struct {scalar_t__ sid; } ;
struct inode {struct inode_security_struct* i_security; } ;
struct file_security_struct {scalar_t__ sid; scalar_t__ isid; scalar_t__ pseqno; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {struct file_security_struct* f_security; TYPE_2__ f_path; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct file*,int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, int VAR_1)
{
 struct inode *VAR_2 = VAR_0->f_path.dentry->d_inode;
 struct file_security_struct *VAR_3 = VAR_0->f_security;
 struct inode_security_struct *VAR_4 = VAR_2->i_security;
 u32 VAR_5 = FUNC_1();

 if (!VAR_1)

  return 0;

 if (VAR_5 == VAR_3->sid && VAR_3->isid == VAR_4->sid &&
     VAR_3->pseqno == FUNC_0())

  return 0;

 return FUNC_2(VAR_0, VAR_1);
}
