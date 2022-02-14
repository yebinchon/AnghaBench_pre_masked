
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode_security_struct {int sid; } ;
struct inode {struct inode_security_struct* i_security; } ;
struct file_security_struct {int pseqno; int isid; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {struct file_security_struct* f_security; TYPE_2__ f_path; } ;
struct cred {int dummy; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct cred const*,struct inode*,int ,int *) ;
 int FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, const struct cred *VAR_1)
{
 struct file_security_struct *VAR_2;
 struct inode *VAR_3;
 struct inode_security_struct *VAR_4;

 VAR_3 = VAR_0->f_path.dentry->d_inode;
 VAR_2 = VAR_0->f_security;
 VAR_4 = VAR_3->i_security;







 VAR_2->isid = VAR_4->sid;
 VAR_2->pseqno = FUNC_0();
 return FUNC_1(VAR_1, VAR_3, FUNC_2(VAR_0), ((void*)0));
}
