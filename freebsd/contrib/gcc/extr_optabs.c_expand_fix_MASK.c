
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum insn_code { ____Placeholder_insn_code } insn_code ;
typedef TYPE_3__* convert_optab ;
struct TYPE_10__ {TYPE_1__* handlers; } ;
struct TYPE_9__ {TYPE_2__** handlers; } ;
struct TYPE_8__ {scalar_t__ libfunc; } ;
struct TYPE_7__ {int insn_code; } ;
typedef int REAL_VALUE_TYPE ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (scalar_t__) ;
 int FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (size_t,int,int,int*) ;
 int FUNC_6 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_7 (int,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (scalar_t__,scalar_t__,int ,scalar_t__,size_t,int ,scalar_t__) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__,int ,size_t,int,scalar_t__,size_t) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;
 int FUNC_17 (int,scalar_t__,scalar_t__,int ) ;
 int FUNC_18 () ;
 scalar_t__ FUNC_19 (size_t,int ,scalar_t__,scalar_t__,scalar_t__,int,int ) ;
 scalar_t__ FUNC_20 (size_t,int ,scalar_t__,scalar_t__,int ) ;
 int VAR_11 ;
 int FUNC_21 (scalar_t__) ;
 scalar_t__ FUNC_22 (int,size_t) ;
 int FUNC_23 (scalar_t__) ;
 scalar_t__ FUNC_24 () ;
 scalar_t__ FUNC_25 (size_t) ;
 int FUNC_26 (int ,size_t,scalar_t__) ;
 scalar_t__ FUNC_27 () ;
 TYPE_6__* VAR_12 ;
 int FUNC_28 (int *,int) ;
 int FUNC_29 (scalar_t__,int ,int ) ;
 TYPE_3__* VAR_13 ;
 int FUNC_30 () ;
 int VAR_14 ;
 TYPE_3__* VAR_15 ;
 int VAR_16 ;

void
FUNC_31 (rtx VAR_17, rtx VAR_18, int VAR_19)
{
  enum insn_code VAR_20;
  rtx VAR_21 = VAR_17;
  enum machine_mode VAR_22, VAR_23;
  int VAR_24 = 0;






  for (VAR_22 = FUNC_1 (VAR_18); VAR_22 != VAR_10;
       VAR_22 = FUNC_4 (VAR_22))
    for (VAR_23 = FUNC_1 (VAR_17); VAR_23 != VAR_10;
  VAR_23 = FUNC_4 (VAR_23))
      {
 int VAR_25 = VAR_19;

 VAR_20 = FUNC_5 (VAR_23, VAR_22, VAR_19, &VAR_24);
 if (VAR_20 == VAR_0 && VAR_23 != FUNC_1 (VAR_17) && VAR_19)
   VAR_20 = FUNC_5 (VAR_23, VAR_22, 0, &VAR_24), VAR_25 = 0;

 if (VAR_20 != VAR_0)
   {
     if (VAR_22 != FUNC_1 (VAR_18))
       VAR_18 = FUNC_7 (VAR_22, VAR_18, 0);

     if (VAR_24)
       {
  rtx VAR_26 = FUNC_25 (FUNC_1 (VAR_18));
  VAR_18 = FUNC_20 (FUNC_1 (VAR_18), VAR_11, VAR_18,
        VAR_26, 0);
       }

     if (VAR_23 != FUNC_1 (VAR_17))
       VAR_21 = FUNC_25 (VAR_23);

     FUNC_17 (VAR_20, VAR_21, VAR_18,
       VAR_25 ? VAR_9 : VAR_1);
     if (VAR_21 != VAR_17)
       FUNC_6 (VAR_17, VAR_21, VAR_19);
     return;
   }
      }
  if (VAR_19 && FUNC_2 (FUNC_1 (VAR_17)) <= VAR_3)
    for (VAR_22 = FUNC_1 (VAR_18); VAR_22 != VAR_10;
  VAR_22 = FUNC_4 (VAR_22))
      if (VAR_0 != FUNC_5 (FUNC_1 (VAR_17), VAR_22, 0,
      &VAR_24))
 {
   int VAR_27;
   REAL_VALUE_TYPE VAR_28;
   rtx VAR_29, VAR_30, VAR_31, VAR_32;

   VAR_27 = FUNC_2 (FUNC_1 (VAR_17));
   FUNC_28 (&VAR_28, VAR_27 - 1);
   VAR_29 = FUNC_0 (VAR_28, VAR_22);
   VAR_30 = FUNC_24 ();
   VAR_31 = FUNC_24 ();

   if (VAR_22 != FUNC_1 (VAR_18))
     VAR_18 = FUNC_7 (VAR_22, VAR_18, 0);


   FUNC_9 ();
   FUNC_11 (VAR_18, VAR_29, VAR_2, VAR_5, FUNC_1 (VAR_18),
       0, VAR_30);


   FUNC_31 (VAR_17, VAR_18, 0);
   FUNC_12 (FUNC_23 (VAR_31));
   FUNC_10 ();




   FUNC_13 (VAR_30);
   VAR_21 = FUNC_19 (FUNC_1 (VAR_18), VAR_14, VAR_18, VAR_29,
     VAR_5, 0, VAR_6);
   FUNC_31 (VAR_17, VAR_21, 0);
   VAR_21 = FUNC_19 (FUNC_1 (VAR_17), VAR_16, VAR_17,
     FUNC_22
     ((HOST_WIDE_INT) 1 << (VAR_27 - 1),
      FUNC_1 (VAR_17)),
     VAR_17, 1, VAR_6);

   if (VAR_21 != VAR_17)
     FUNC_16 (VAR_17, VAR_21);

   FUNC_13 (VAR_31);

   if (VAR_12->handlers[(int) FUNC_1 (VAR_17)].insn_code
       != VAR_0)
     {

       VAR_32 = FUNC_16 (VAR_17, VAR_17);
       FUNC_29 (VAR_32,
                            VAR_7,
       FUNC_26 (VAR_9,
        FUNC_1 (VAR_17),
        FUNC_8 (VAR_18)));
     }

   return;
 }





  if (FUNC_3 (FUNC_1 (VAR_17)) < FUNC_3 (VAR_8))
    {
      VAR_21 = FUNC_25 (VAR_8);

      FUNC_31 (VAR_21, VAR_18, VAR_19);
    }
  else
    {
      rtx VAR_33;
      rtx VAR_34;
      rtx VAR_35;

      convert_optab VAR_36 = VAR_19 ? VAR_15 : VAR_13;
      VAR_35 = VAR_36->handlers[FUNC_1 (VAR_17)][FUNC_1 (VAR_18)].libfunc;
      FUNC_21 (VAR_35);

      FUNC_30 ();

      VAR_34 = FUNC_15 (VAR_35, VAR_5, VAR_4,
           FUNC_1 (VAR_17), 1, VAR_18,
           FUNC_1 (VAR_18));
      VAR_33 = FUNC_27 ();
      FUNC_18 ();

      FUNC_14 (VAR_33, VAR_21, VAR_34,
     FUNC_26 (VAR_19 ? VAR_9 : VAR_1,
      FUNC_1 (VAR_17), VAR_18));
    }

  if (VAR_21 != VAR_17)
    {
      if (FUNC_1 (VAR_17) == FUNC_1 (VAR_21))
        FUNC_16 (VAR_17, VAR_21);
      else
        FUNC_6 (VAR_17, VAR_21, 0);
    }
}
