
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_offset_t ;
typedef TYPE_1__* linker_file_t ;
struct TYPE_3__ {int id; scalar_t__ size; scalar_t__ address; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;

int
FUNC_5(linker_file_t VAR_0)
{
 if (VAR_0->id == 1)
  return (0);




 FUNC_0((vm_offset_t)VAR_0->address, (vm_size_t)VAR_0->size);
 FUNC_2((vm_offset_t)VAR_0->address, (vm_size_t)VAR_0->size);
 FUNC_1((vm_offset_t)VAR_0->address, (vm_size_t)VAR_0->size);

 return (0);
}
