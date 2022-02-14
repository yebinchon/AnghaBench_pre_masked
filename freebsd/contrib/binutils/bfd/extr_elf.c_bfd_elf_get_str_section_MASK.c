
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int file_ptr ;
typedef int bfd_size_type ;
typedef char bfd_byte ;
typedef int bfd ;
struct TYPE_3__ {char* contents; int sh_size; int sh_offset; } ;
typedef TYPE_1__ Elf_Internal_Shdr ;


 int VAR_0 ;
 char* FUNC_0 (int *,int) ;
 int FUNC_1 (char*,int,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__** FUNC_5 (int *) ;
 unsigned int FUNC_6 (int *) ;

char *
FUNC_7 (bfd *VAR_3, unsigned int VAR_4)
{
  Elf_Internal_Shdr **VAR_5;
  bfd_byte *VAR_6 = ((void*)0);
  file_ptr VAR_7;
  bfd_size_type VAR_8;

  VAR_5 = FUNC_5 (VAR_3);
  if (VAR_5 == 0
      || VAR_4 >= FUNC_6 (VAR_3)
      || VAR_5[VAR_4] == 0)
    return ((void*)0);

  VAR_6 = VAR_5[VAR_4]->contents;
  if (VAR_6 == ((void*)0))
    {

      VAR_7 = VAR_5[VAR_4]->sh_offset;
      VAR_8 = VAR_5[VAR_4]->sh_size;



      if (VAR_8 + 1 == 0
   || (VAR_6 = FUNC_0 (VAR_3, VAR_8 + 1)) == ((void*)0)
   || FUNC_3 (VAR_3, VAR_7, VAR_0) != 0)
 VAR_6 = ((void*)0);
      else if (FUNC_1 (VAR_6, VAR_8, VAR_3) != VAR_8)
 {
   if (FUNC_2 () != VAR_2)
     FUNC_4 (VAR_1);
   VAR_6 = ((void*)0);
 }
      else
 VAR_6[VAR_8] = '\0';
      VAR_5[VAR_4]->contents = VAR_6;
    }
  return (char *) VAR_6;
}
