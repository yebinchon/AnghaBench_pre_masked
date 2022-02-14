
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {TYPE_3__* ops; struct sock* sk; } ;
struct sock {int dummy; } ;
struct inode {int i_mode; } ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_6__ {scalar_t__ family; } ;
struct TYPE_4__ {struct inode* d_inode; } ;


 scalar_t__ VAR_0 ;
 struct socket* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;

struct sock *FUNC_2(struct file *VAR_1)
{
 struct sock *VAR_2 = ((void*)0);
 struct inode *VAR_3 = VAR_1->f_path.dentry->d_inode;




 if (FUNC_1(VAR_3->i_mode)) {
  struct socket *VAR_4 = FUNC_0(VAR_3);
  struct sock *VAR_5 = VAR_4->sk;




  if (VAR_5 && VAR_4->ops && VAR_4->ops->family == VAR_0)
   VAR_2 = VAR_5;
 }
 return VAR_2;
}
