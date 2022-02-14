
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct file* FUNC_0 (int) ;
 int FUNC_1 (struct file*) ;
 struct socket* FUNC_2 (struct file*,int*) ;

struct socket *FUNC_3(int VAR_1, int *VAR_2)
{
 struct file *VAR_3;
 struct socket *VAR_4;

 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3) {
  *VAR_2 = -VAR_0;
  return ((void*)0);
 }

 VAR_4 = FUNC_2(VAR_3, VAR_2);
 if (!VAR_4)
  FUNC_1(VAR_3);
 return VAR_4;
}
