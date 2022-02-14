
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (scalar_t__) ;


 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 () ;

rtx
FUNC_12 (rtx VAR_2, rtx VAR_3)
{
  rtx VAR_4, VAR_5;



  VAR_5 = FUNC_7 (135);



  for (VAR_4 = VAR_2; VAR_4 != FUNC_1 (VAR_3); VAR_4 = FUNC_1 (VAR_4))
    {
      switch (FUNC_0 (VAR_4))
 {
 case 139:
 case 141:
 case 138:



   if (FUNC_0 (FUNC_3 (VAR_4)) == VAR_1
       || FUNC_0 (FUNC_3 (VAR_4)) == VAR_0)
     break;
   FUNC_6 (VAR_4, FUNC_11 ());
   break;

 case 140:
   break;

 case 142:
   FUNC_5 ();
   break;

 case 137:
   switch (FUNC_2 (VAR_4))
     {


     case 130:

     case 135:
     case 134:

     case 133:
     case 131:




     case 132:

     case 136:
       break;

     case 129:
     case 128:
       FUNC_8 (VAR_4);
       break;

     default:


       FUNC_9 (FUNC_2 (VAR_4) >= 0);



       FUNC_8 (VAR_4);
     }
   break;
 default:
   FUNC_10 ();
 }
    }
  VAR_4 = FUNC_1 (VAR_5);
  FUNC_4 (VAR_5);
  return VAR_4;
}
