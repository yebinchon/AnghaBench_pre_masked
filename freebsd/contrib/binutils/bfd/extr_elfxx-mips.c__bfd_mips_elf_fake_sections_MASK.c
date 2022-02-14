
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_10__ {int flags; } ;
typedef TYPE_1__ bfd ;
struct TYPE_11__ {int size; } ;
typedef TYPE_2__ asection ;
struct TYPE_12__ {int sh_info; int sh_entsize; int sh_flags; int sh_type; } ;
typedef TYPE_3__ Elf_Internal_Shdr ;
typedef int Elf32_Lib ;
typedef int Elf32_External_gptab ;
typedef int Elf32_External_RegInfo ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 char* FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

bfd_boolean
FUNC_5 (bfd *VAR_19, Elf_Internal_Shdr *VAR_20, asection *VAR_21)
{
  const char *VAR_22 = FUNC_3 (VAR_19, VAR_21);

  if (FUNC_4 (VAR_22, ".liblist") == 0)
    {
      VAR_20->sh_type = VAR_11;
      VAR_20->sh_info = VAR_21->size / sizeof (Elf32_Lib);

    }
  else if (FUNC_4 (VAR_22, ".conflict") == 0)
    VAR_20->sh_type = VAR_4;
  else if (FUNC_0 (VAR_22, ".gptab."))
    {
      VAR_20->sh_type = VAR_9;
      VAR_20->sh_entsize = sizeof (Elf32_External_gptab);

    }
  else if (FUNC_4 (VAR_22, ".ucode") == 0)
    VAR_20->sh_type = VAR_16;
  else if (FUNC_4 (VAR_22, ".mdebug") == 0)
    {
      VAR_20->sh_type = VAR_6;


      if (FUNC_2 (VAR_19) && (VAR_19->flags & VAR_0) != 0)
 VAR_20->sh_entsize = 0;
      else
 VAR_20->sh_entsize = 1;
    }
  else if (FUNC_4 (VAR_22, ".reginfo") == 0)
    {
      VAR_20->sh_type = VAR_14;


      if (FUNC_2 (VAR_19))
 {
   if ((VAR_19->flags & VAR_0) != 0)
     VAR_20->sh_entsize = sizeof (Elf32_External_RegInfo);
   else
     VAR_20->sh_entsize = 1;
 }
      else
 VAR_20->sh_entsize = sizeof (Elf32_External_RegInfo);
    }
  else if (FUNC_2 (VAR_19)
    && (FUNC_4 (VAR_22, ".hash") == 0
        || FUNC_4 (VAR_22, ".dynamic") == 0
        || FUNC_4 (VAR_22, ".dynstr") == 0))
    {
      if (FUNC_2 (VAR_19))
 VAR_20->sh_entsize = 0;




    }
  else if (FUNC_4 (VAR_22, ".got") == 0
    || FUNC_4 (VAR_22, ".srdata") == 0
    || FUNC_4 (VAR_22, ".sdata") == 0
    || FUNC_4 (VAR_22, ".sbss") == 0
    || FUNC_4 (VAR_22, ".lit4") == 0
    || FUNC_4 (VAR_22, ".lit8") == 0)
    VAR_20->sh_flags |= VAR_2;
  else if (FUNC_4 (VAR_22, ".MIPS.interfaces") == 0)
    {
      VAR_20->sh_type = VAR_10;
      VAR_20->sh_flags |= VAR_3;
    }
  else if (FUNC_0 (VAR_22, ".MIPS.content"))
    {
      VAR_20->sh_type = VAR_5;
      VAR_20->sh_flags |= VAR_3;

    }
  else if (FUNC_1 (VAR_22))
    {
      VAR_20->sh_type = VAR_13;
      VAR_20->sh_entsize = 1;
      VAR_20->sh_flags |= VAR_3;
    }
  else if (FUNC_0 (VAR_22, ".debug_"))
    VAR_20->sh_type = VAR_7;
  else if (FUNC_4 (VAR_22, ".MIPS.symlib") == 0)
    {
      VAR_20->sh_type = VAR_15;


    }
  else if (FUNC_0 (VAR_22, ".MIPS.events")
    || FUNC_0 (VAR_22, ".MIPS.post_rel"))
    {
      VAR_20->sh_type = VAR_8;
      VAR_20->sh_flags |= VAR_3;

    }
  else if (FUNC_4 (VAR_22, ".msym") == 0)
    {
      VAR_20->sh_type = VAR_12;
      VAR_20->sh_flags |= VAR_1;
      VAR_20->sh_entsize = 8;
    }







  return VAR_18;
}
