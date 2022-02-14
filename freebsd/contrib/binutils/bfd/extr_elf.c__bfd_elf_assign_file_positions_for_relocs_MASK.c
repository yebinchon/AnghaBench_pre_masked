
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int file_ptr ;
typedef int bfd ;
struct TYPE_6__ {int next_file_pos; } ;
struct TYPE_5__ {scalar_t__ sh_type; int sh_offset; } ;
typedef TYPE_1__ Elf_Internal_Shdr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 TYPE_1__** FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *) ;

void
FUNC_4 (bfd *VAR_3)
{
  file_ptr VAR_4;
  unsigned int VAR_5, VAR_6;
  Elf_Internal_Shdr **VAR_7;

  VAR_4 = FUNC_3 (VAR_3)->next_file_pos;

  VAR_6 = FUNC_2 (VAR_3);
  for (VAR_5 = 1, VAR_7 = FUNC_1 (VAR_3) + 1; VAR_5 < VAR_6; VAR_5++, VAR_7++)
    {
      Elf_Internal_Shdr *VAR_8;

      VAR_8 = *VAR_7;
      if ((VAR_8->sh_type == VAR_0 || VAR_8->sh_type == VAR_1)
   && VAR_8->sh_offset == -1)
 VAR_4 = FUNC_0 (VAR_8, VAR_4, VAR_2);
    }

  FUNC_3 (VAR_3)->next_file_pos = VAR_4;
}
