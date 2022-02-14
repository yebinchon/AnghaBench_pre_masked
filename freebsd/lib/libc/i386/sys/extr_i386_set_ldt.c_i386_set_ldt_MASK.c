
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union descriptor {int dummy; } descriptor ;
struct i386_ldt_args {int start; int num; union descriptor* descs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i386_ldt_args*) ;

int
FUNC_1(int VAR_1, union descriptor *VAR_2, int VAR_3)
{
 struct i386_ldt_args VAR_4;

 VAR_4.start = VAR_1;
 VAR_4.descs = VAR_2;
 VAR_4.num = VAR_3;

 return FUNC_0(VAR_0, &VAR_4);
}
