
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct file {int f_mode; struct socket* private_data; int * f_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct socket *FUNC_0(struct file *VAR_3, int *VAR_4)
{
 if (VAR_3->f_mode & VAR_1 || VAR_3->f_op == &VAR_2)
  return VAR_3->private_data;

 *VAR_4 = -VAR_0;
 return ((void*)0);
}
