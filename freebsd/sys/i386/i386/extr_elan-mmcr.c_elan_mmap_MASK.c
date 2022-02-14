
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_ooffset_t ;
typedef int vm_memattr_t ;
struct cdev {int dummy; } ;



__attribute__((used)) static int
FUNC_0(struct cdev *VAR_0, vm_ooffset_t VAR_1, vm_paddr_t *VAR_2,
    int VAR_3, vm_memattr_t *VAR_4)
{

 if (VAR_1 >= 0x1000)
  return (-1);
 *VAR_2 = 0xfffef000;
 return (0);
}
