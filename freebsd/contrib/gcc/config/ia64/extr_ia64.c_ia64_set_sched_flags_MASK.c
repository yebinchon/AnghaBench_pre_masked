
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* spec_info_t ;
struct TYPE_5__ {unsigned int flags; } ;
struct TYPE_4__ {int mask; int flags; scalar_t__ dump; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 TYPE_3__* VAR_15 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;

__attribute__((used)) static void
FUNC_1 (spec_info_t VAR_31)
{
  unsigned int *VAR_32 = &(VAR_15->flags);

  if (*VAR_32 & VAR_12
      || *VAR_32 & VAR_11)
    {
      int VAR_33 = 0;

      if ((VAR_18 && !VAR_27 && VAR_26 > 0)
   || (VAR_16 && VAR_27))
 {
   VAR_33 |= VAR_1;

   if ((VAR_19 && !VAR_27)
       || (VAR_17 && VAR_27))
     VAR_33 |= VAR_3;
 }

      if (VAR_20)
 {
   VAR_33 |= VAR_0;

   if (VAR_22)
     VAR_33 |= VAR_2;
 }

      FUNC_0 (*VAR_32 & VAR_14);

      if (VAR_33)
 {
   *VAR_32 |= VAR_13 | VAR_7 | VAR_8;

   VAR_31->mask = VAR_33;
   VAR_31->flags = 0;

   if ((VAR_33 & VAR_6) && VAR_24)
     VAR_31->flags |= VAR_10;

   if ((VAR_33 & VAR_4)
       && VAR_23)
     VAR_31->flags |= VAR_9;

   if (VAR_25)
     {
       if (VAR_29 >= 1)
  VAR_31->dump = VAR_28;
       else
  VAR_31->dump = VAR_30;
     }
   else
     VAR_31->dump = 0;

   if (VAR_21)
     VAR_31->flags |= VAR_5;
 }
    }
}
