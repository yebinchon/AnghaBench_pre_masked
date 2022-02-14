
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vm_inuse; int vm_size; int vm_quantum_shift; int * vm_freelist; } ;
typedef TYPE_1__ vmem_t ;
typedef int vmem_size_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;


 int FUNC_2 (TYPE_1__*) ;

 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;

vmem_size_t
FUNC_5(vmem_t *VAR_1, int VAR_2)
{
 int VAR_3;

 switch (VAR_2) {
 case 130:
  return VAR_1->vm_inuse;
 case 129:
  return VAR_1->vm_size - VAR_1->vm_inuse;
 case 129|130:
  return VAR_1->vm_size;
 case 128:
  FUNC_2(VAR_1);
  for (VAR_3 = VAR_0 - 1; VAR_3 >= 0; VAR_3--) {
   if (FUNC_0(&VAR_1->vm_freelist[VAR_3]))
    continue;
   FUNC_3(VAR_1);
   return ((vmem_size_t)FUNC_1(VAR_3) <<
       VAR_1->vm_quantum_shift);
  }
  FUNC_3(VAR_1);
  return (0);
 default:
  FUNC_4("vmem_size");
 }
}
