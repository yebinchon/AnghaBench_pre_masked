
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ e_machine; int e_shnum; scalar_t__* e_ident; } ;
struct TYPE_15__ {int sh_size; scalar_t__ sh_type; int sh_link; int sh_offset; int sh_info; } ;
struct TYPE_14__ {int r_offset; int r_info; int r_addend; int st_info; } ;
typedef TYPE_1__ Elf_Internal_Sym ;
typedef TYPE_2__ Elf_Internal_Shdr ;
typedef TYPE_1__ Elf_Internal_Rela ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_4 (void*,TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (unsigned char*,int ,unsigned int) ;
 TYPE_8__ VAR_8 ;
 int FUNC_10 (TYPE_1__*) ;
 unsigned int FUNC_11 (TYPE_1__*) ;
 unsigned long FUNC_12 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 TYPE_2__* VAR_11 ;
 int FUNC_13 (void*,int ,scalar_t__,TYPE_1__**,unsigned long*) ;
 int FUNC_14 (int ,unsigned long,int ) ;

__attribute__((used)) static int
FUNC_15 (void *VAR_12,
     Elf_Internal_Shdr *VAR_13,
     unsigned char *VAR_14)
{
  Elf_Internal_Shdr *VAR_15;
  unsigned char *VAR_16 = VAR_14 + VAR_13->sh_size;

  if (!VAR_10)
    return 1;


  if (VAR_8.e_machine == VAR_3)
    return 0;

  for (VAR_15 = VAR_11;
       VAR_15 < VAR_11 + VAR_8.e_shnum;
       ++VAR_15)
    {
      unsigned long VAR_17;
      Elf_Internal_Rela *VAR_18, *VAR_19;
      Elf_Internal_Shdr *VAR_20;
      Elf_Internal_Sym *VAR_21;
      Elf_Internal_Sym *VAR_22;

      if (VAR_15->sh_type != VAR_4
   || FUNC_6 (VAR_15->sh_info) >= VAR_8.e_shnum
   || FUNC_5 (VAR_15->sh_info) != VAR_13
   || VAR_15->sh_size == 0
   || FUNC_6 (VAR_15->sh_link) >= VAR_8.e_shnum)
 continue;

      if (!FUNC_13 (VAR_12, VAR_15->sh_offset, VAR_15->sh_size,
         &VAR_18, &VAR_17))
 return 0;

      VAR_20 = FUNC_5 (VAR_15->sh_link);
      VAR_21 = FUNC_4 (VAR_12, VAR_20);

      for (VAR_19 = VAR_18; VAR_19 < VAR_18 + VAR_17; ++VAR_19)
 {
   unsigned char *VAR_23;
   unsigned int VAR_24;

   VAR_24 = FUNC_11 (VAR_19);
   if (VAR_24 == 0)
     {
       FUNC_14 (FUNC_8("skipping relocation of unknown size against offset 0x%lx in section %s\n"),
      (unsigned long) VAR_19->r_offset,
      FUNC_7 (VAR_13));
       continue;
     }

   VAR_23 = VAR_14 + VAR_19->r_offset;
   if ((VAR_23 + VAR_24) > VAR_16)
     {
       FUNC_14 (FUNC_8("skipping invalid relocation offset 0x%lx in section %s\n"),
      (unsigned long) VAR_19->r_offset,
      FUNC_7 (VAR_13));
       continue;
     }

   if (VAR_9)
     {
       VAR_22 = VAR_21 + FUNC_0 (VAR_19->r_info);

       if (FUNC_0 (VAR_19->r_info) != 0
    && FUNC_1 (VAR_22->st_info) != VAR_7



    && FUNC_1 (VAR_22->st_info) != VAR_5



    && FUNC_1 (VAR_22->st_info) != VAR_6)
  {
    FUNC_14 (FUNC_8("skipping unexpected symbol type %s in relocation in section .rela%s\n"),
   FUNC_12 (FUNC_1 (VAR_22->st_info)),
   FUNC_7 (VAR_13));
    continue;
  }
     }
   else
     {




       if (VAR_8.e_machine == VAR_2
    && VAR_8.e_ident[VAR_0] != VAR_1)
  VAR_19->r_info = (((VAR_19->r_info & 0xffffffff) << 32)
         | ((VAR_19->r_info >> 56) & 0xff)
         | ((VAR_19->r_info >> 40) & 0xff00)
         | ((VAR_19->r_info >> 24) & 0xff0000)
         | ((VAR_19->r_info >> 8) & 0xff000000));

       VAR_22 = VAR_21 + FUNC_2 (VAR_19->r_info);

       if (FUNC_2 (VAR_19->r_info) != 0
    && FUNC_3 (VAR_22->st_info) != VAR_7
    && FUNC_3 (VAR_22->st_info) != VAR_5
    && FUNC_3 (VAR_22->st_info) != VAR_6)
  {
    FUNC_14 (FUNC_8("skipping unexpected symbol type %s in relocation in section .rela.%s\n"),
   FUNC_12 (FUNC_3 (VAR_22->st_info)),
   FUNC_7 (VAR_13));
    continue;
  }
     }

   FUNC_9 (VAR_23, VAR_19->r_addend, VAR_24);
 }

      FUNC_10 (VAR_21);
      FUNC_10 (VAR_18);
      break;
    }
  return 1;
}
