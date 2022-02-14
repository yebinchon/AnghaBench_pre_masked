
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_5__ {char* core_command; void* core_program; } ;
struct TYPE_4__ {int descsz; int descdata; } ;
typedef TYPE_1__ Elf_Internal_Note ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,int ,int) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (bfd *VAR_2, Elf_Internal_Note *VAR_3)
{
  switch (VAR_3->descsz)
    {
    default:
      return VAR_0;

    case 128:
      FUNC_1 (VAR_2)->core_program
 = FUNC_0 (VAR_2, VAR_3->descdata + 32, 16);
      FUNC_1 (VAR_2)->core_command
 = FUNC_0 (VAR_2, VAR_3->descdata + 48, 80);
    }





  {
    char *VAR_4 = FUNC_1 (VAR_2)->core_command;
    int VAR_5 = FUNC_2 (VAR_4);

    if (0 < VAR_5 && VAR_4[VAR_5 - 1] == ' ')
      VAR_4[VAR_5 - 1] = '\0';
  }

  return VAR_1;
}
