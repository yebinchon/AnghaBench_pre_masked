
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* operand_types; } ;
struct TYPE_4__ {unsigned int* types; scalar_t__ suffix; scalar_t__* prefix; TYPE_1__ tm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,...) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_12 ;
 TYPE_2__ VAR_13 ;

__attribute__((used)) static int
FUNC_3 (void)
{
  unsigned int VAR_14, VAR_15, VAR_16;

  VAR_14 = VAR_13.types[0] & VAR_13.tm.operand_types[0];
  if ((VAR_14 & (VAR_8 | VAR_9 | VAR_4 | VAR_5 | VAR_6 | VAR_7))
      && VAR_14 != VAR_8 && VAR_14 != VAR_9
      && VAR_14 != VAR_4 && VAR_14 != VAR_6
      && VAR_14 != VAR_5 && VAR_14 != VAR_7)
    {
      if (VAR_13.suffix)
 {
   VAR_14 &= (VAR_13.suffix == VAR_0
         ? VAR_8 | VAR_9
         : (VAR_13.suffix == VAR_11
     ? VAR_4
     : (VAR_13.suffix == VAR_10
        ? VAR_7 | VAR_6
        : VAR_5)));
 }
      else if (VAR_14 == (VAR_4 | VAR_6 | VAR_5)
        || VAR_14 == (VAR_4 | VAR_5)
        || VAR_14 == (VAR_4 | VAR_6))
 {
   VAR_14 = ((VAR_12 == VAR_1) ^ (VAR_13.prefix[VAR_2] != 0)
        ? VAR_4 : VAR_6);
 }
      if (VAR_14 != VAR_8 && VAR_14 != VAR_9
   && VAR_14 != VAR_4 && VAR_14 != VAR_6
   && VAR_14 != VAR_5 && VAR_14 != VAR_7)
 {
   FUNC_1 (FUNC_0("no instruction mnemonic suffix given; "
      "can't determine immediate size"));
   return 0;
 }
    }
  VAR_13.types[0] = VAR_14;

  VAR_15 = VAR_13.types[1] & VAR_13.tm.operand_types[1];
  if ((VAR_15 & (VAR_8 | VAR_9 | VAR_4 | VAR_6 | VAR_5 | VAR_7))
      && VAR_15 != VAR_8 && VAR_15 != VAR_9
      && VAR_15 != VAR_4 && VAR_15 != VAR_6
      && VAR_15 != VAR_5 && VAR_15 != VAR_7)
    {
      if (VAR_13.suffix)
 {
   VAR_15 &= (VAR_13.suffix == VAR_0
         ? VAR_8 | VAR_9
         : (VAR_13.suffix == VAR_11
     ? VAR_4
     : (VAR_13.suffix == VAR_10
        ? VAR_7 | VAR_6
        : VAR_5)));
 }
      else if (VAR_15 == (VAR_4 | VAR_5 | VAR_6)
        || VAR_15 == (VAR_4 | VAR_5)
        || VAR_15 == (VAR_4 | VAR_6))
 {
   VAR_15 = ((VAR_12 == VAR_1) ^ (VAR_13.prefix[VAR_2] != 0)
        ? VAR_4 : VAR_6);
 }
      if (VAR_15 != VAR_8 && VAR_15 != VAR_9
   && VAR_15 != VAR_4 && VAR_15 != VAR_6
   && VAR_15 != VAR_5 && VAR_15 != VAR_7)
 {
   FUNC_1 (FUNC_0("no instruction mnemonic suffix given; "
      "can't determine immediate size %x %c"),
    VAR_15, VAR_13.suffix);
   return 0;
 }
    }
  VAR_13.types[1] = VAR_15;

  VAR_16 = VAR_13.types[2] & VAR_13.tm.operand_types[2];
  FUNC_2 ((VAR_16 & VAR_3) == 0);
  VAR_13.types[2] = VAR_16;

  return 1;
}
