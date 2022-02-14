
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fileops {int dummy; } ;
struct file {short f_type; int f_ops; int f_flag; void* f_data; } ;


 int FUNC_0 (uintptr_t volatile*,uintptr_t) ;

void
FUNC_1(struct file *VAR_0, u_int VAR_1, short VAR_2, void *VAR_3, struct fileops *VAR_4)
{
 VAR_0->f_data = VAR_3;
 VAR_0->f_flag = VAR_1;
 VAR_0->f_type = VAR_2;
 FUNC_0((volatile uintptr_t *)&VAR_0->f_ops, (uintptr_t)VAR_4);
}
