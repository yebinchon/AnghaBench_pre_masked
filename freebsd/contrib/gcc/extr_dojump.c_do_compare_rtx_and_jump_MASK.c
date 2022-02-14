
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

 int FUNC_2 (int) ;

 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;







 scalar_t__ VAR_0 ;

 int VAR_1 ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (int,int,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (int,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 () ;
 int FUNC_11 (scalar_t__,scalar_t__,int,scalar_t__,int,int,scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int,int,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__,scalar_t__) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int) ;

void
FUNC_21 (rtx VAR_4, rtx VAR_5, enum rtx_code VAR_6, int VAR_7,
    enum machine_mode VAR_8, rtx VAR_9, rtx VAR_10,
    rtx VAR_11)
{
  rtx VAR_12;
  int VAR_13 = 0;



  if (! VAR_11 && ! FUNC_2 (VAR_8))
    {
      VAR_11 = VAR_10;
      VAR_10 = 0;
      VAR_6 = FUNC_16 (VAR_6);
    }




  if (FUNC_18 (VAR_4, VAR_5))
    {
      VAR_12 = VAR_4;
      VAR_4 = VAR_5;
      VAR_5 = VAR_12;
      VAR_6 = FUNC_19 (VAR_6);
    }

  FUNC_10 ();

  VAR_6 = VAR_7 ? FUNC_20 (VAR_6) : VAR_6;
  if (0 != (VAR_12 = FUNC_17 (VAR_6, VAR_8, VAR_1,
       VAR_4, VAR_5)))
    {
      if (FUNC_1 (VAR_12))
 {
   rtx VAR_14 = (VAR_12 == VAR_3 || VAR_12 == FUNC_0 (VAR_8))
        ? VAR_10 : VAR_11;
   if (VAR_14)
     FUNC_12 (VAR_14);
   return;
 }

      VAR_6 = FUNC_3 (VAR_12);
      VAR_8 = FUNC_4 (VAR_12);
      VAR_4 = FUNC_6 (VAR_12, 0);
      VAR_5 = FUNC_6 (VAR_12, 1);
      VAR_7 = (VAR_6 == 133 || VAR_6 == 129 || VAR_6 == 135 || VAR_6 == 131);
    }


  if (! VAR_11)
    {
      VAR_13 = 1;
      VAR_11 = FUNC_15 ();
    }

  if (FUNC_5 (VAR_8) == VAR_0
      && ! FUNC_7 (VAR_6, VAR_8, VAR_2))
    {
      switch (VAR_6)
 {
 case 129:
   FUNC_9 (VAR_8, 1, VAR_5, VAR_4,
     VAR_10, VAR_11);
   break;

 case 131:
   FUNC_9 (VAR_8, 1, VAR_4, VAR_5,
     VAR_11, VAR_10);
   break;

 case 133:
   FUNC_9 (VAR_8, 1, VAR_4, VAR_5,
     VAR_10, VAR_11);
   break;

 case 135:
   FUNC_9 (VAR_8, 1, VAR_5, VAR_4,
     VAR_11, VAR_10);
   break;

 case 130:
   FUNC_9 (VAR_8, 0, VAR_5, VAR_4,
     VAR_10, VAR_11);
   break;

 case 132:
   FUNC_9 (VAR_8, 0, VAR_4, VAR_5,
     VAR_11, VAR_10);
   break;

 case 134:
   FUNC_9 (VAR_8, 0, VAR_4, VAR_5,
     VAR_10, VAR_11);
   break;

 case 136:
   FUNC_9 (VAR_8, 0, VAR_5, VAR_4,
     VAR_11, VAR_10);
   break;

 case 137:
   FUNC_8 (VAR_8, VAR_4, VAR_5, VAR_10,
      VAR_11);
   break;

 case 128:
   FUNC_8 (VAR_8, VAR_4, VAR_5, VAR_11,
      VAR_10);
   break;

 default:
   FUNC_14 ();
 }
    }
  else
    FUNC_11 (VAR_4, VAR_5, VAR_6, VAR_9, VAR_8, VAR_7,
        VAR_11);

  if (VAR_10)
    FUNC_12 (VAR_10);
  if (VAR_13)
    FUNC_13 (VAR_11);
}
