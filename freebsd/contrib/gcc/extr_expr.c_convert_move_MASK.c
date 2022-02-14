
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tree ;
typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum insn_code { ____Placeholder_insn_code } insn_code ;
typedef TYPE_3__* convert_optab ;
struct TYPE_10__ {TYPE_1__* operand; } ;
struct TYPE_9__ {TYPE_2__** handlers; } ;
struct TYPE_8__ {int insn_code; int libfunc; } ;
struct TYPE_7__ {int mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (scalar_t__,int) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int) ;
 int VAR_16 ;
 int FUNC_15 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (int) ;
 scalar_t__ FUNC_19 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_20 (int) ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_21 (int,int) ;
 int VAR_24 ;
 int FUNC_22 (int ,scalar_t__) ;
 int FUNC_23 (int,int,int) ;
 int VAR_25 ;
 int FUNC_24 (int,int,int) ;
 int FUNC_25 (int) ;
 int FUNC_26 (int) ;
 scalar_t__* VAR_26 ;
 int FUNC_27 (int,int,int ,int,int,int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int,int,int,int ) ;
 int FUNC_30 (int,int,int ,int,int,int,int) ;
 int FUNC_31 (int,int) ;
 int FUNC_32 (int,int,int,int,int ) ;
 int FUNC_33 (int,int,int,int) ;
 int FUNC_34 () ;
 int FUNC_35 (int ,int,int,int ,int,int) ;
 int FUNC_36 (int,int) ;
 int FUNC_37 (int) ;
 int FUNC_38 () ;
 int FUNC_39 (int,int) ;
 int FUNC_40 (int) ;
 int FUNC_41 (int,int) ;
 int FUNC_42 (int,int) ;
 int FUNC_43 (int,int) ;
 int FUNC_44 (int,int,int ) ;
 int FUNC_45 (int) ;
 int FUNC_46 () ;
 TYPE_6__* VAR_27 ;
 int FUNC_47 (int) ;
 int FUNC_48 (int,int,int,int) ;
 scalar_t__ VAR_28 ;
 scalar_t__ FUNC_49 (int,int) ;
 TYPE_3__* VAR_29 ;
 int FUNC_50 (int,int,int,int ) ;
 int FUNC_51 (scalar_t__) ;
 int FUNC_52 (scalar_t__,int ) ;
 int FUNC_53 () ;
 TYPE_3__* VAR_30 ;
 int VAR_31 ;

