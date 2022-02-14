
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;






 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_9 (rtx VAR_4, HOST_WIDE_INT *VAR_5,
         HOST_WIDE_INT *VAR_6)
{
  rtx VAR_7 = FUNC_6 (VAR_4);
  rtx VAR_8 = FUNC_5 (VAR_4);
  enum rtx_code VAR_9;

  if (VAR_8 == VAR_3)
    {

      VAR_9 = FUNC_0 (VAR_7);
      if (! (VAR_9 == VAR_2 || VAR_9 == VAR_1)
   || FUNC_7 (VAR_7, 0) != VAR_3
   || FUNC_0 (FUNC_7 (VAR_7, 1)) != VAR_0)
 return;

      if (VAR_9 == VAR_1)
 *VAR_6 += FUNC_3 (FUNC_7 (VAR_7, 1));
      else
 *VAR_6 -= FUNC_3 (FUNC_7 (VAR_7, 1));
    }
  else if (FUNC_4 (VAR_8))
    {

      VAR_7 = FUNC_7 (VAR_8, 0);
      VAR_9 = FUNC_0 (VAR_7);

      switch (VAR_9)
 {
 case 128:
 case 131:
   if (FUNC_7 (VAR_7, 0) == VAR_3)
     {
       rtx VAR_10 = FUNC_7 (FUNC_7 (VAR_7, 1), 1);

       FUNC_8 (FUNC_0 (FUNC_7 (VAR_7, 1)) == VAR_2 &&
     FUNC_0 (VAR_10) == VAR_0);

       if (VAR_9 == 128)
  *VAR_5 -= FUNC_3 (VAR_10);
       else
  *VAR_6 -= FUNC_3 (VAR_10);
       break;
     }
   return;

 case 130:
   if (FUNC_7 (VAR_7, 0) == VAR_3)
     {
       *VAR_5 += FUNC_2 (FUNC_1 (VAR_8));
       break;
     }
   return;

 case 133:
   if (FUNC_7 (VAR_7, 0) == VAR_3)
     {
       *VAR_6 += FUNC_2 (FUNC_1 (VAR_8));
       break;
     }
   return;

 case 129:
   if (FUNC_7 (VAR_7, 0) == VAR_3)
     {
       *VAR_5 -= FUNC_2 (FUNC_1 (VAR_8));
       break;
     }
   return;

 case 132:
   if (FUNC_7 (VAR_7, 0) == VAR_3)
     {
       *VAR_6 -= FUNC_2 (FUNC_1 (VAR_8));
       break;
     }
   return;

 default:
   return;
 }
    }
}
