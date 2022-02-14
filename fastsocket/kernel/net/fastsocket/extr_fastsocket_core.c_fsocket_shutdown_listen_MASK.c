
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {TYPE_1__* ops; TYPE_2__* sk; } ;
struct file {struct socket* private_data; struct file* sub_file; } ;
struct TYPE_4__ {scalar_t__ sk_state; } ;
struct TYPE_3__ {int (* shutdown ) (struct socket*,int) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct socket*,int) ;
 int FUNC_1 (struct socket*,int) ;
 int FUNC_2 (struct socket*,int) ;

int FUNC_3(struct file *VAR_1, int VAR_2)
{
 struct socket *VAR_3;
 int VAR_4;

 VAR_3 = VAR_1->private_data;
 if (VAR_3->sk->sk_state == VAR_0) {
  struct file *VAR_5 = VAR_1->sub_file;

  VAR_4 = VAR_3->ops->shutdown(VAR_3, VAR_2);
  if (!VAR_4 && VAR_5 && VAR_5->private_data) {
   struct socket *VAR_6;

   VAR_6 = VAR_5->private_data;
   VAR_4 = VAR_6->ops->shutdown(VAR_6, VAR_2);
  }
 } else {
  VAR_4 = VAR_3->ops->shutdown(VAR_3, VAR_2);
 }

 return VAR_4;
}
