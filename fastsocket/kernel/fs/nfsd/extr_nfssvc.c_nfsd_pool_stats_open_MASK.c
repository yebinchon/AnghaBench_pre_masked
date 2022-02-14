
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct file*) ;

int FUNC_4(struct inode *VAR_3, struct file *VAR_4)
{
 int VAR_5;
 FUNC_0(&VAR_1);
 if (VAR_2 == ((void*)0)) {
  FUNC_1(&VAR_1);
  return -VAR_0;
 }

 FUNC_2(VAR_2);
 VAR_5 = FUNC_3(VAR_2, VAR_4);
 FUNC_1(&VAR_1);
 return VAR_5;
}
