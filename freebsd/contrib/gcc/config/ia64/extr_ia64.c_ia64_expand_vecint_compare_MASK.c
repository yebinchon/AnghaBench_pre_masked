
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int) ;


 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int const,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int const) ;
 int FUNC_7 (int,int ,int ) ;
 int FUNC_8 (int const,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int,int ,int ) ;
 int FUNC_11 (int,int,int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;

__attribute__((used)) static bool
FUNC_16 (enum rtx_code VAR_1, enum machine_mode VAR_2,
       rtx VAR_3, rtx VAR_4, rtx VAR_5)
{
  bool VAR_6 = 0;
  rtx VAR_7;


  switch (VAR_1)
    {
    case 140:
    case 137:
    case 136:
      break;

    case 131:
    case 135:
    case 134:
      VAR_1 = FUNC_14 (VAR_1);
      VAR_6 = 1;
      break;

    case 139:
    case 138:
      VAR_1 = FUNC_14 (VAR_1);
      VAR_6 = 1;


    case 133:
    case 132:
      VAR_1 = FUNC_15 (VAR_1);
      VAR_7 = VAR_4, VAR_4 = VAR_5, VAR_5 = VAR_7;
      break;

    default:
      FUNC_4 ();
    }



  if (VAR_1 == 136)
    {
      switch (VAR_2)
 {
 case 130:
   {
     rtx VAR_8, VAR_9, VAR_10;


     VAR_8 = FUNC_6 (130);
     FUNC_2 (FUNC_12 (VAR_8, VAR_4, VAR_5));


     VAR_10 = FUNC_1 (-0x80000000);
     VAR_10 = FUNC_8 (130, FUNC_7 (2, VAR_10, VAR_10));
     VAR_10 = FUNC_3 (130, VAR_10);
     VAR_9 = FUNC_6 (130);
     FUNC_2 (FUNC_5 (VAR_9, VAR_4, VAR_10));



     VAR_7 = FUNC_6 (130);
     FUNC_2 (FUNC_13 (VAR_7, VAR_8, VAR_9));

     VAR_1 = 137;
     VAR_4 = VAR_7;
     VAR_5 = FUNC_0 (VAR_2);
   }
   break;

 case 128:
 case 129:

   VAR_7 = FUNC_6 (VAR_2);
   FUNC_2 (FUNC_9 (VAR_0, VAR_7,
      FUNC_10 (VAR_2, VAR_4, VAR_5)));

   VAR_1 = 140;
   VAR_4 = VAR_7;
   VAR_5 = FUNC_0 (VAR_2);
   VAR_6 = !VAR_6;
   break;

 default:
   FUNC_4 ();
 }
    }

  VAR_7 = FUNC_11 (VAR_1, VAR_2, VAR_4, VAR_5);
  FUNC_2 (FUNC_9 (VAR_0, VAR_3, VAR_7));

  return VAR_6;
}
