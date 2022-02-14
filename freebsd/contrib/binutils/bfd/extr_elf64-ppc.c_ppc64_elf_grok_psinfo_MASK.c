
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_5__ {void* core_command; void* core_program; } ;
struct TYPE_4__ {int descsz; scalar_t__ descdata; } ;
typedef TYPE_1__ Elf_Internal_Note ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,scalar_t__,int) ;
 TYPE_3__* FUNC_1 (int *) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd *VAR_2, Elf_Internal_Note *VAR_3)
{
  if (VAR_3->descsz != 136)
    return VAR_0;

  FUNC_1 (VAR_2)->core_program
    = FUNC_0 (VAR_2, VAR_3->descdata + 40, 16);
  FUNC_1 (VAR_2)->core_command
    = FUNC_0 (VAR_2, VAR_3->descdata + 56, 80);

  return VAR_1;
}
