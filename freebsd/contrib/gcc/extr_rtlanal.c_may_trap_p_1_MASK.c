
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int) ;

 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;





 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;

 unsigned int VAR_0 ;
 unsigned int VAR_1 ;




 int FUNC_9 (int ) ;

 int VAR_2 ;






 scalar_t__ FUNC_10 (scalar_t__,int) ;
 scalar_t__ FUNC_11 (scalar_t__,int,int) ;
 int FUNC_12 (scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_13 (scalar_t__,int ,int) ;

__attribute__((used)) static int
FUNC_14 (rtx VAR_5, unsigned VAR_6)
{
  int VAR_7;
  enum rtx_code VAR_8;
  const char *VAR_9;
  bool VAR_10 = (VAR_6 & VAR_1) != 0;

  if (VAR_5 == 0)
    return 0;
  VAR_8 = FUNC_1 (VAR_5);
  switch (VAR_8)
    {

    case 152:
    case 153:
    case 151:
    case 132:
    case 144:
    case 154:
    case 136:
    case 156:
    case 135:
    case 134:
      return 0;

    case 158:
    case 128:
    case 131:
      return 1;

    case 157:
      return FUNC_8 (VAR_5);


    case 140:
      if (


   !(VAR_6 & VAR_0)
   && FUNC_7 (VAR_5)
   && (!VAR_2 || !VAR_10))
 return 0;
      return
 FUNC_13 (FUNC_10 (VAR_5, 0), FUNC_2 (VAR_5), VAR_10);


    case 150:
    case 139:
    case 130:
    case 129:
      if (FUNC_6 (FUNC_2 (VAR_5)))
 return 1;
      if (FUNC_9 (FUNC_2 (VAR_5)))
 return VAR_4;
      if (!FUNC_0 (FUNC_10 (VAR_5, 1)) || (FUNC_10 (VAR_5, 1) == VAR_3))
 return 1;
      break;

    case 148:


      return 1;

    case 146:
    case 145:
    case 143:
    case 142:
    case 141:
    case 155:

      if (!VAR_4)
 break;




      if (FUNC_5 (FUNC_2 (VAR_5)))
 return 1;


      if (FUNC_5 (FUNC_2 (FUNC_10 (VAR_5, 0)))
   || FUNC_5 (FUNC_2 (FUNC_10 (VAR_5, 1))))
 return 1;
      break;

    case 149:
    case 138:
      if (FUNC_6 (FUNC_2 (VAR_5)))
 return 1;

      if (FUNC_6 (FUNC_2 (FUNC_10 (VAR_5, 0)))
   || FUNC_6 (FUNC_2 (FUNC_10 (VAR_5, 1))))
 return 1;
      break;

    case 147:

      if (VAR_4 && FUNC_5 (FUNC_2 (FUNC_10 (VAR_5, 0))))
 return 1;
      break;

    case 137:
    case 159:
    case 133:

      break;

    default:

      if (FUNC_9 (FUNC_2 (VAR_5))
   && VAR_4)
 return 1;
    }

  VAR_9 = FUNC_3 (VAR_8);
  for (VAR_7 = FUNC_4 (VAR_8) - 1; VAR_7 >= 0; VAR_7--)
    {
      if (VAR_9[VAR_7] == 'e')
 {
   if (FUNC_14 (FUNC_10 (VAR_5, VAR_7), VAR_6))
     return 1;
 }
      else if (VAR_9[VAR_7] == 'E')
 {
   int VAR_11;
   for (VAR_11 = 0; VAR_11 < FUNC_12 (VAR_5, VAR_7); VAR_11++)
     if (FUNC_14 (FUNC_11 (VAR_5, VAR_7, VAR_11), VAR_6))
       return 1;
 }
    }
  return 0;
}
