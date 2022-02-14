
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef int vm_memattr_t ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(struct cdev *VAR_1, vm_ooffset_t VAR_2, vm_paddr_t *VAR_3,
    int VAR_4, vm_memattr_t *VAR_5)
{

 if (VAR_2 != 0)
  return (VAR_0);

 *VAR_3 = FUNC_0();

 return (0);
}
