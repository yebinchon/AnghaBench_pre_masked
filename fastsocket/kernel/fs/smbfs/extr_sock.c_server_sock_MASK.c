
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int dummy; } ;
struct smb_sb_info {struct file* sock_file; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_3__ {int d_inode; } ;


 int FUNC_0 (char*) ;
 struct socket* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct socket *
FUNC_3(struct smb_sb_info *VAR_0)
{
 struct file *VAR_1;

 if (VAR_0 && (VAR_1 = VAR_0->sock_file))
 {




  return FUNC_1(VAR_1->f_path.dentry->d_inode);
 }
 return ((void*)0);
}
