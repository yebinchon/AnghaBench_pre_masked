
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;
struct TYPE_3__ {int sh_flags; int sh_type; } ;
typedef TYPE_1__ Elf_Internal_Shdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd * VAR_3, Elf_Internal_Shdr * VAR_4, asection * VAR_5)
{
  const char * VAR_6;

  VAR_6 = FUNC_0 (VAR_3, VAR_5);

  if (FUNC_1 (VAR_3, VAR_6))
    {
      VAR_4->sh_type = VAR_1;
      VAR_4->sh_flags |= VAR_0;
    }
  return VAR_2;
}
