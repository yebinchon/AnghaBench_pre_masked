
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_5__ {void* core_command; void* core_program; } ;
struct TYPE_4__ {int descsz; int descdata; } ;
typedef TYPE_1__ Elf_Internal_Note ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,int ,int) ;
 TYPE_2__* FUNC_1 (int *) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd *VAR_2, Elf_Internal_Note *VAR_3)
{
  switch (VAR_3->descsz)
    {
    default:
      return VAR_0;

    case 260:
      FUNC_1 (VAR_2)->core_program
 = FUNC_0 (VAR_2, VAR_3->descdata + 84, 16);
      FUNC_1 (VAR_2)->core_command
 = FUNC_0 (VAR_2, VAR_3->descdata + 100, 80);
      break;

    case 336:
      FUNC_1 (VAR_2)->core_program
 = FUNC_0 (VAR_2, VAR_3->descdata + 88, 16);
      FUNC_1 (VAR_2)->core_command
 = FUNC_0 (VAR_2, VAR_3->descdata + 104, 80);
      break;
    }

  return VAR_1;
}
