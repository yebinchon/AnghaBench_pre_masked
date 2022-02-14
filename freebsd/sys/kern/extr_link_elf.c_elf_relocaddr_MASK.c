
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* linker_file_t ;
typedef scalar_t__ kobj_class_t ;
typedef TYPE_3__* elf_file_t ;
struct TYPE_7__ {scalar_t__ pcpu_start; scalar_t__ pcpu_stop; scalar_t__ pcpu_base; scalar_t__ vnet_start; scalar_t__ vnet_stop; scalar_t__ vnet_base; } ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {scalar_t__ cls; } ;
typedef scalar_t__ Elf_Addr ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;

Elf_Addr
FUNC_1(linker_file_t VAR_1, Elf_Addr VAR_2)
{
 elf_file_t VAR_3;

 FUNC_0(VAR_1->ops->cls == (kobj_class_t)&VAR_0,
     ("elf_relocaddr: unexpected linker file %p", VAR_1));

 VAR_3 = (elf_file_t)VAR_1;
 if (VAR_2 >= VAR_3->pcpu_start && VAR_2 < VAR_3->pcpu_stop)
  return ((VAR_2 - VAR_3->pcpu_start) + VAR_3->pcpu_base);




 return (VAR_2);
}
