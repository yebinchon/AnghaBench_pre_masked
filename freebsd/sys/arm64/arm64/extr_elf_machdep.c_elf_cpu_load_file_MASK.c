
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef TYPE_1__* linker_file_t ;
struct TYPE_3__ {int id; int size; scalar_t__ address; } ;


 int FUNC_0 (int ,int ) ;

int
FUNC_1(linker_file_t VAR_0)
{

 if (VAR_0->id != 1)
  FUNC_0((vm_offset_t)VAR_0->address, VAR_0->size);
 return (0);
}
