
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct smb_sb_info {struct file* sock_file; int data_ready; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int sk_data_ready; } ;


 int FUNC_0 (char*,struct socket*) ;
 int FUNC_1 (struct file*) ;
 struct socket* FUNC_2 (struct smb_sb_info*) ;

void
FUNC_3(struct smb_sb_info *VAR_0)
{
 struct file * VAR_1 = VAR_0->sock_file;

 if (VAR_1) {
  struct socket *VAR_2 = FUNC_2(VAR_0);

  FUNC_0("closing socket %p\n", VAR_2);
  VAR_2->sk->sk_data_ready = VAR_0->data_ready;
  VAR_0->sock_file = ((void*)0);
  FUNC_1(VAR_1);
 }
}
