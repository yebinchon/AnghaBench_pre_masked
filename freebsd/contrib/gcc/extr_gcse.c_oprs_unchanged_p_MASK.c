
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_avail_info {int first_set; int last_set; int last_bb; } ;
typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
 int FUNC_0 (scalar_t__) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 size_t FUNC_4 (scalar_t__) ;

 scalar_t__ FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (scalar_t__,int,int) ;
 int FUNC_7 (scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_8 (int ,int ,scalar_t__,int) ;
 struct reg_avail_info* VAR_1 ;

__attribute__((used)) static int
FUNC_9 (rtx VAR_2, rtx VAR_3, int VAR_4)
{
  int VAR_5, VAR_6;
  enum rtx_code VAR_7;
  const char *VAR_8;

  if (VAR_2 == 0)
    return 1;

  VAR_7 = FUNC_0 (VAR_2);
  switch (VAR_7)
    {
    case 129:
      {
 struct reg_avail_info *VAR_9 = &VAR_1[FUNC_4 (VAR_2)];

 if (VAR_9->last_bb != VAR_0)
   return 1;
 if (VAR_4)
   return VAR_9->last_set < FUNC_3 (VAR_3);
 else
   return VAR_9->first_set >= FUNC_3 (VAR_3);
      }

    case 137:
      if (FUNC_8 (VAR_0, FUNC_3 (VAR_3),
      VAR_2, VAR_4))
 return 0;
      else
 return FUNC_9 (FUNC_5 (VAR_2, 0), VAR_3, VAR_4);

    case 132:
    case 131:
    case 135:
    case 134:
    case 130:
    case 133:
      return 0;

    case 136:
    case 143:
    case 142:
    case 140:
    case 141:
    case 139:
    case 128:
    case 138:
    case 144:
    case 145:
      return 1;

    default:
      break;
    }

  for (VAR_5 = FUNC_2 (VAR_7) - 1, VAR_8 = FUNC_1 (VAR_7); VAR_5 >= 0; VAR_5--)
    {
      if (VAR_8[VAR_5] == 'e')
 {



   if (VAR_5 == 0)
     return FUNC_9 (FUNC_5 (VAR_2, VAR_5), VAR_3, VAR_4);

   else if (! FUNC_9 (FUNC_5 (VAR_2, VAR_5), VAR_3, VAR_4))
     return 0;
 }
      else if (VAR_8[VAR_5] == 'E')
 for (VAR_6 = 0; VAR_6 < FUNC_7 (VAR_2, VAR_5); VAR_6++)
   if (! FUNC_9 (FUNC_6 (VAR_2, VAR_5, VAR_6), VAR_3, VAR_4))
     return 0;
    }

  return 1;
}
