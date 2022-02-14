
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;



 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;

 int VAR_0 ;


 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

 int FUNC_7 (int ) ;

 int VAR_1 ;

 int FUNC_8 (int ) ;

 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_2 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

 int VAR_3 ;



 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ,int) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;

int
FUNC_17 (rtx VAR_4, rtx VAR_5)
{
  int VAR_6;

  switch (FUNC_4 (VAR_5))
    {
    case 132:
      if (FUNC_16 (VAR_4, FUNC_10 (VAR_5)))
 return 1;




      if (FUNC_4 (FUNC_9 (VAR_5)) != VAR_0
   && FUNC_4 (FUNC_9 (VAR_5)) != VAR_1
   && !FUNC_8 (FUNC_9 (VAR_5))
   && ! (FUNC_4 (FUNC_9 (VAR_5)) == VAR_2
  && FUNC_8 (FUNC_11 (FUNC_9 (VAR_5)))
  && (((FUNC_6 (FUNC_5 (FUNC_11 (FUNC_9 (VAR_5))))
        + (VAR_3 - 1)) / VAR_3)
      == ((FUNC_6 (FUNC_5 (FUNC_9 (VAR_5)))
    + (VAR_3 - 1)) / VAR_3)))
   && FUNC_16 (VAR_4, FUNC_9 (VAR_5)))
 return 1;
      return 0;

    case 139:
      for (VAR_6 = FUNC_1 (VAR_5) - 1; VAR_6 >= 0; VAR_6--)
 if (FUNC_16 (VAR_4, FUNC_0 (VAR_5, VAR_6)))
   return 1;
      return 0;

    case 138:
    case 128:
    case 135:
      return FUNC_16 (VAR_4, VAR_5);

    case 131:
      return FUNC_16 (VAR_4, FUNC_12 (VAR_5));

    case 133:
      return FUNC_16 (VAR_4, FUNC_13 (VAR_5, 0));

    case 130:
    case 129:
      for (VAR_6 = FUNC_15 (VAR_5, 0) - 1; VAR_6 >= 0; VAR_6--)
 if (FUNC_16 (VAR_4, FUNC_14 (VAR_5, 0, VAR_6)))
   return 1;
      return 0;

    case 134:
      for (VAR_6 = FUNC_15 (VAR_5, 0) - 1; VAR_6 >= 0; VAR_6--)
 if (FUNC_17 (VAR_4, FUNC_14 (VAR_5, 0, VAR_6)))
   return 1;
      return 0;

    case 137:
      if (FUNC_7 (FUNC_13 (VAR_5, 0)))
 if (FUNC_16 (VAR_4, FUNC_13 (FUNC_13 (VAR_5, 0), 0)))
   return 1;
      return 0;

    case 136:
      if (FUNC_16 (VAR_4, FUNC_3 (VAR_5)))
 return 1;
      return FUNC_17 (VAR_4, FUNC_2 (VAR_5));

    default:
      return 0;
    }
}
