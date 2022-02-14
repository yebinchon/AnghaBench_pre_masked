
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ vm_qcache_max; scalar_t__ vm_size; scalar_t__ vm_inuse; int (* vm_reclaimfn ) (TYPE_1__*,int) ;} ;
typedef TYPE_1__ vmem_t ;
typedef scalar_t__ vmem_size_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 scalar_t__ FUNC_6 (TYPE_1__*,scalar_t__ const,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_7(vmem_t *VAR_1, const vmem_size_t VAR_2, vmem_size_t VAR_3, int VAR_4)
{
 vmem_size_t VAR_5;

 FUNC_0(VAR_1);






 if (FUNC_6(VAR_1, VAR_2, VAR_3, VAR_4) == 0)
  return (1);





 if (VAR_1->vm_qcache_max != 0 || VAR_1->vm_reclaimfn != ((void*)0)) {
  VAR_5 = VAR_1->vm_size - VAR_1->vm_inuse;
  FUNC_3(VAR_1);
  if (VAR_1->vm_qcache_max != 0)
   FUNC_4(VAR_1);
  if (VAR_1->vm_reclaimfn != ((void*)0))
   VAR_1->vm_reclaimfn(VAR_1, VAR_4);
  FUNC_2(VAR_1);

  if (VAR_1->vm_size - VAR_1->vm_inuse > VAR_5)
   return (1);
 }
 if ((VAR_4 & VAR_0) != 0)
  return (0);
 FUNC_1(VAR_1);
 return (1);
}
