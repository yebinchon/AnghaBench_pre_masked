
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_7__ {int d_val; } ;
struct TYPE_9__ {TYPE_2__ d_un; int d_tag; } ;
struct TYPE_6__ {void* d_val; } ;
struct TYPE_8__ {TYPE_1__ d_un; void* d_tag; } ;
typedef TYPE_3__ Elf_Internal_Dyn ;
typedef TYPE_4__ Elf_External_Dyn ;


 void* FUNC_0 (int *,int ) ;

void
FUNC_1 (bfd *VAR_0,
   const void *VAR_1,
   Elf_Internal_Dyn *VAR_2)
{
  const Elf_External_Dyn *VAR_3 = VAR_1;

  VAR_2->d_tag = FUNC_0 (VAR_0, VAR_3->d_tag);
  VAR_2->d_un.d_val = FUNC_0 (VAR_0, VAR_3->d_un.d_val);
}
