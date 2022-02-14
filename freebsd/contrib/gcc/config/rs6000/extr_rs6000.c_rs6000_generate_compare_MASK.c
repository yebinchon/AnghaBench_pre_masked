
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;





 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_5 (int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_16 (int,int ) ;
 int FUNC_17 (int,int ,int ) ;
 int FUNC_18 (int,int ,int ) ;
 int FUNC_19 (int,int ) ;
 int FUNC_20 (int const) ;
 int FUNC_21 (int,int ,int ) ;
 int FUNC_22 (int,int,int ,int ) ;
 int FUNC_23 (int ,int ,int ) ;
 int FUNC_24 (int ,int ,int ) ;
 int FUNC_25 (int ,int ,int ) ;
 int FUNC_26 (int ,int ,int ) ;
 int FUNC_27 (int ,int ,int ) ;
 int FUNC_28 (int ,int ,int ) ;
 int FUNC_29 (int ,int ,int ) ;
 int FUNC_30 (int ,int ,int ) ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_31 (int,int) ;

__attribute__((used)) static rtx
FUNC_32 (enum rtx_code VAR_25)
{
  enum machine_mode VAR_26;
  rtx VAR_27;

  if (VAR_22)
    VAR_26 = VAR_1;
  else if (VAR_25 == 140 || VAR_25 == 135
    || VAR_25 == 142 || VAR_25 == 138)
    VAR_26 = VAR_2;
  else if ((VAR_25 == 144 || VAR_25 == 134)
    && FUNC_0 (VAR_23) == VAR_5
    && FUNC_0 (VAR_24) == VAR_5
    && FUNC_2 (VAR_23)
    && FUNC_2 (VAR_24))




    VAR_26 = VAR_2;
  else
    VAR_26 = VAR_3;


  VAR_27 = FUNC_14 (VAR_26);


  if ((VAR_7 && !VAR_8 && VAR_9)
      && VAR_22)
    {
      rtx VAR_28, VAR_29, VAR_30;
      enum machine_mode VAR_31 = FUNC_1 (VAR_23);

      if (VAR_31 == VAR_17)
 VAR_31 = FUNC_1 (VAR_24);




      switch (VAR_25)
 {
 case 144: case 132: case 134: case 136:
   switch (VAR_31)
     {
     case 133:
       VAR_28 = VAR_21
  ? FUNC_28 (VAR_27, VAR_23,
       VAR_24)
  : FUNC_10 (VAR_27, VAR_23,
       VAR_24);
       break;

     case 145:
       VAR_28 = VAR_21
  ? FUNC_25 (VAR_27, VAR_23,
       VAR_24)
  : FUNC_7 (VAR_27, VAR_23,
       VAR_24);
       break;

     default:
       FUNC_6 ();
     }
   break;

 case 141: case 140: case 130: case 131: case 143: case 142:
   switch (VAR_31)
     {
     case 133:
       VAR_28 = VAR_21
  ? FUNC_29 (VAR_27, VAR_23,
       VAR_24)
  : FUNC_11 (VAR_27, VAR_23,
       VAR_24);
       break;

     case 145:
       VAR_28 = VAR_21
  ? FUNC_26 (VAR_27, VAR_23,
       VAR_24)
  : FUNC_8 (VAR_27, VAR_23,
       VAR_24);
       break;

     default:
       FUNC_6 ();
     }
   break;

 case 137: case 135: case 128: case 129: case 139: case 138:
   switch (VAR_31)
     {
     case 133:
       VAR_28 = VAR_21
  ? FUNC_30 (VAR_27, VAR_23,
       VAR_24)
  : FUNC_12 (VAR_27, VAR_23,
       VAR_24);
       break;

     case 145:
       VAR_28 = VAR_21
  ? FUNC_27 (VAR_27, VAR_23,
       VAR_24)
  : FUNC_9 (VAR_27, VAR_23,
       VAR_24);
       break;

     default:
       FUNC_6 ();
     }
   break;
        default:
          FUNC_6 ();
 }


      if (VAR_25 == 139 || VAR_25 == 143 || VAR_25 == 138 || VAR_25 == 142)
 {
   FUNC_5 (VAR_28);

   switch (VAR_25)
     {
     case 139: VAR_25 = 137; break;
     case 143: VAR_25 = 141; break;
     case 138: VAR_25 = 137; break;
     case 142: VAR_25 = 141; break;
     default: FUNC_6 ();
     }

   VAR_30 = FUNC_14 (VAR_1);


   switch (VAR_31)
     {
     case 133:
       VAR_28 = VAR_21
  ? FUNC_28 (VAR_30, VAR_23,
       VAR_24)
  : FUNC_10 (VAR_30, VAR_23,
       VAR_24);
       break;

     case 145:
       VAR_28 = VAR_21
  ? FUNC_25 (VAR_30, VAR_23,
       VAR_24)
  : FUNC_7 (VAR_30, VAR_23,
       VAR_24);
       break;

     default:
       FUNC_6 ();
     }
   FUNC_5 (VAR_28);


   VAR_29 = FUNC_14 (VAR_1);
   VAR_28 = FUNC_13 (VAR_29, VAR_27,
        VAR_30);
   VAR_27 = VAR_29;
   VAR_25 = 144;
 }
      else
 {
   if (VAR_25 == 134 || VAR_25 == 136)
     VAR_25 = 134;
   else
     VAR_25 = 144;
 }

      FUNC_5 (VAR_28);
    }
  else
    {


      if (VAR_26 == VAR_1 && VAR_12
   && FUNC_1 (VAR_23) == VAR_13
   && !VAR_10
   && VAR_9 && VAR_8 && VAR_11)
 FUNC_5 (FUNC_19 (VAR_17,
   FUNC_15 (9,
       FUNC_21 (VAR_17,
      VAR_27,
      FUNC_17 (VAR_26,
         VAR_23,
         VAR_24)),
       FUNC_16 (VAR_17, FUNC_20 (145)),
       FUNC_16 (VAR_17, FUNC_20 (145)),
       FUNC_16 (VAR_17, FUNC_20 (145)),
       FUNC_16 (VAR_17, FUNC_20 (145)),
       FUNC_16 (VAR_17, FUNC_20 (145)),
       FUNC_16 (VAR_17, FUNC_20 (145)),
       FUNC_16 (VAR_17, FUNC_20 (145)),
       FUNC_16 (VAR_17, FUNC_20 (145)))));
      else if (FUNC_0 (VAR_24) == VAR_15
        && FUNC_3 (VAR_24, 1) == VAR_16)
 {
   rtx VAR_32 = FUNC_4 (VAR_24, 0, 0);
   VAR_26 = VAR_0;
   VAR_27 = FUNC_14 (VAR_0);
   if (VAR_6)
     FUNC_5 (FUNC_23 (VAR_27,
       VAR_23, VAR_32));
   else
     FUNC_5 (FUNC_24 (VAR_27,
       VAR_23, VAR_32));
 }
      else
 FUNC_5 (FUNC_21 (VAR_17, VAR_27,
    FUNC_17 (VAR_26,
       VAR_23,
       VAR_24)));
    }



  if (VAR_22
      && !VAR_20
      && !(VAR_9 && VAR_7 && !VAR_8)
      && (VAR_25 == 139 || VAR_25 == 143
   || VAR_25 == 132 || VAR_25 == 136
   || VAR_25 == 130 || VAR_25 == 128))
    {
      enum rtx_code VAR_33, VAR_34;
      rtx VAR_35, VAR_36, VAR_37;
      rtx VAR_38 = FUNC_14 (VAR_0);

      switch (VAR_25)
 {
 case 139: VAR_33 = 137; VAR_34 = 144; break;
 case 143: VAR_33 = 141; VAR_34 = 144; break;
 case 132: VAR_33 = VAR_14; VAR_34 = 144; break;
 case 136: VAR_33 = 137; VAR_34 = 141; break;
 case 130: VAR_33 = VAR_14; VAR_34 = 141; break;
 case 128: VAR_33 = VAR_14; VAR_34 = 137; break;
 default: FUNC_6 ();
 }
      FUNC_31 (VAR_33, VAR_26);
      FUNC_31 (VAR_34, VAR_26);
      VAR_35 = FUNC_22 (VAR_33, VAR_4, VAR_27, VAR_18);
      VAR_36 = FUNC_22 (VAR_34, VAR_4, VAR_27, VAR_18);
      VAR_37 = FUNC_17 (VAR_0,
          FUNC_18 (VAR_4, VAR_35, VAR_36),
          VAR_19);
      FUNC_5 (FUNC_21 (VAR_17, VAR_38, VAR_37));

      VAR_27 = VAR_38;
      VAR_25 = 144;
    }

  FUNC_31 (VAR_25, FUNC_1 (VAR_27));

  return FUNC_22 (VAR_25, VAR_17, VAR_27, VAR_18);
}
