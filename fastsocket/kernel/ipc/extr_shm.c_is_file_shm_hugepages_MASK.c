
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int * f_op; } ;


 int VAR_0 ;

int FUNC_0(struct file *VAR_1)
{
 return VAR_1->f_op == &VAR_0;
}
