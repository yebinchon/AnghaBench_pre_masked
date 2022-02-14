
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_ooffset_t ;
typedef int vm_memattr_t ;
struct cdev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct cdev*) ;

int
FUNC_1(struct cdev *VAR_1, vm_ooffset_t VAR_2, vm_paddr_t *VAR_3,
    int VAR_4, vm_memattr_t *VAR_5)
{
 if (FUNC_0(VAR_1) != VAR_0)
  return (-1);

 *VAR_3 = VAR_2;

 return (0);
}
