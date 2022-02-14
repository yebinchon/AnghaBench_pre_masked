
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef void* u_long ;
struct casueword_arg0 {int res; void* oldval; void* newval; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int ,struct casueword_arg0*) ;

int
FUNC_1(volatile u_long *VAR_1, u_long VAR_2, u_long *VAR_3, u_long VAR_4)
{
 struct casueword_arg0 VAR_5;
 int VAR_6;

 VAR_5.oldval = VAR_2;
 VAR_5.newval = VAR_4;
 VAR_6 = FUNC_0((vm_offset_t)VAR_1, sizeof(int32_t), 1,
     VAR_0, &VAR_5);
 if (VAR_6 == 0) {
  *VAR_3 = VAR_5.oldval;
  return (VAR_5.res);
 }
 return (-1);
}
