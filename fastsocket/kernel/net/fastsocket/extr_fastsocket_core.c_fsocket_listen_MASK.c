
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {TYPE_2__* sk; TYPE_1__* ops; } ;
struct file {scalar_t__ private_data; struct file* sub_file; } ;
struct TYPE_4__ {int sk_max_ack_backlog; } ;
struct TYPE_3__ {int (* listen ) (struct socket*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct socket*,int) ;
 int FUNC_1 (struct socket*,int) ;

int FUNC_2(struct file *VAR_1, int VAR_2)
{
 struct socket *VAR_3, *VAR_4;
 struct file *VAR_5;
 int VAR_6 = 0;
 int VAR_7;

 VAR_3 = (struct socket *)VAR_1->private_data;
 if (VAR_3) {
  VAR_6 = VAR_3->ops->listen(VAR_3, VAR_2);
  if (VAR_6 < 0)
   goto out;
 } else {
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_5 = VAR_1->sub_file;
 if (VAR_5) {
  VAR_7 = VAR_3->sk->sk_max_ack_backlog;
  VAR_4 = (struct socket *)VAR_1->private_data;
  if (VAR_4) {
   VAR_6 = VAR_3->ops->listen(VAR_4, VAR_2);
   if (VAR_6 < 0)
    goto restore_out;
  } else {
   VAR_6 = -VAR_0;
   goto restore_out;
  }
 }

 goto out;

restore_out:
 VAR_3->sk->sk_max_ack_backlog = VAR_7;
out:
 return VAR_6;
}