void
FUNC_54 (rtx VAR_32, rtx VAR_33, int VAR_34)
{
  enum machine_mode VAR_35 = FUNC_4 (VAR_32);
  enum machine_mode VAR_36 = FUNC_4 (VAR_33);
  int VAR_37 = FUNC_15 (VAR_35);
  int VAR_38 = FUNC_15 (VAR_36);
  enum insn_code VAR_39;
  rtx VAR_40;


  enum rtx_code VAR_41 = (VAR_34 < 0 ? VAR_21
         : (VAR_34 ? VAR_24 : VAR_17));


  FUNC_37 (VAR_37 == VAR_38);
  FUNC_37 (VAR_35 != VAR_1);
  FUNC_37 (VAR_36 != VAR_1);



  if (VAR_32 == VAR_33)
    return;





  if (FUNC_3 (VAR_33) == VAR_19 && FUNC_17 (VAR_33)
      && (FUNC_8 (FUNC_4 (FUNC_18 (VAR_33)))
   >= FUNC_8 (VAR_35))
      && FUNC_16 (VAR_33) == VAR_34)
    VAR_33 = FUNC_39 (VAR_35, VAR_33), VAR_36 = VAR_35;

  FUNC_37 (FUNC_3 (VAR_32) != VAR_19 || !FUNC_17 (VAR_32));

  if (VAR_35 == VAR_36
      || (VAR_36 == VAR_22 && FUNC_1 (VAR_33)))
    {
      FUNC_31 (VAR_32, VAR_33);
      return;
    }

  if (FUNC_20 (VAR_35) || FUNC_20 (VAR_36))
    {
      FUNC_37 (FUNC_5 (VAR_36) == FUNC_5 (VAR_35));

      if (FUNC_20 (VAR_35))
 VAR_33 = FUNC_50 (VAR_35, VAR_33, FUNC_4 (VAR_33), 0);
      else
 VAR_32 = FUNC_50 (VAR_36, VAR_32, FUNC_4 (VAR_32), 0);

      FUNC_31 (VAR_32, VAR_33);
      return;
    }

  if (FUNC_3 (VAR_32) == VAR_4 && FUNC_3 (VAR_33) == VAR_4)
    {
      FUNC_54 (FUNC_21 (VAR_32, 0), FUNC_21 (VAR_33, 0), VAR_34);
      FUNC_54 (FUNC_21 (VAR_32, 1), FUNC_21 (VAR_33, 1), VAR_34);
      return;
    }

  if (VAR_37)
    {
      rtx VAR_42, VAR_43;
      convert_optab VAR_44;

      FUNC_37 ((FUNC_7 (VAR_36)
     != FUNC_7 (VAR_35))
    || (FUNC_2 (VAR_36)
        != FUNC_2 (VAR_35)));

      if (FUNC_7 (VAR_36) == FUNC_7 (VAR_35))

 VAR_44 = FUNC_2 (VAR_36) ? VAR_30 : VAR_29;
      else if (FUNC_7 (VAR_36) < FUNC_7 (VAR_35))
 VAR_44 = VAR_29;
      else
 VAR_44 = VAR_30;



      VAR_39 = VAR_44->handlers[VAR_35][VAR_36].insn_code;
      if (VAR_39 != VAR_2)
 {
   FUNC_33 (VAR_39, VAR_32, VAR_33,
     VAR_44 == VAR_29 ? VAR_6 : VAR_7);
   return;
 }


      VAR_40 = VAR_44->handlers[VAR_35][VAR_36].libfunc;


      FUNC_37 (VAR_40);

      FUNC_53 ();
      VAR_42 = FUNC_30 (VAR_40, VAR_14, VAR_9, VAR_35,
           1, VAR_33, VAR_36);
      VAR_43 = FUNC_46 ();
      FUNC_34 ();
      FUNC_29 (VAR_43, VAR_32, VAR_42,
     VAR_44 == VAR_30 ? FUNC_43 (VAR_35,
               VAR_33)
     : FUNC_42 (VAR_35, VAR_33));
      return;
    }




  if (FUNC_6 (VAR_35) == VAR_12)
    {
      enum machine_mode VAR_45
 = FUNC_52 (FUNC_5 (VAR_35), VAR_11);

      FUNC_37 (VAR_30->handlers[VAR_35][VAR_45].insn_code
    != VAR_2);

      if (VAR_45 != VAR_36)
 VAR_33 = FUNC_24 (VAR_45, VAR_33, VAR_34);
      FUNC_33 (VAR_30->handlers[VAR_35][VAR_45].insn_code,
        VAR_32, VAR_33, VAR_21);
      return;
    }
  if (FUNC_6 (VAR_36) == VAR_12)
    {
      rtx VAR_46;
      enum machine_mode VAR_47
 = FUNC_52 (FUNC_5 (VAR_36), VAR_11);

      FUNC_37 (VAR_29->handlers[VAR_47][VAR_36].insn_code
    != VAR_2);

      if (VAR_35 == VAR_47)
 {
   FUNC_33 (VAR_29->handlers[VAR_47][VAR_36].insn_code,
     VAR_32, VAR_33, VAR_21);
   return;
 }

      VAR_46 = FUNC_40 (VAR_47);
      FUNC_33 (VAR_29->handlers[VAR_47][VAR_36].insn_code,
        VAR_46, VAR_33, VAR_21);


      VAR_36 = VAR_47;
      VAR_33 = VAR_46;
    }




  if (FUNC_5 (VAR_36) < FUNC_5 (VAR_35)
      && FUNC_5 (VAR_35) > VAR_0)
    {
      rtx VAR_48;
      rtx VAR_49;
      rtx VAR_50;
      rtx VAR_51;
      int VAR_52;
      enum machine_mode VAR_53;
      int VAR_54 = FUNC_0 (FUNC_8 (VAR_35), VAR_20);


      if ((VAR_39 = FUNC_23 (VAR_35, VAR_36, VAR_34))
   != VAR_2)
 {




   if (VAR_28 > 0 && FUNC_3 (VAR_33) == VAR_19)
     VAR_33 = FUNC_36 (VAR_36, VAR_33);
   FUNC_33 (VAR_39, VAR_32, VAR_33, VAR_41);
   return;
 }

      else if (FUNC_5 (VAR_36) < VAR_0
        && ((VAR_39 = FUNC_23 (VAR_35, VAR_31, VAR_34))
     != VAR_2))
 {
   if (FUNC_14 (VAR_32))
     {
       if (FUNC_49 (VAR_32, VAR_33))
  VAR_33 = FUNC_36 (VAR_36, VAR_33);
       FUNC_28 (FUNC_41 (VAR_22, VAR_32));
     }
   FUNC_54 (FUNC_39 (VAR_31, VAR_32), VAR_33, VAR_34);
   FUNC_33 (VAR_39, VAR_32,
     FUNC_39 (VAR_31, VAR_32), VAR_41);
   return;
 }


      FUNC_53 ();




      if (FUNC_49 (VAR_32, VAR_33))
 VAR_33 = FUNC_36 (VAR_36, VAR_33);


      if (FUNC_5 (VAR_36) < VAR_0)
 VAR_53 = VAR_31;
      else
 VAR_53 = VAR_36;

      VAR_51 = FUNC_24 (VAR_53, VAR_33, VAR_34);

      VAR_49 = FUNC_39 (VAR_53, VAR_32);
      FUNC_31 (VAR_49, VAR_51);


      if (VAR_34)
 VAR_50 = VAR_25;
      else
 {
     {
       VAR_50
  = FUNC_35 (VAR_16, VAR_53, VAR_51,
    FUNC_51 (FUNC_5 (VAR_53) - 1),
    VAR_14, 0);
       VAR_50 = FUNC_24 (VAR_31, VAR_50, 1);
     }
 }


      for (VAR_52 = FUNC_8 (VAR_53) / VAR_20; VAR_52 < VAR_54; VAR_52++)
 {
   int VAR_55 = (VAR_23 ? VAR_54 - VAR_52 - 1 : VAR_52);
   rtx VAR_56 = FUNC_48 (VAR_32, VAR_55, 1, VAR_35);

   FUNC_37 (VAR_56);

   if (VAR_50 != VAR_56)
     FUNC_31 (VAR_56, VAR_50);
 }

      VAR_48 = FUNC_46 ();
      FUNC_34 ();

      FUNC_32 (VAR_48, VAR_32, VAR_33, VAR_14,
         FUNC_44 (VAR_41, VAR_35, FUNC_25 (VAR_33)));
      return;
    }


  if (FUNC_5 (VAR_36) > VAR_0
      && FUNC_5 (VAR_35) <= VAR_0)
    {
      if (!((FUNC_11 (VAR_33)
      && ! FUNC_12 (VAR_33)
      && VAR_26[(int) VAR_35]
      && ! FUNC_47 (FUNC_21 (VAR_33, 0)))
     || FUNC_14 (VAR_33)
     || FUNC_3 (VAR_33) == VAR_19))
 VAR_33 = FUNC_36 (VAR_36, VAR_33);
      FUNC_54 (VAR_32, FUNC_39 (VAR_31, VAR_33), 0);
      return;
    }





  if (FUNC_5 (VAR_35) < FUNC_5 (VAR_36)
      && FUNC_19 (FUNC_5 (VAR_35),
    FUNC_5 (VAR_36)))
    {
      if (!((FUNC_11 (VAR_33)
      && ! FUNC_12 (VAR_33)
      && VAR_26[(int) VAR_35]
      && ! FUNC_47 (FUNC_21 (VAR_33, 0)))
     || FUNC_14 (VAR_33)
     || FUNC_3 (VAR_33) == VAR_19))
 VAR_33 = FUNC_36 (VAR_36, VAR_33);
      if (FUNC_14 (VAR_33) && FUNC_13 (VAR_33) < VAR_5
   && ! FUNC_10 (FUNC_13 (VAR_33), VAR_35))
 VAR_33 = FUNC_26 (VAR_33);
      FUNC_31 (VAR_32, FUNC_39 (VAR_35, VAR_33));
      return;
    }


  if (FUNC_5 (VAR_35) > FUNC_5 (VAR_36))
    {

      if ((VAR_39 = FUNC_23 (VAR_35, VAR_36, VAR_34))
   != VAR_2)
 {
   FUNC_33 (VAR_39, VAR_32, VAR_33, VAR_41);
   return;
 }
      else
 {
   enum machine_mode VAR_57;
   rtx VAR_58;
   tree VAR_59;


   for (VAR_57 = VAR_36; VAR_57 != VAR_22;
        VAR_57 = FUNC_9 (VAR_57))
     if (((FUNC_23 (VAR_35, VAR_57, VAR_34)
    != VAR_2)
   || (FUNC_8 (VAR_35) < FUNC_8 (VAR_57)
       && FUNC_19 (FUNC_5 (VAR_35),
            FUNC_5 (VAR_57))))
  && (FUNC_23 (VAR_57, VAR_36, VAR_34)
      != VAR_2))
       {
  FUNC_54 (VAR_32, FUNC_24 (VAR_57, VAR_33,
         VAR_34), VAR_34);
  return;
       }



   VAR_59 = FUNC_22 (VAR_15,
     FUNC_5 (VAR_35)
     - FUNC_5 (VAR_36));
   VAR_33 = FUNC_39 (VAR_35, FUNC_36 (VAR_36, VAR_33));
   VAR_58 = FUNC_35 (VAR_10, VAR_35, VAR_33, VAR_59,
         VAR_32, VAR_34);
   VAR_58 = FUNC_35 (VAR_16, VAR_35, VAR_58, VAR_59,
         VAR_32, VAR_34);
   if (VAR_58 != VAR_32)
     FUNC_31 (VAR_32, VAR_58);
   return;
 }
    }


  if (VAR_30->handlers[VAR_35][VAR_36].insn_code != VAR_2)
    {
      FUNC_33 (VAR_30->handlers[VAR_35][VAR_36].insn_code,
        VAR_32, VAR_33, VAR_21);
      return;
    }
  if (FUNC_5 (VAR_35) < FUNC_5 (VAR_36))
    {
      rtx VAR_60 = FUNC_36 (VAR_35, FUNC_39 (VAR_35, VAR_33));
      FUNC_31 (VAR_32, VAR_60);
      return;
    }


  FUNC_38 ();
}
