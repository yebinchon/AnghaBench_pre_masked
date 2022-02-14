
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* ops; } ;
struct file {struct socket* private_data; } ;
typedef int poll_table ;
struct TYPE_2__ {unsigned int (* poll ) (struct file*,struct socket*,int *) ;} ;


 unsigned int FUNC_0 (struct file*,struct socket*,int *) ;

unsigned int FUNC_1(struct file *VAR_0, poll_table *VAR_1)
{
 struct socket *VAR_2;




 VAR_2 = VAR_0->private_data;
 return VAR_2->ops->poll(VAR_0, VAR_2, VAR_1);
}
