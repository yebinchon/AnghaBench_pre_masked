
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_2__ {int e_flags; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int *,void*) ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (char,int *) ;

bfd_boolean
FUNC_8 (bfd *VAR_24, void *VAR_25)
{
  FILE *VAR_26 = VAR_25;

  FUNC_2 (VAR_24 != ((void*)0) && VAR_25 != ((void*)0));


  FUNC_4 (VAR_24, VAR_25);


  FUNC_6 (VAR_26, FUNC_3("private flags = %lx:"), FUNC_5 (VAR_24)->e_flags);

  if ((FUNC_5 (VAR_24)->e_flags & VAR_1) == VAR_12)
    FUNC_6 (VAR_26, FUNC_3(" [abi=O32]"));
  else if ((FUNC_5 (VAR_24)->e_flags & VAR_1) == VAR_13)
    FUNC_6 (VAR_26, FUNC_3(" [abi=O64]"));
  else if ((FUNC_5 (VAR_24)->e_flags & VAR_1) == VAR_10)
    FUNC_6 (VAR_26, FUNC_3(" [abi=EABI32]"));
  else if ((FUNC_5 (VAR_24)->e_flags & VAR_1) == VAR_11)
    FUNC_6 (VAR_26, FUNC_3(" [abi=EABI64]"));
  else if ((FUNC_5 (VAR_24)->e_flags & VAR_1))
    FUNC_6 (VAR_26, FUNC_3(" [abi unknown]"));
  else if (FUNC_1 (VAR_24))
    FUNC_6 (VAR_26, FUNC_3(" [abi=N32]"));
  else if (FUNC_0 (VAR_24))
    FUNC_6 (VAR_26, FUNC_3(" [abi=64]"));
  else
    FUNC_6 (VAR_26, FUNC_3(" [no abi set]"));

  if ((FUNC_5 (VAR_24)->e_flags & VAR_2) == VAR_14)
    FUNC_6 (VAR_26, " [mips1]");
  else if ((FUNC_5 (VAR_24)->e_flags & VAR_2) == VAR_15)
    FUNC_6 (VAR_26, " [mips2]");
  else if ((FUNC_5 (VAR_24)->e_flags & VAR_2) == VAR_16)
    FUNC_6 (VAR_26, " [mips3]");
  else if ((FUNC_5 (VAR_24)->e_flags & VAR_2) == VAR_19)
    FUNC_6 (VAR_26, " [mips4]");
  else if ((FUNC_5 (VAR_24)->e_flags & VAR_2) == VAR_20)
    FUNC_6 (VAR_26, " [mips5]");
  else if ((FUNC_5 (VAR_24)->e_flags & VAR_2) == VAR_17)
    FUNC_6 (VAR_26, " [mips32]");
  else if ((FUNC_5 (VAR_24)->e_flags & VAR_2) == VAR_21)
    FUNC_6 (VAR_26, " [mips64]");
  else if ((FUNC_5 (VAR_24)->e_flags & VAR_2) == VAR_18)
    FUNC_6 (VAR_26, " [mips32r2]");
  else if ((FUNC_5 (VAR_24)->e_flags & VAR_2) == VAR_22)
    FUNC_6 (VAR_26, " [mips64r2]");
  else
    FUNC_6 (VAR_26, FUNC_3(" [unknown ISA]"));

  if (FUNC_5 (VAR_24)->e_flags & VAR_4)
    FUNC_6 (VAR_26, " [mdmx]");

  if (FUNC_5 (VAR_24)->e_flags & VAR_3)
    FUNC_6 (VAR_26, " [mips16]");

  if (FUNC_5 (VAR_24)->e_flags & VAR_0)
    FUNC_6 (VAR_26, " [32bitmode]");
  else
    FUNC_6 (VAR_26, FUNC_3(" [not 32bitmode]"));

  if (FUNC_5 (VAR_24)->e_flags & VAR_6)
    FUNC_6 (VAR_26, " [noreorder]");

  if (FUNC_5 (VAR_24)->e_flags & VAR_7)
    FUNC_6 (VAR_26, " [PIC]");

  if (FUNC_5 (VAR_24)->e_flags & VAR_5)
    FUNC_6 (VAR_26, " [CPIC]");

  if (FUNC_5 (VAR_24)->e_flags & VAR_9)
    FUNC_6 (VAR_26, " [XGOT]");

  if (FUNC_5 (VAR_24)->e_flags & VAR_8)
    FUNC_6 (VAR_26, " [UCODE]");

  FUNC_7 ('\n', VAR_26);

  return VAR_23;
}
