
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i386_ioperm_args {unsigned int start; unsigned int length; int enable; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i386_ioperm_args*) ;

int
FUNC_1(unsigned int VAR_1, unsigned int *VAR_2, int *VAR_3)
{
 struct i386_ioperm_args VAR_4;
 int VAR_5;

 VAR_4.start = VAR_1;
 VAR_4.length = *VAR_2;
 VAR_4.enable = *VAR_3;

 VAR_5 = FUNC_0(VAR_0, &VAR_4);

 *VAR_2 = VAR_4.length;
 *VAR_3 = VAR_4.enable;

 return (VAR_5);
}
