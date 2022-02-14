
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int rela; char* name; size_t size; size_t reloc; } ;
struct TYPE_10__ {unsigned long e_shnum; } ;
struct TYPE_9__ {scalar_t__ sh_type; unsigned long sh_offset; unsigned long sh_size; int sh_name; unsigned long sh_entsize; scalar_t__ sh_link; } ;
typedef int FILE ;
typedef char Elf_Internal_Sym ;
typedef TYPE_1__ Elf_Internal_Shdr ;


 unsigned int FUNC_0 (TYPE_4__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;


 int VAR_2 ;
 char* FUNC_1 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 unsigned long FUNC_3 (scalar_t__) ;
 char* FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_5 (char*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (int *,unsigned long,unsigned long,char*,unsigned long,char*,unsigned long,int) ;
 long* VAR_11 ;
 TYPE_4__* VAR_12 ;
 char* VAR_13 ;
 unsigned long VAR_14 ;
 char* VAR_15 ;
 TYPE_3__ VAR_16 ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (int *,int *,unsigned long,int,unsigned long,char*) ;
 unsigned long VAR_17 ;
 unsigned long FUNC_9 (int *,unsigned long,unsigned long) ;
 int FUNC_10 (char*,...) ;
 TYPE_1__* VAR_18 ;
 int * VAR_19 ;

__attribute__((used)) static int
FUNC_11 (FILE *VAR_20)
{
  unsigned long VAR_21;
  unsigned long VAR_22;


  if (!VAR_9)
    return 1;

  if (VAR_10)
    {
      int VAR_23;
      const char *VAR_24;
      int VAR_25;
      unsigned int VAR_26;

      VAR_25 = 0;

      for (VAR_26 = 0; VAR_26 < FUNC_0 (VAR_12); VAR_26++)
 {
   VAR_23 = VAR_12 [VAR_26].rela;
   VAR_24 = VAR_12 [VAR_26].name;
   VAR_21 = VAR_11 [VAR_12 [VAR_26].size];
   VAR_22 = VAR_11 [VAR_12 [VAR_26].reloc];

   VAR_25 |= VAR_21;

   if (VAR_23 == VAR_8)
     {
       if (VAR_12 [VAR_26].reloc == VAR_0)
  switch (VAR_11[VAR_1])
    {
    case 129:
      VAR_23 = VAR_2;
      break;
    case 128:
      VAR_23 = VAR_7;
      break;
    }
     }

   if (VAR_21)
     {
       FUNC_10
  (FUNC_5("\n'%s' relocation section at offset 0x%lx contains %ld bytes:\n"),
   VAR_24, VAR_22, VAR_21);

       FUNC_6 (VAR_20,
    FUNC_9 (VAR_20, VAR_22, VAR_21),
    VAR_21,
    VAR_15, VAR_17,
    VAR_13, VAR_14, VAR_23);
     }
 }

      if (! VAR_25)
 FUNC_10 (FUNC_5("\nThere are no dynamic relocations in this file.\n"));
    }
  else
    {
      Elf_Internal_Shdr *VAR_27;
      unsigned long VAR_28;
      int VAR_29 = 0;

      for (VAR_28 = 0, VAR_27 = VAR_18;
    VAR_28 < VAR_16.e_shnum;
    VAR_28++, VAR_27++)
 {
   if ( VAR_27->sh_type != VAR_5
       && VAR_27->sh_type != VAR_4)
     continue;

   VAR_22 = VAR_27->sh_offset;
   VAR_21 = VAR_27->sh_size;

   if (VAR_21)
     {
       Elf_Internal_Shdr *VAR_30;
       int VAR_31;

       FUNC_10 (FUNC_5("\nRelocation section "));

       if (VAR_19 == ((void*)0))
  FUNC_10 ("%d", VAR_27->sh_name);
       else
  FUNC_10 (FUNC_5("'%s'"), FUNC_4 (VAR_27));

       FUNC_10 (FUNC_5(" at offset 0x%lx contains %lu entries:\n"),
   VAR_22, (unsigned long) (VAR_21 / VAR_27->sh_entsize));

       VAR_31 = VAR_27->sh_type == VAR_5;

       if (VAR_27->sh_link
    && FUNC_3 (VAR_27->sh_link)
       < VAR_16.e_shnum)
  {
    Elf_Internal_Shdr *VAR_32;
    Elf_Internal_Sym *VAR_33;
    unsigned long VAR_34;
    unsigned long VAR_35 = 0;
    char *VAR_36 = ((void*)0);

    VAR_32 = FUNC_2 (VAR_27->sh_link);
    if (VAR_32->sh_type != VAR_6
        && VAR_32->sh_type != VAR_3)
                    continue;

    VAR_34 = VAR_32->sh_size / VAR_32->sh_entsize;
    VAR_33 = FUNC_1 (VAR_20, VAR_32);

    if (VAR_33 == ((void*)0))
      continue;

    if (FUNC_3 (VAR_32->sh_link)
        < VAR_16.e_shnum)
      {
        VAR_30 = FUNC_2 (VAR_32->sh_link);

        VAR_36 = FUNC_8 (((void*)0), VAR_20, VAR_30->sh_offset,
      1, VAR_30->sh_size,
      FUNC_5("string table"));
        VAR_35 = VAR_36 == ((void*)0) ? 0 : VAR_30->sh_size;
      }

    FUNC_6 (VAR_20, VAR_22, VAR_21,
        VAR_33, VAR_34, VAR_36, VAR_35, VAR_31);
    if (VAR_36)
      FUNC_7 (VAR_36);
    FUNC_7 (VAR_33);
  }
       else
  FUNC_6 (VAR_20, VAR_22, VAR_21,
      ((void*)0), 0, ((void*)0), 0, VAR_31);

       VAR_29 = 1;
     }
 }

      if (! VAR_29)
 FUNC_10 (FUNC_5("\nThere are no relocations in this file.\n"));
    }

  return 1;
}
