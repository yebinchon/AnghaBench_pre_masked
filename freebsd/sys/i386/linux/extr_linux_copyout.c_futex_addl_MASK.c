
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint32_t ;
struct futex_st0 {int oparg; int* oldval; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int,int ,struct futex_st0*) ;
 int VAR_1 ;

int
FUNC_1(int VAR_2, uint32_t *VAR_3, int *VAR_4)
{
 struct futex_st0 VAR_5;

 VAR_5.oparg = VAR_2;
 VAR_5.oldval = VAR_4;
 if (FUNC_0((vm_offset_t)VAR_3, sizeof(uint32_t), 1,
     VAR_1, &VAR_5) != 0)
  return (-VAR_0);
 return (0);
}
