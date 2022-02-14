
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;



 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int) ;

 int FUNC_5 (int ) ;



 unsigned int FUNC_6 (int ) ;




 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (int ,int) ;

 int FUNC_11 (scalar_t__) ;
 int** VAR_1 ;
 int FUNC_12 (unsigned int,unsigned int,int ,int *) ;
 int FUNC_13 (int ,int ) ;
 unsigned int FUNC_14 (int ) ;

int
FUNC_15 (rtx VAR_2, rtx VAR_3)
{
  unsigned int VAR_4, VAR_5;




  if (FUNC_0 (VAR_3))
    return 0;

 recurse:
  switch (FUNC_1 (VAR_2))
    {
    case 130:
    case 128:
    case 131:

      VAR_2 = FUNC_8 (VAR_2, 0);
      goto recurse;

    case 129:
      VAR_4 = FUNC_6 (FUNC_7 (VAR_2));
      if (VAR_4 < VAR_0)
 VAR_4 = FUNC_14 (VAR_2);
      goto do_reg;

    case 133:
      VAR_4 = FUNC_6 (VAR_2);
    do_reg:
      VAR_5 = VAR_4 + (VAR_4 < VAR_0
     ? VAR_1[VAR_4][FUNC_2 (VAR_2)] : 1);
      return FUNC_12 (VAR_4, VAR_5, VAR_3, (rtx*) 0);

    case 136:
      {
 const char *VAR_6;
 int VAR_7;

 if (FUNC_5 (VAR_3))
   return 1;

 VAR_6 = FUNC_3 (FUNC_1 (VAR_3));
 for (VAR_7 = FUNC_4 (FUNC_1 (VAR_3)) - 1; VAR_7 >= 0; VAR_7--)
   if (VAR_6[VAR_7] == 'e')
     {
       if (FUNC_15 (VAR_2, FUNC_8 (VAR_3, VAR_7)))
  return 1;
     }
   else if (VAR_6[VAR_7] == 'E')
     {
       int VAR_8;
       for (VAR_8 = FUNC_10 (VAR_3, VAR_7) - 1; VAR_8 >= 0; --VAR_8)
  if (FUNC_15 (VAR_2, FUNC_9 (VAR_3, VAR_7, VAR_8)))
    return 1;
     }

 return 0;
      }

    case 132:
    case 134:
    case 137:
      return FUNC_13 (VAR_2, VAR_3);

    case 135:
      {
 int VAR_9;


 for (VAR_9 = FUNC_10 (VAR_2, 0) - 1; VAR_9 >= 0; VAR_9--)
   if (FUNC_8 (FUNC_9 (VAR_2, 0, VAR_9), 0) != 0
       && FUNC_15 (FUNC_8 (FUNC_9 (VAR_2, 0, VAR_9), 0), VAR_3))
     return 1;
 return 0;
      }

    default:
      FUNC_11 (FUNC_0 (VAR_2));
      return 0;
    }
}
