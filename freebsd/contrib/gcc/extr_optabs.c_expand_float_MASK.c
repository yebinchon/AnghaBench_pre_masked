
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum insn_code { ____Placeholder_insn_code } insn_code ;
typedef TYPE_2__* convert_optab ;
struct TYPE_6__ {TYPE_1__** handlers; } ;
struct TYPE_5__ {scalar_t__ libfunc; } ;
typedef int REAL_VALUE_TYPE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (size_t) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (size_t) ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (int,size_t,int) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_9 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (size_t,scalar_t__,int) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (scalar_t__,int ,int ,scalar_t__,size_t,int ,scalar_t__) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__,int ,size_t,int,scalar_t__,size_t) ;
 int FUNC_18 (scalar_t__,scalar_t__) ;
 int FUNC_19 (int,scalar_t__,scalar_t__,int ) ;
 int FUNC_20 () ;
 scalar_t__ FUNC_21 (int,int ,scalar_t__,scalar_t__,scalar_t__,int,int ) ;
 scalar_t__ FUNC_22 (int ,int,scalar_t__,int ,scalar_t__,int) ;
 int FUNC_23 (scalar_t__) ;
 int FUNC_24 (scalar_t__) ;
 scalar_t__ FUNC_25 () ;
 scalar_t__ FUNC_26 (int) ;
 int FUNC_27 (size_t,scalar_t__) ;
 scalar_t__ FUNC_28 () ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_29 (int *,scalar_t__) ;
 TYPE_2__* VAR_18 ;
 scalar_t__ FUNC_30 (int) ;
 int FUNC_31 () ;
 TYPE_2__* VAR_19 ;

