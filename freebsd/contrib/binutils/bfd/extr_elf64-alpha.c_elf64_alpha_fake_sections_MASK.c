
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_9__ {int flags; } ;
typedef TYPE_1__ bfd ;
struct TYPE_10__ {int flags; } ;
typedef TYPE_2__ asection ;
struct TYPE_11__ {int sh_entsize; int sh_flags; int sh_type; } ;
typedef TYPE_3__ Elf_Internal_Shdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd *VAR_5, Elf_Internal_Shdr *VAR_6, asection *VAR_7)
{
  register const char *VAR_8;

  VAR_8 = FUNC_0 (VAR_5, VAR_7);

  if (FUNC_1 (VAR_8, ".mdebug") == 0)
    {
      VAR_6->sh_type = VAR_3;


      if ((VAR_5->flags & VAR_0) != 0 )
 VAR_6->sh_entsize = 0;
      else
 VAR_6->sh_entsize = 1;
    }
  else if ((VAR_7->flags & VAR_1)
    || FUNC_1 (VAR_8, ".sdata") == 0
    || FUNC_1 (VAR_8, ".sbss") == 0
    || FUNC_1 (VAR_8, ".lit4") == 0
    || FUNC_1 (VAR_8, ".lit8") == 0)
    VAR_6->sh_flags |= VAR_2;

  return VAR_4;
}
