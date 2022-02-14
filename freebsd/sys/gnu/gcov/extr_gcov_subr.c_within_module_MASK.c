
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int module_t ;
typedef TYPE_1__* linker_file_t ;
struct TYPE_3__ {size_t size; scalar_t__ address; } ;


 TYPE_1__* FUNC_0 (int ) ;

int
FUNC_1(vm_offset_t VAR_0, module_t VAR_1)
{
 linker_file_t VAR_2;
 vm_offset_t VAR_3;
 size_t VAR_4;

 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = (vm_offset_t)VAR_2->address;
 VAR_4 = VAR_2->size;
 if (VAR_0 >= VAR_3 && VAR_0 < VAR_3 + VAR_4)
  return (1);
 return (0);
}