void
FUNC_32 (rtx VAR_20, rtx VAR_21, int VAR_22)
{
  enum insn_code VAR_23;
  rtx VAR_24 = VAR_20;
  enum machine_mode VAR_25, VAR_26;
  bool VAR_27 = 0;


  FUNC_23 (FUNC_2 (VAR_21) != VAR_11);






  for (VAR_25 = FUNC_2 (VAR_20); VAR_25 != VAR_11;
       VAR_25 = FUNC_5 (VAR_25))
    for (VAR_26 = FUNC_2 (VAR_21); VAR_26 != VAR_11;
  VAR_26 = FUNC_5 (VAR_26))
      {
 int VAR_28 = VAR_22;

 if (VAR_25 != FUNC_2 (VAR_20)
     && FUNC_30 (VAR_25) < FUNC_3 (FUNC_2 (VAR_21)))
   continue;

 VAR_23 = FUNC_8 (VAR_25, VAR_26, VAR_22);
 if (VAR_23 == VAR_0 && VAR_22)
   {
     enum insn_code VAR_29 = FUNC_8 (VAR_25, VAR_26, 0);
     if (VAR_29 != VAR_0)
       VAR_27 = 1;
     if (VAR_26 != FUNC_2 (VAR_21))
       VAR_23 = VAR_29, VAR_28 = 0;
   }

 if (VAR_23 != VAR_0)
   {
     if (VAR_26 != FUNC_2 (VAR_21))
       VAR_21 = FUNC_10 (VAR_26, VAR_21, VAR_22);

     if (VAR_25 != FUNC_2 (VAR_20))
       VAR_24 = FUNC_26 (VAR_25);

     FUNC_19 (VAR_23, VAR_24, VAR_21,
       VAR_28 ? VAR_10 : VAR_2);

     if (VAR_24 != VAR_20)
       FUNC_9 (VAR_20, VAR_24, 0);
     return;
   }
      }




  if (VAR_22 && VAR_27 && !FUNC_1 (FUNC_2 (VAR_20)))
    {
      rtx VAR_30 = FUNC_25 ();
      rtx VAR_31;
      REAL_VALUE_TYPE VAR_32;





      for (VAR_25 = FUNC_2 (VAR_20); VAR_25 != VAR_11;
    VAR_25 = FUNC_5 (VAR_25))
 if (FUNC_3 (FUNC_2 (VAR_21)) < FUNC_3 (VAR_25)
     && FUNC_8 (VAR_25, FUNC_2 (VAR_21), 0) != VAR_0)
   break;

      if (VAR_25 == VAR_11)
 {

   VAR_25 = FUNC_2 (VAR_20);


   if ((FUNC_30 (VAR_25) + 1)
       < FUNC_3 (FUNC_2 (VAR_21)))
     {
       rtx VAR_33;
       rtx VAR_34 = FUNC_25 ();



       if (!FUNC_7 (VAR_24)
    || FUNC_6 (VAR_24) < VAR_1
    || FUNC_2 (VAR_24) != VAR_25)
  VAR_24 = FUNC_26 (VAR_25);

       VAR_26 = FUNC_2 (VAR_21);
       FUNC_11 ();


       FUNC_13 (VAR_21, VAR_14, VAR_5, VAR_6, VAR_26,
           0, VAR_34);


       FUNC_32 (VAR_24, VAR_21, 0);
       FUNC_14 (FUNC_24 (VAR_30));
       FUNC_12 ();






       FUNC_15 (VAR_34);
       VAR_31 = FUNC_21 (VAR_26, VAR_13, VAR_21, VAR_15,
       VAR_6, 1, VAR_7);
       VAR_33 = FUNC_22 (VAR_8, VAR_26, VAR_21, VAR_16,
        VAR_6, 1);
       VAR_31 = FUNC_21 (VAR_26, VAR_17, VAR_31, VAR_33, VAR_31, 1,
       VAR_7);
       FUNC_32 (VAR_24, VAR_31, 0);


       VAR_31 = FUNC_21 (VAR_25, VAR_12, VAR_24, VAR_24,
       VAR_24, 0, VAR_7);
       if (VAR_31 != VAR_24)
  FUNC_18 (VAR_24, VAR_31);

       FUNC_11 ();
       FUNC_15 (VAR_30);
       goto done;
     }
 }




      if (FUNC_2 (VAR_20) != VAR_25
   || !FUNC_7 (VAR_20) || FUNC_6 (VAR_20) < VAR_1)
 VAR_24 = FUNC_26 (VAR_25);


      FUNC_32 (VAR_24, VAR_21, 0);




      FUNC_11 ();
      FUNC_13 (VAR_21, VAR_14, VAR_3, VAR_6, FUNC_2 (VAR_21),
          0, VAR_30);


      FUNC_29 (&VAR_32, FUNC_3 (FUNC_2 (VAR_21)));
      VAR_31 = FUNC_21 (VAR_25, VAR_12, VAR_24,
      FUNC_0 (VAR_32, VAR_25),
      VAR_24, 0, VAR_7);
      if (VAR_31 != VAR_24)
 FUNC_18 (VAR_24, VAR_31);

      FUNC_11 ();
      FUNC_15 (VAR_30);
      goto done;
    }


    {
      rtx VAR_35;
      rtx VAR_36;
      rtx VAR_37;
      convert_optab VAR_38 = VAR_22 ? VAR_19 : VAR_18;

      if (FUNC_4 (FUNC_2 (VAR_21)) < FUNC_4 (VAR_9))
 VAR_21 = FUNC_10 (VAR_9, VAR_21, VAR_22);

      VAR_35 = VAR_38->handlers[FUNC_2 (VAR_20)][FUNC_2 (VAR_21)].libfunc;
      FUNC_23 (VAR_35);

      FUNC_31 ();

      VAR_37 = FUNC_17 (VAR_35, VAR_6, VAR_4,
           FUNC_2 (VAR_20), 1, VAR_21,
           FUNC_2 (VAR_21));
      VAR_36 = FUNC_28 ();
      FUNC_20 ();

      FUNC_16 (VAR_36, VAR_24, VAR_37,
     FUNC_27 (FUNC_2 (VAR_20), VAR_21));
    }

 done:




  if (VAR_24 != VAR_20)
    {
      if (FUNC_2 (VAR_24) == FUNC_2 (VAR_20))
 FUNC_18 (VAR_20, VAR_24);
      else
 FUNC_9 (VAR_20, VAR_24, 0);
    }
}
