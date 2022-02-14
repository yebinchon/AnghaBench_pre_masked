
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int) ;



 size_t FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

 int FUNC_7 (int ) ;


 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (int ,int) ;
 int * VAR_0 ;

__attribute__((used)) static void
FUNC_11 (rtx VAR_1)
{
  int VAR_2;
  const char *VAR_3;
  enum rtx_code VAR_4 = FUNC_0 (VAR_1);

  switch (VAR_4)
    {
    case 131:
    case 135:
    case 137:
    case 129:
    case 133:
    case 136:
    case 134:
    case 139:
    case 132:
    case 128:
    case 138:
      return;

    case 130:
      if (FUNC_6 (FUNC_7 (VAR_1))
   && (FUNC_2 (FUNC_1 (VAR_1))
       > VAR_0[FUNC_5 (FUNC_7 (VAR_1))]))
 VAR_0[FUNC_5 (FUNC_7 (VAR_1))]
   = FUNC_2 (FUNC_1 (VAR_1));
      return;

    default:
      break;
    }

  VAR_3 = FUNC_3 (VAR_4);
  for (VAR_2 = FUNC_4 (VAR_4) - 1; VAR_2 >= 0; VAR_2--)
    {
      if (VAR_3[VAR_2] == 'e')
 FUNC_11 (FUNC_8 (VAR_1, VAR_2));
      else if (VAR_3[VAR_2] == 'E')
 {
   int VAR_5;
   for (VAR_5 = FUNC_10 (VAR_1, VAR_2) - 1; VAR_5 >= 0; VAR_5--)
     FUNC_11 (FUNC_9 (VAR_1, VAR_2, VAR_5));
 }
    }
}
