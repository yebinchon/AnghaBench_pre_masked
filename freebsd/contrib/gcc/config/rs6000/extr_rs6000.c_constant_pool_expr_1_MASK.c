
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int FUNC_0 (int ,int ) ;

 int FUNC_1 (int ) ;

 int FUNC_2 (int ) ;


 int VAR_0 ;
 int FUNC_3 (int ) ;

 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_8 (rtx VAR_2, int *VAR_3, int *VAR_4)
{
  switch (FUNC_2 (VAR_2))
    {
    case 128:
      if (FUNC_3 (VAR_2))
 return 0;
      else if (FUNC_1 (VAR_2))
 {
   if (FUNC_0 (FUNC_6 (VAR_2), VAR_0))
     {
       *VAR_3 = 1;
       return 1;
     }
   else
     return 0;
 }
      else if (! FUNC_7 (FUNC_5 (VAR_2, 0), VAR_1))
 {
   *VAR_4 = 1;
   return 1;
 }
      else
 return 0;
    case 129:
    case 130:
      return (FUNC_8 (FUNC_4 (VAR_2, 0), VAR_3, VAR_4)
       && FUNC_8 (FUNC_4 (VAR_2, 1), VAR_3, VAR_4));
    case 132:
      return FUNC_8 (FUNC_4 (VAR_2, 0), VAR_3, VAR_4);
    case 131:
      return 1;
    default:
      return 0;
    }
}
