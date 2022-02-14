
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int subsegT ;
typedef int segT ;
typedef int flagword ;
struct TYPE_18__ {int fixed_p; int * insn_mo; } ;
struct TYPE_17__ {int num; scalar_t__ name; } ;
struct TYPE_16__ {int num; scalar_t__ name; } ;
struct TYPE_15__ {int num; scalar_t__ name; } ;
struct TYPE_14__ {char* name; scalar_t__ pinfo; int match; int mask; char const* args; } ;
struct TYPE_13__ {int size; scalar_t__ info; scalar_t__ section; int kind; } ;
typedef TYPE_1__ Elf_Internal_Options ;
typedef int Elf_External_Options ;
typedef int Elf64_External_RegInfo ;
typedef int Elf32_External_RegInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char const* VAR_15 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (int ,TYPE_1__*,int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int) ;
 int VAR_18 ;
 int FUNC_9 (TYPE_6__*,TYPE_2__*) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_10 (int ,char*,char*,char const*) ;
 void* FUNC_11 (int) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 char* FUNC_12 (int ,char const*,void*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 TYPE_6__ VAR_23 ;
 int VAR_24 ;
 TYPE_2__* VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__* VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_16 () ;
 TYPE_2__* VAR_31 ;
 scalar_t__ VAR_32 ;
 void* VAR_33 ;
 TYPE_6__ VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_17 (int ,int) ;
 TYPE_5__* VAR_39 ;
 TYPE_4__* VAR_40 ;
 TYPE_3__* VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 scalar_t__ FUNC_18 (char const*,char const*) ;
 int FUNC_19 (char*,int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (scalar_t__,int ,int ,int *) ;
 int FUNC_22 (int ) ;
 int VAR_45 ;
 int FUNC_23 (TYPE_2__*) ;
 int VAR_46 ;

void
FUNC_24 (void)
{
  const char *VAR_47 = ((void*)0);
  int VAR_48 = 0;
  int VAR_49 = 0;

  if (VAR_32 != VAR_5)
    {
      if (VAR_21 && VAR_22 != 0)
 FUNC_1 (FUNC_0("-G may not be used in position-independent code"));
      VAR_22 = 0;
    }

  if (! FUNC_5 (VAR_44, VAR_16, VAR_20))
    FUNC_3 (FUNC_0("Could not set architecture and machine"));

  VAR_37 = FUNC_13 ();

  for (VAR_48 = 0; VAR_48 < VAR_6;)
    {
      const char *VAR_50 = VAR_31[VAR_48].name;

      VAR_47 = FUNC_12 (VAR_37, VAR_50, (void *) &VAR_31[VAR_48]);
      if (VAR_47 != ((void*)0))
 {
   FUNC_10 (VAR_43, FUNC_0("internal error: can't hash `%s': %s\n"),
     VAR_31[VAR_48].name, VAR_47);

   FUNC_2 (FUNC_0("Broken assembler.  No assembly attempted."));
 }
      do
 {
   if (VAR_31[VAR_48].pinfo != VAR_2)
     {
       if (!FUNC_23 (&VAR_31[VAR_48]))
  VAR_49 = 1;
       if (VAR_34.insn_mo == ((void*)0) && FUNC_18 (VAR_50, "nop") == 0)
  {
    FUNC_9 (&VAR_34, VAR_31 + VAR_48);
    VAR_34.fixed_p = 1;
  }
     }
   ++VAR_48;
 }
      while ((VAR_48 < VAR_6) && !FUNC_18 (VAR_31[VAR_48].name, VAR_50));
    }

  VAR_24 = FUNC_13 ();

  VAR_48 = 0;
  while (VAR_48 < VAR_17)
    {
      const char *VAR_51 = VAR_25[VAR_48].name;

      VAR_47 = FUNC_12 (VAR_24, VAR_51, (void *) &VAR_25[VAR_48]);
      if (VAR_47 != ((void*)0))
 FUNC_2 (FUNC_0("internal: can't hash `%s': %s"),
    VAR_25[VAR_48].name, VAR_47);
      do
 {
   if (VAR_25[VAR_48].pinfo != VAR_2
       && ((VAR_25[VAR_48].match & VAR_25[VAR_48].mask)
    != VAR_25[VAR_48].match))
     {
       FUNC_10 (VAR_43, FUNC_0("internal error: bad mips16 opcode: %s %s\n"),
         VAR_25[VAR_48].name, VAR_25[VAR_48].args);
       VAR_49 = 1;
     }
   if (VAR_23.insn_mo == ((void*)0) && FUNC_18 (VAR_51, "nop") == 0)
     {
       FUNC_9 (&VAR_23, VAR_25 + VAR_48);
       VAR_23.fixed_p = 1;
     }
   ++VAR_48;
 }
      while (VAR_48 < VAR_17
      && FUNC_18 (VAR_25[VAR_48].name, VAR_51) == 0);
    }

  if (VAR_49)
    FUNC_2 (FUNC_0("Broken assembler.  No assembly attempted."));



  for (VAR_48 = 0; VAR_39[VAR_48].name; VAR_48++)
    FUNC_22 (FUNC_21 (VAR_39[VAR_48].name, VAR_42,
         VAR_39[VAR_48].num,
         &VAR_46));
  if (VAR_1)
    for (VAR_48 = 0; VAR_40[VAR_48].name; VAR_48++)
      FUNC_22 (FUNC_21 (VAR_40[VAR_48].name, VAR_42,
           VAR_40[VAR_48].num,
           &VAR_46));
  else
    for (VAR_48 = 0; VAR_41[VAR_48].name; VAR_48++)
      FUNC_22 (FUNC_21 (VAR_41[VAR_48].name, VAR_42,
           VAR_41[VAR_48].num,
           &VAR_46));

  FUNC_16 ();

  VAR_30 = 0;
  VAR_27[0] = 0;
  VAR_27[1] = 0;
  VAR_27[2] = 0;
  VAR_27[3] = 0;


  FUNC_17 (VAR_45, 2);

  FUNC_6 (VAR_44, VAR_22);
  if (! VAR_0)
    FUNC_15 ();

  if (VAR_28)
    FUNC_14 ();
}
