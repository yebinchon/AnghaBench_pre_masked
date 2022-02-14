
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int const,int ) ;
 int FUNC_11 (int const) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int,int ,int ) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (int,int ,int ,int ) ;
 int FUNC_16 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_17 (int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_18 (bool VAR_5, enum machine_mode VAR_6,
         rtx VAR_7, rtx VAR_8, int VAR_9)
{
  enum machine_mode VAR_10;
  rtx VAR_11;
  rtx VAR_12, VAR_13;

  switch (VAR_6)
    {
    case 134:
    case 133:
      if (!VAR_5)
 return 0;


    case 136:
    case 135:
      if (VAR_9 != 0)
 return 0;
      VAR_8 = FUNC_8 (FUNC_2 (VAR_6), VAR_8);
      VAR_12 = FUNC_13 (VAR_6, VAR_8, FUNC_0 (FUNC_2 (VAR_6)));
      FUNC_6 (FUNC_12 (VAR_3, VAR_7, VAR_12));
      return 1;

    case 131:
    case 130:
      if (!FUNC_4 (VAR_7) || FUNC_3 (VAR_7) < VAR_0)
 VAR_11 = FUNC_11 (VAR_6);
      else
 VAR_11 = VAR_7;
      VAR_8 = FUNC_8 (FUNC_2 (VAR_6), VAR_8);
      VAR_12 = FUNC_14 (VAR_6, VAR_8);
      VAR_12 = FUNC_15 (VAR_6, VAR_12, FUNC_0 (VAR_6), VAR_4);
      FUNC_6 (FUNC_12 (VAR_3, VAR_11, VAR_12));
      if (VAR_9 != 0)
 {




   if (VAR_6 != 131 && VAR_2)
     {
       FUNC_6 (FUNC_16 (VAR_11, VAR_11,
         FUNC_1 (1),
         FUNC_1 (VAR_9 == 1 ? 0 : 1),
         FUNC_1 (VAR_9 == 2 ? 0 : 1),
         FUNC_1 (VAR_9 == 3 ? 0 : 1)));
       if (VAR_7 != VAR_11)
  FUNC_7 (VAR_7, VAR_11);
       return 1;
     }



   if (VAR_6 != 131)
     {
       VAR_13 = FUNC_11 (131);
       FUNC_7 (VAR_13, FUNC_10 (131, VAR_11));
     }
   else
     VAR_13 = VAR_11;

   FUNC_6 (FUNC_17 (VAR_13, VAR_13, VAR_13,
           FUNC_1 (1),
           FUNC_1 (VAR_9 == 1 ? 0 : 1),
           FUNC_1 (VAR_9 == 2 ? 0+4 : 1+4),
           FUNC_1 (VAR_9 == 3 ? 0+4 : 1+4)));

   if (VAR_6 != 131)
     FUNC_7 (VAR_7, FUNC_10 (130, VAR_13));
   else if (VAR_13 != VAR_7)
     FUNC_7 (VAR_7, VAR_13);
 }
      else if (VAR_7 != VAR_11)
 FUNC_7 (VAR_7, VAR_11);
      return 1;

    case 129:
    case 137:
      VAR_10 = 130;
      goto widen;
    case 132:
    case 128:
      if (!VAR_5)
 return 0;
      VAR_10 = 133;
      goto widen;
    widen:
      if (VAR_9 != 0)
 return 0;


      VAR_8 = FUNC_5 (VAR_1, FUNC_2 (VAR_6), VAR_8, 1);

      VAR_12 = FUNC_11 (VAR_10);
      if (!FUNC_18 (VAR_5, VAR_10, VAR_12,
      VAR_8, VAR_9))
 FUNC_9 ();

      FUNC_7 (VAR_7, FUNC_10 (VAR_6, VAR_12));
      return 1;

    default:
      return 0;
    }
}
