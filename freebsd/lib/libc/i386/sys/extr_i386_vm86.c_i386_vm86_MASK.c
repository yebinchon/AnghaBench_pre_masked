
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i386_vm86_args {int sub_op; char* sub_args; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i386_vm86_args*) ;

int
FUNC_1(int VAR_1, void *VAR_2)
{
 struct i386_vm86_args VAR_3;

 VAR_3.sub_op = VAR_1;
 VAR_3.sub_args = (char *)VAR_2;

 return (FUNC_0(VAR_0, &VAR_3));
}
