
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_4__ {int words; int fp_regs; scalar_t__ prototype; } ;
typedef TYPE_1__ CUMULATIVE_ARGS ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int,int ,...) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_11 (scalar_t__,int) ;
 void* FUNC_12 (scalar_t__) ;

rtx
FUNC_13 (CUMULATIVE_ARGS *VAR_14, enum machine_mode VAR_15, tree VAR_16,
     int VAR_17, int VAR_18)
{
  int VAR_19 = (VAR_18 ? VAR_5 : VAR_0);
  int VAR_20 = FUNC_11 (VAR_16, VAR_15);
  int VAR_21 = FUNC_10 (VAR_14, VAR_16, VAR_20);
  enum machine_mode VAR_22 = VAR_12;


  if (VAR_14->words + VAR_21 >= VAR_6)
    return 0;


  if (VAR_16)
    VAR_22 = FUNC_9 (VAR_16, 0);



  if (VAR_22 != VAR_12 && (! VAR_14->prototype || VAR_17))
    {
      rtx VAR_23[16];
      int VAR_24 = 0;
      int VAR_25 = VAR_14->fp_regs;
      int VAR_26 = VAR_14->words + VAR_21;
      int VAR_27 = FUNC_3 (VAR_22);
      int VAR_28;
      int VAR_29;
      VAR_28 = ((VAR_15 == VAR_1)
     ? FUNC_12 (VAR_16) : FUNC_3 (VAR_15));
      VAR_29 = VAR_26 * VAR_11;
      VAR_21 = 0;
      for (; (VAR_21 < VAR_28 && VAR_25 < VAR_6
       && VAR_29 < (VAR_6 * VAR_11)); VAR_24++)
 {
   VAR_23[VAR_24] = FUNC_6 (VAR_12,
          FUNC_8 (VAR_22, (VAR_4
             + VAR_25)),
          FUNC_2 (VAR_21));
   VAR_21 += VAR_27;
   VAR_29 += VAR_27;
   VAR_25++;
 }


      if (! VAR_14->prototype)
 VAR_21 = 0;


      else if (VAR_28 != VAR_21)
 VAR_26 += VAR_21 / VAR_11;



      for (; VAR_21 < VAR_28 && VAR_26 < VAR_6; VAR_24++)
 {
   enum machine_mode VAR_30 = VAR_3;
   unsigned int VAR_31;






   if (VAR_21 & 0x4)
     VAR_30 = VAR_8;



   else if (VAR_28 - VAR_21 == 4)
     VAR_30 = VAR_8;

   VAR_23[VAR_24] = FUNC_6 (VAR_12,
          FUNC_8 (VAR_30, (VAR_19
            + VAR_26)),
          FUNC_2 (VAR_21));

   VAR_31 = FUNC_3 (VAR_30);
   VAR_21 += VAR_31;
   if (VAR_31 == VAR_11
       || (VAR_31 < VAR_11 && VAR_21 % VAR_11 == 0))
     VAR_26++;
   else if (VAR_31 > VAR_11)
     VAR_26 += VAR_31 / VAR_11;
 }
      return FUNC_7 (VAR_15, FUNC_5 (VAR_24, VAR_23));
    }




  else if (VAR_15 == VAR_10 || VAR_15 == VAR_9
    || (! FUNC_1 (VAR_15) || VAR_14->fp_regs == VAR_6))
    {
      int VAR_32 = ((VAR_15 == VAR_1)
                       ? FUNC_12 (VAR_16) : FUNC_3 (VAR_15));
      if (VAR_2
 && (VAR_15 == VAR_1 || (VAR_16 && FUNC_0 (VAR_16)))
 && VAR_32 < VAR_11
 && VAR_32 > 0)
 {
   rtx VAR_33 = FUNC_6 (VAR_12,
       FUNC_8 (VAR_3,
             (VAR_19 + VAR_14->words
       + VAR_21)),
       VAR_13);
   return FUNC_7 (VAR_15, FUNC_4 (1, VAR_33));
 }
      else
 return FUNC_8 (VAR_15, VAR_19 + VAR_14->words + VAR_21);

    }



  else if (VAR_14->prototype)
    {
      if (VAR_17)
 return FUNC_8 (VAR_15, VAR_4 + VAR_14->fp_regs);



      else if (VAR_2 && VAR_15 == VAR_7)
 return FUNC_7 (VAR_15,
   FUNC_4 (1,
                   FUNC_6 (VAR_12,
       FUNC_8 (VAR_3, VAR_19 + VAR_14->words + VAR_21),
          VAR_13)));
      else
 return FUNC_8 (VAR_15, VAR_19 + VAR_14->words + VAR_21);
    }


  else
    {

      enum machine_mode VAR_34 =
 (VAR_2 && VAR_15 == VAR_7) ? VAR_3 : VAR_15;

      rtx VAR_35 = FUNC_6 (VAR_12,
          FUNC_8 (VAR_15, (VAR_4
         + VAR_14->fp_regs)),
          VAR_13);
      rtx VAR_36 = FUNC_6 (VAR_12,
          FUNC_8 (VAR_34,
         (VAR_19 + VAR_14->words
          + VAR_21)),
          VAR_13);

      return FUNC_7 (VAR_15, FUNC_4 (2, VAR_35, VAR_36));
    }
}
