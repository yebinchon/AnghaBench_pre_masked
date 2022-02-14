
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int,int,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int,int ,int ,int ,int ,int,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int const,int ) ;
 int FUNC_11 (int const) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (int const,int ) ;
 int FUNC_15 (int const,int ,int ,int ) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_19 (bool VAR_13, enum machine_mode VAR_14,
       rtx VAR_15, rtx VAR_16)
{
  enum machine_mode VAR_17, VAR_18, VAR_19;
  rtx VAR_20;

  switch (VAR_14)
    {
    case 133:
    case 134:
      if (!VAR_13)
 return 0;


    case 136:
    case 135:
    case 131:
    case 130:
      VAR_16 = FUNC_8 (FUNC_3 (VAR_14), VAR_16);
      VAR_20 = FUNC_14 (VAR_14, VAR_16);
      FUNC_5 (FUNC_12 (VAR_10, VAR_15, VAR_20));
      return 1;

    case 132:
      if (!VAR_13)
 return 0;
      if (VAR_8 || VAR_7)
 {
   VAR_16 = FUNC_10 (VAR_6, VAR_16);
   VAR_20 = FUNC_13 (VAR_1, VAR_16);
   VAR_20 = FUNC_14 (VAR_14, VAR_20);
   FUNC_5 (FUNC_12 (VAR_10, VAR_15, VAR_20));
   return 1;
 }
      else
 {
   VAR_17 = VAR_1;
   VAR_18 = VAR_6;
   VAR_19 = 133;
   goto widen;
 }

    case 128:
      if (!VAR_13)
 return 0;
      VAR_17 = VAR_5;
      VAR_18 = VAR_1;
      VAR_19 = 132;
      goto widen;
    case 129:
      if (VAR_9)
 {
   rtx VAR_21, VAR_22;

   VAR_21 = FUNC_11 (VAR_6);
   FUNC_6 (VAR_21, FUNC_10 (VAR_6, VAR_16));

   VAR_22 = FUNC_11 (130);
   VAR_21 = FUNC_15 (130,
        FUNC_14 (130, VAR_21),
        FUNC_0 (130),
        VAR_12);
   FUNC_5 (FUNC_12 (VAR_10, VAR_22, VAR_21));

   VAR_21 = FUNC_11 (129);
   FUNC_6 (VAR_21, FUNC_10 (129, VAR_22));

   FUNC_5 (FUNC_18 (VAR_21, VAR_21, VAR_21));

   VAR_22 = FUNC_11 (130);
   FUNC_6 (VAR_22, FUNC_10 (130, VAR_21));

   FUNC_5 (FUNC_16 (VAR_22, VAR_22, VAR_11));

   FUNC_6 (VAR_15, FUNC_10 (129, VAR_22));
   return 1;
 }
      VAR_17 = VAR_1;
      VAR_18 = VAR_6;
      VAR_19 = 130;
      goto widen;
    case 137:
      if (VAR_9)
 {
   rtx VAR_23, VAR_24;

   VAR_23 = FUNC_11 (VAR_6);
   FUNC_6 (VAR_23, FUNC_10 (VAR_6, VAR_16));

   VAR_24 = FUNC_11 (130);
   VAR_23 = FUNC_15 (130,
        FUNC_14 (130, VAR_23),
        FUNC_0 (130),
        VAR_12);
   FUNC_5 (FUNC_12 (VAR_10, VAR_24, VAR_23));

   VAR_23 = FUNC_11 (137);
   FUNC_6 (VAR_23, FUNC_10 (137, VAR_24));

   FUNC_5 (FUNC_17 (VAR_23, VAR_23, VAR_23));
   FUNC_5 (FUNC_17 (VAR_23, VAR_23, VAR_23));

   VAR_24 = FUNC_11 (130);
   FUNC_6 (VAR_24, FUNC_10 (130, VAR_23));

   FUNC_5 (FUNC_16 (VAR_24, VAR_24, VAR_11));

   FUNC_6 (VAR_15, FUNC_10 (137, VAR_24));
   return 1;
 }
      VAR_17 = VAR_5;
      VAR_18 = VAR_1;
      VAR_19 = 129;
      goto widen;
    widen:

      VAR_16 = FUNC_4 (VAR_18, VAR_17, VAR_16, 1);
      VAR_20 = FUNC_7 (VAR_18, VAR_0, VAR_16,
          FUNC_1 (FUNC_2 (VAR_17)),
          VAR_3, 1, VAR_4);
      VAR_16 = FUNC_7 (VAR_18, VAR_2, VAR_16, VAR_20, VAR_20, 1, VAR_4);

      VAR_20 = FUNC_11 (VAR_19);
      if (!FUNC_19 (VAR_13, VAR_19, VAR_20, VAR_16))
 FUNC_9 ();
      FUNC_6 (VAR_15, FUNC_10 (VAR_14, VAR_20));
      return 1;

    default:
      return 0;
    }
}
