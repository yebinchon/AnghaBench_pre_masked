
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int flagword ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;
struct TYPE_4__ {int sh_flags; scalar_t__ sh_type; int * bfd_section; } ;
typedef TYPE_1__ Elf_Internal_Shdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,TYPE_1__*,char const*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (bfd *VAR_6,
      Elf_Internal_Shdr *VAR_7,
      const char *VAR_8,
      int VAR_9)
{
  asection *VAR_10;
  flagword VAR_11;

  if (! FUNC_0 (VAR_6, VAR_7, VAR_8, VAR_9))
    return VAR_0;

  VAR_10 = VAR_7->bfd_section;
  VAR_11 = FUNC_1 (VAR_6, VAR_10);
  if (VAR_7->sh_flags & VAR_3)
    VAR_11 |= VAR_1;

  if (VAR_7->sh_type == VAR_4)
    VAR_11 |= VAR_2;

  FUNC_2 (VAR_6, VAR_10, VAR_11);
  return VAR_5;
}
