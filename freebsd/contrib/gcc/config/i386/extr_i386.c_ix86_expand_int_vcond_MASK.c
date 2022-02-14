
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int) ;


 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int ,int ,int ,int ) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int,int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int ,int,int ,int ,int ,int ) ;
 int FUNC_16 (int ,int ,int ,int ) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;

bool
FUNC_19 (rtx VAR_1[])
{
  enum machine_mode VAR_2 = FUNC_3 (VAR_1[0]);
  enum rtx_code VAR_3 = FUNC_2 (VAR_1[3]);
  bool VAR_4 = 0;
  rtx VAR_5, VAR_6, VAR_7;

  VAR_6 = VAR_1[4];
  VAR_7 = VAR_1[5];


  switch (VAR_3)
    {
    case 140:
    case 137:
    case 136:
      break;

    case 131:
    case 135:
    case 134:
      VAR_3 = FUNC_17 (VAR_3);
      VAR_4 = 1;
      break;

    case 139:
    case 138:
      VAR_3 = FUNC_17 (VAR_3);
      VAR_4 = 1;


    case 133:
    case 132:
      VAR_3 = FUNC_18 (VAR_3);
      VAR_5 = VAR_6, VAR_6 = VAR_7, VAR_7 = VAR_5;
      break;

    default:
      FUNC_6 ();
    }



  if (VAR_3 == 136)
    {
      VAR_6 = FUNC_5 (VAR_2, VAR_6);

      switch (VAR_2)
 {
 case 129:
   {
     rtx VAR_8, VAR_9, VAR_10;


     VAR_8 = FUNC_8 (VAR_2);
     FUNC_4 (FUNC_13 (VAR_8, VAR_6, VAR_7));


     VAR_10 = FUNC_1 (-0x80000000);
     VAR_10 = FUNC_10 (VAR_2,
   FUNC_9 (4, VAR_10, VAR_10, VAR_10, VAR_10));
     VAR_10 = FUNC_5 (VAR_2, VAR_10);
     VAR_9 = FUNC_8 (VAR_2);
     FUNC_4 (FUNC_7 (VAR_9, VAR_6, VAR_10));



     VAR_5 = FUNC_8 (VAR_2);
     FUNC_4 (FUNC_14 (VAR_5, VAR_8, VAR_9));

     VAR_3 = 137;
   }
   break;

 case 130:
 case 128:

   VAR_5 = FUNC_8 (VAR_2);
   FUNC_4 (FUNC_11 (VAR_0, VAR_5,
      FUNC_12 (VAR_2, VAR_6, VAR_7)));

   VAR_3 = 140;
   VAR_4 = !VAR_4;
   break;

 default:
   FUNC_6 ();
 }

      VAR_6 = VAR_5;
      VAR_7 = FUNC_0 (VAR_2);
    }

  VAR_5 = FUNC_15 (VAR_1[0], VAR_3, VAR_6, VAR_7,
      VAR_1[1+VAR_4], VAR_1[2-VAR_4]);

  FUNC_16 (VAR_1[0], VAR_5, VAR_1[1+VAR_4],
    VAR_1[2-VAR_4]);
  return 1;
}
