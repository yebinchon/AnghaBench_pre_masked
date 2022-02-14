
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_3__ {int namedata; } ;
typedef TYPE_1__ Elf_Internal_Note ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,char) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (Elf_Internal_Note *VAR_2, int *VAR_3)
{
  char *VAR_4;

  VAR_4 = FUNC_1 (VAR_2->namedata, '@');
  if (VAR_4 != ((void*)0))
    {
      *VAR_3 = FUNC_0(VAR_4 + 1);
      return VAR_1;
    }
  return VAR_0;
}
