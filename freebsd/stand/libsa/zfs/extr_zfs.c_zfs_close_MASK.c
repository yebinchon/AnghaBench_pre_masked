
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct open_file {int * f_fsdata; } ;
struct file {int dummy; } ;


 int * VAR_0 ;
 int FUNC_0 (struct file*) ;

__attribute__((used)) static int
FUNC_1(struct open_file *VAR_1)
{
 struct file *VAR_2 = (struct file *)VAR_1->f_fsdata;

 VAR_0 = ((void*)0);
 VAR_1->f_fsdata = ((void*)0);

 FUNC_0(VAR_2);
 return (0);
}
