
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int RTX_CODE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6 (rtx VAR_2, rtx VAR_3, rtx VAR_4)
{
  RTX_CODE VAR_5 = FUNC_0 (VAR_2);
  switch (FUNC_1 (VAR_5))
    {
    case 128:
    case 135:
    case 133:
    case 131:
    case 132:
    case 129:
    case 134:
      {
 int VAR_6;
 const char *VAR_7 = FUNC_2 (VAR_5);
 for (VAR_6 = FUNC_3 (VAR_5) - 1; VAR_6 >= 0; VAR_6--)
   if (VAR_7[VAR_6] == 'e'
       && ! FUNC_6 (FUNC_4 (VAR_2, VAR_6), VAR_3, VAR_4))
       return 0;
 return 1;
      }
    case 130:
      if (VAR_5 == VAR_1)
 return VAR_2 == VAR_3 || VAR_2 == VAR_4;


      if (VAR_5 == VAR_0
   && ! FUNC_6 (FUNC_4 (VAR_2, 0), VAR_3, VAR_4))
 return 0;

    default:
      return ! FUNC_5 (VAR_2);
    }
}
