
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int flagword ;
typedef int elf_gp ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_13__ {int ri_gp_value; } ;
struct TYPE_12__ {int ri_gp_value; } ;
struct TYPE_11__ {int size; scalar_t__ kind; } ;
struct TYPE_10__ {int sh_type; int sh_size; int bfd_section; } ;
typedef TYPE_1__ Elf_Internal_Shdr ;
typedef TYPE_2__ Elf_Internal_Options ;
typedef int Elf_External_Options ;
typedef TYPE_3__ Elf64_Internal_RegInfo ;
typedef int Elf64_External_RegInfo ;
typedef TYPE_4__ Elf32_RegInfo ;
typedef int Elf32_External_RegInfo ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char const*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,TYPE_1__*,char const*,int) ;
 int FUNC_6 (int ,int *,int ,int) ;
 int FUNC_7 (int *,int ,int *,int ,int) ;
 int FUNC_8 (int *,int ) ;
 int * FUNC_9 (int) ;
 int FUNC_10 (int *,int *,TYPE_4__*) ;
 int FUNC_11 (int *,int *,TYPE_3__*) ;
 int FUNC_12 (int *,int *,TYPE_2__*) ;
 int FUNC_13 (int *,int ,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char const*,char*) ;
 int FUNC_16 (int ,int *,int ,int) ;

bfd_boolean
FUNC_17 (bfd *VAR_6,
     Elf_Internal_Shdr *VAR_7,
     const char *VAR_8,
     int VAR_9)
{
  flagword VAR_10 = 0;






  switch (VAR_7->sh_type)
    {
    case 133:
      if (FUNC_15 (VAR_8, ".liblist") != 0)
 return VAR_0;
      break;
    case 132:
      if (FUNC_15 (VAR_8, ".msym") != 0)
 return VAR_0;
      break;
    case 140:
      if (FUNC_15 (VAR_8, ".conflict") != 0)
 return VAR_0;
      break;
    case 135:
      if (! FUNC_1 (VAR_8, ".gptab."))
 return VAR_0;
      break;
    case 128:
      if (FUNC_15 (VAR_8, ".ucode") != 0)
 return VAR_0;
      break;
    case 138:
      if (FUNC_15 (VAR_8, ".mdebug") != 0)
 return VAR_0;
      VAR_10 = VAR_2;
      break;
    case 130:
      if (FUNC_15 (VAR_8, ".reginfo") != 0
   || VAR_7->sh_size != sizeof (Elf32_External_RegInfo))
 return VAR_0;
      VAR_10 = (VAR_4 | VAR_3);
      break;
    case 134:
      if (FUNC_15 (VAR_8, ".MIPS.interfaces") != 0)
 return VAR_0;
      break;
    case 139:
      if (! FUNC_1 (VAR_8, ".MIPS.content"))
 return VAR_0;
      break;
    case 131:
      if (!FUNC_3 (VAR_8))
 return VAR_0;
      break;
    case 137:
      if (! FUNC_1 (VAR_8, ".debug_"))
 return VAR_0;
      break;
    case 129:
      if (FUNC_15 (VAR_8, ".MIPS.symlib") != 0)
 return VAR_0;
      break;
    case 136:
      if (! FUNC_1 (VAR_8, ".MIPS.events")
   && ! FUNC_1 (VAR_8, ".MIPS.post_rel"))
 return VAR_0;
      break;
    default:
      break;
    }

  if (! FUNC_5 (VAR_6, VAR_7, VAR_8, VAR_9))
    return VAR_0;

  if (VAR_10)
    {
      if (! FUNC_13 (VAR_6, VAR_7->bfd_section,
       (FUNC_8 (VAR_6,
          VAR_7->bfd_section)
        | VAR_10)))
 return VAR_0;
    }







  if (VAR_7->sh_type == 130)
    {
      Elf32_External_RegInfo VAR_11;
      Elf32_RegInfo VAR_12;

      if (! FUNC_7 (VAR_6, VAR_7->bfd_section,
          &VAR_11, 0, sizeof VAR_11))
 return VAR_0;
      FUNC_10 (VAR_6, &VAR_11, &VAR_12);
      elf_gp (VAR_13) = VAR_12.ri_gp_value;
    }





  if (VAR_7->sh_type == 131)
    {
      bfd_byte *VAR_14, *VAR_15, *VAR_16;

      VAR_14 = FUNC_9 (VAR_7->sh_size);
      if (VAR_14 == ((void*)0))
 return VAR_0;
      if (! FUNC_7 (VAR_6, VAR_7->bfd_section, VAR_14,
          0, VAR_7->sh_size))
 {
   FUNC_14 (VAR_14);
   return VAR_0;
 }
      VAR_15 = VAR_14;
      VAR_16 = VAR_14 + VAR_7->sh_size;
      while (VAR_15 + sizeof (Elf_External_Options) <= VAR_16)
 {
   Elf_Internal_Options VAR_17;

   FUNC_12 (VAR_6, (Elf_External_Options *) VAR_15,
     &VAR_17);
   if (VAR_17.size < sizeof (Elf_External_Options))
     {
       FUNC_6)
  (FUNC_4("%B: Warning: bad `%s' option size %u smaller than its header"),
  VAR_6, FUNC_2 (VAR_6), VAR_17.size);
       break;
     }
   if (FUNC_0 (VAR_6) && VAR_17.kind == VAR_1)
     {
       Elf64_Internal_RegInfo VAR_18;

       FUNC_11
  (VAR_6,
   ((Elf64_External_RegInfo *)
    (VAR_15 + sizeof (Elf_External_Options))),
   &VAR_18);
       elf_gp (VAR_19) = VAR_18.ri_gp_value;
     }
   else if (VAR_17.kind == VAR_1)
     {
       Elf32_RegInfo VAR_20;

       FUNC_10
  (VAR_6,
   ((Elf32_External_RegInfo *)
    (VAR_15 + sizeof (Elf_External_Options))),
   &VAR_20);
       elf_gp (VAR_21) = VAR_20.ri_gp_value;
     }
   VAR_15 += VAR_17.size;
 }
      FUNC_14 (VAR_14);
    }

  return VAR_5;
}
