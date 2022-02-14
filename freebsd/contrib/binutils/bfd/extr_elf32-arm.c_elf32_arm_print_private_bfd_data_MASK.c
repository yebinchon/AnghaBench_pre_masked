
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_2__ {unsigned long e_flags; } ;
typedef int FILE ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;






 int FUNC_1 (unsigned long) ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 int VAR_17 ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int *,void*) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (char,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (bfd *VAR_18, void * VAR_19)
{
  FILE * VAR_20 = (FILE *) VAR_19;
  unsigned long VAR_21;

  FUNC_0 (VAR_18 != ((void*)0) && VAR_19 != ((void*)0));


  FUNC_3 (VAR_18, VAR_19);

  VAR_21 = FUNC_4 (VAR_18)->e_flags;




  FUNC_5 (VAR_20, FUNC_2("private flags = %lx:"), FUNC_4 (VAR_18)->e_flags);

  switch (FUNC_1 (VAR_21))
    {
    case 133:



      if (VAR_21 & VAR_6)
 FUNC_5 (VAR_20, FUNC_2(" [interworking enabled]"));

      if (VAR_21 & VAR_0)
 FUNC_5 (VAR_20, " [APCS-26]");
      else
 FUNC_5 (VAR_20, " [APCS-32]");

      if (VAR_21 & VAR_16)
 FUNC_5 (VAR_20, FUNC_2(" [VFP float format]"));
      else if (VAR_21 & VAR_9)
 FUNC_5 (VAR_20, FUNC_2(" [Maverick float format]"));
      else
 FUNC_5 (VAR_20, FUNC_2(" [FPA float format]"));

      if (VAR_21 & VAR_1)
 FUNC_5 (VAR_20, FUNC_2(" [floats passed in float registers]"));

      if (VAR_21 & VAR_12)
 FUNC_5 (VAR_20, FUNC_2(" [position independent]"));

      if (VAR_21 & VAR_10)
 FUNC_5 (VAR_20, FUNC_2(" [new ABI]"));

      if (VAR_21 & VAR_11)
 FUNC_5 (VAR_20, FUNC_2(" [old ABI]"));

      if (VAR_21 & VAR_14)
 FUNC_5 (VAR_20, FUNC_2(" [software FP]"));

      VAR_21 &= ~(VAR_6 | VAR_0 | VAR_1
   | VAR_12 | VAR_10 | VAR_11
   | VAR_14 | VAR_16
   | VAR_9);
      break;

    case 132:
      FUNC_5 (VAR_20, FUNC_2(" [Version1 EABI]"));

      if (VAR_21 & VAR_15)
 FUNC_5 (VAR_20, FUNC_2(" [sorted symbol table]"));
      else
 FUNC_5 (VAR_20, FUNC_2(" [unsorted symbol table]"));

      VAR_21 &= ~ VAR_15;
      break;

    case 131:
      FUNC_5 (VAR_20, FUNC_2(" [Version2 EABI]"));

      if (VAR_21 & VAR_15)
 FUNC_5 (VAR_20, FUNC_2(" [sorted symbol table]"));
      else
 FUNC_5 (VAR_20, FUNC_2(" [unsorted symbol table]"));

      if (VAR_21 & VAR_3)
 FUNC_5 (VAR_20, FUNC_2(" [dynamic symbols use segment index]"));

      if (VAR_21 & VAR_8)
 FUNC_5 (VAR_20, FUNC_2(" [mapping symbols precede others]"));

      VAR_21 &= ~(VAR_15 | VAR_3
   | VAR_8);
      break;

    case 130:
      FUNC_5 (VAR_20, FUNC_2(" [Version3 EABI]"));
      break;

    case 129:
      FUNC_5 (VAR_20, FUNC_2(" [Version4 EABI]"));
      goto eabi;

    case 128:
      FUNC_5 (VAR_20, FUNC_2(" [Version5 EABI]"));
    eabi:
      if (VAR_21 & VAR_2)
 FUNC_5 (VAR_20, FUNC_2(" [BE8]"));

      if (VAR_21 & VAR_7)
 FUNC_5 (VAR_20, FUNC_2(" [LE8]"));

      VAR_21 &= ~(VAR_7 | VAR_2);
      break;

    default:
      FUNC_5 (VAR_20, FUNC_2(" <EABI version unrecognised>"));
      break;
    }

  VAR_21 &= ~ VAR_4;

  if (VAR_21 & VAR_13)
    FUNC_5 (VAR_20, FUNC_2(" [relocatable executable]"));

  if (VAR_21 & VAR_5)
    FUNC_5 (VAR_20, FUNC_2(" [has entry point]"));

  VAR_21 &= ~ (VAR_13 | VAR_5);

  if (VAR_21)
    FUNC_5 (VAR_20, FUNC_2("<Unrecognised flag bits set>"));

  FUNC_6 ('\n', VAR_20);

  return VAR_17;
}
