
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct type {int dummy; } ;
struct regcache {int dummy; } ;
struct gdbarch_tdep {scalar_t__ mips_fpu_type; } ;
struct gdbarch {int dummy; } ;
typedef enum return_value_convention { ____Placeholder_return_value_convention } return_value_convention ;
struct TYPE_2__ {int fp0; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int * FUNC_2 (struct type*) ;
 struct type* FUNC_3 (struct type*,int) ;
 int FUNC_4 (struct type*) ;
 int FUNC_5 (struct type*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int ,char*,...) ;
 int VAR_13 ;
 struct gdbarch_tdep* FUNC_7 (int ) ;
 scalar_t__ VAR_14 ;
 TYPE_1__* FUNC_8 (int ) ;
 int FUNC_9 (struct gdbarch_tdep*) ;
 int FUNC_10 (struct regcache*,scalar_t__,int,int ,void*,void const*,int) ;
 int FUNC_11 (int ,int) ;

__attribute__((used)) static enum return_value_convention
FUNC_12 (struct gdbarch *VAR_15,
     struct type *VAR_16, struct regcache *VAR_17,
     void *VAR_18, const void *VAR_19)
{
  struct gdbarch_tdep *VAR_20 = FUNC_7 (VAR_12);
  if (FUNC_1 (VAR_16) == VAR_9
      || FUNC_1 (VAR_16) == VAR_10
      || FUNC_1 (VAR_16) == VAR_7
      || FUNC_4 (VAR_16) > 2 * FUNC_9 (VAR_20))
    return VAR_4;
  else if (FUNC_1 (VAR_16) == VAR_8
    && VAR_20->mips_fpu_type != VAR_1)
    {


      if (VAR_14)
 FUNC_6 (VAR_13, "Return float in $fp0\n");
      FUNC_10 (VAR_17,
     VAR_2 + FUNC_8 (VAR_12)->fp0,
     FUNC_4 (VAR_16),
     VAR_5, VAR_18, VAR_19, 0);
      return VAR_3;
    }
  else if (FUNC_1 (VAR_16) == VAR_9
    && FUNC_5 (VAR_16) <= 2
    && FUNC_5 (VAR_16) >= 1
    && ((FUNC_5 (VAR_16) == 1
  && (FUNC_1 (FUNC_3 (VAR_16, 0))
      == VAR_8))
        || (FUNC_5 (VAR_16) == 2
     && (FUNC_1 (FUNC_3 (VAR_16, 0))
         == VAR_8)
     && (FUNC_1 (FUNC_3 (VAR_16, 1))
         == VAR_8)))
    && VAR_20->mips_fpu_type != VAR_1)
    {



      int VAR_21;
      int VAR_22;
      for (VAR_22 = 0, VAR_21 = FUNC_8 (VAR_12)->fp0;
    VAR_22 < FUNC_5 (VAR_16); VAR_22++, VAR_21 += 2)
 {
   int VAR_23 = (FUNC_0 (FUNC_2 (VAR_16)[VAR_22])
   / VAR_6);
   if (VAR_14)
     FUNC_6 (VAR_13, "Return float struct+%d\n",
    VAR_23);
   FUNC_10 (VAR_17, VAR_2 + VAR_21,
         FUNC_4 (FUNC_3 (VAR_16, VAR_22)),
         VAR_5, VAR_18, VAR_19, VAR_23);
 }
      return VAR_3;
    }
  else if (FUNC_1 (VAR_16) == VAR_9
    || FUNC_1 (VAR_16) == VAR_10)
    {



      int VAR_24;
      int VAR_25;
      for (VAR_24 = 0, VAR_25 = VAR_11;
    VAR_24 < FUNC_4 (VAR_16);
    VAR_24 += FUNC_11 (VAR_12, VAR_25), VAR_25++)
 {
   int VAR_26 = FUNC_11 (VAR_12, VAR_25);
   if (VAR_24 + VAR_26 > FUNC_4 (VAR_16))
     VAR_26 = FUNC_4 (VAR_16) - VAR_24;
   if (VAR_14)
     FUNC_6 (VAR_13, "Return struct+%d:%d in $%d\n",
    VAR_24, VAR_26, VAR_25);
   FUNC_10 (VAR_17, VAR_2 + VAR_25, VAR_26,
         VAR_0, VAR_18, VAR_19, VAR_24);
 }
      return VAR_3;
    }
  else
    {


      int VAR_27;
      int VAR_28;
      for (VAR_27 = 0, VAR_28 = VAR_11;
    VAR_27 < FUNC_4 (VAR_16);
    VAR_27 += FUNC_11 (VAR_12, VAR_28), VAR_28++)
 {
   int VAR_29 = FUNC_11 (VAR_12, VAR_28);
   if (VAR_27 + VAR_29 > FUNC_4 (VAR_16))
     VAR_29 = FUNC_4 (VAR_16) - VAR_27;
   if (VAR_14)
     FUNC_6 (VAR_13, "Return scalar+%d:%d in $%d\n",
    VAR_27, VAR_29, VAR_28);
   FUNC_10 (VAR_17, VAR_2 + VAR_28, VAR_29,
         VAR_5, VAR_18, VAR_19, VAR_27);
 }
      return VAR_3;
    }
}
