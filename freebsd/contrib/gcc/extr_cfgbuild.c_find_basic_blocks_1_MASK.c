
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef int basic_block ;



 scalar_t__ FUNC_0 (scalar_t__) ;


 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;


 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

 int VAR_1 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_12 (rtx VAR_5)
{
  rtx VAR_6, VAR_7;
  rtx VAR_8 = VAR_2;
  rtx VAR_9 = VAR_2;
  rtx VAR_10 = VAR_2;
  basic_block VAR_11 = VAR_0;







  for (VAR_6 = VAR_5; VAR_6; VAR_6 = VAR_7)
    {
      enum rtx_code VAR_12 = FUNC_1 (VAR_6);

      VAR_7 = FUNC_3 (VAR_6);

      if ((FUNC_2 (VAR_6) || FUNC_0 (VAR_6))
   && VAR_9)
 {
   VAR_11 = FUNC_7 (VAR_9, VAR_10, VAR_8, VAR_11);
   VAR_9 = VAR_10 = VAR_2;
   VAR_8 = VAR_2;
 }

      if (FUNC_11 (VAR_6))
 {
   if (VAR_9 == VAR_2)
     VAR_9 = VAR_6;
   VAR_10 = VAR_6;
 }

      if (VAR_9 && FUNC_6 (VAR_6))
 {
   VAR_11 = FUNC_7 (VAR_9, VAR_10, VAR_8, VAR_11);
   VAR_9 = VAR_10 = VAR_2;
   VAR_8 = VAR_2;
 }

      switch (VAR_12)
 {
 case 128:
   {
     int VAR_13 = FUNC_4 (VAR_6);





     if (VAR_13 == VAR_1)
       {
  if (VAR_8 == VAR_2)
    VAR_8 = VAR_6;
  else
    VAR_7 = FUNC_8 (VAR_6);
       }
     break;
   }

 case 131:
 case 129:
 case 132:
 case 130:
 case 133:
   break;

 default:
   FUNC_10 ();
 }
    }

  if (VAR_9 != VAR_2)
    FUNC_7 (VAR_9, VAR_10, VAR_8, VAR_11);
  else if (VAR_8)
    FUNC_8 (VAR_8);

  FUNC_9 (VAR_3 == VAR_4);

  FUNC_5 ();
}
