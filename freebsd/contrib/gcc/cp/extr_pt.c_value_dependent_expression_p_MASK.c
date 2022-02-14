
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;


 int FUNC_3 (int ) ;






 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_0 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int (*) (int )) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int VAR_1 ;





 int FUNC_14 (int ) ;

bool
FUNC_15 (tree VAR_2)
{
  if (!VAR_1)
    return 0;


  if (FUNC_1 (VAR_2) && FUNC_14 (VAR_2))
    return 1;

  switch (FUNC_4 (VAR_2))
    {
    case 140:

      return 1;

    case 134:

      return 1;

    case 142:

      if (FUNC_2 (VAR_2))
 return 1;
      return 0;

    case 133:


      if (FUNC_0 (VAR_2)
   && FUNC_3 (FUNC_8 (VAR_2))
   && FUNC_15 (FUNC_0 (VAR_2)))
 return 1;
      return 0;

    case 141:
    case 135:
    case 143:
    case 138:
    case 145:



      {
 tree VAR_3 = FUNC_8 (VAR_2);

 if (FUNC_12 (VAR_3))
   return 1;


 VAR_2 = FUNC_7 (VAR_2, 0);
 if (!VAR_2)
   {



     FUNC_13 (FUNC_3 (VAR_3));

     return 0;
   }

 if (FUNC_4 (VAR_2) == VAR_0)
   return FUNC_10 (VAR_2);

 return FUNC_15 (VAR_2);
      }

    case 136:
    case 147:


      VAR_2 = FUNC_7 (VAR_2, 0);
      if (FUNC_9 (VAR_2))
 return FUNC_12 (VAR_2);
      return FUNC_14 (VAR_2);

    case 137:
      return FUNC_11 (VAR_2, FUNC_15);

    case 144:
      return (FUNC_15 (FUNC_7 (VAR_2, 0))
       || FUNC_15 (FUNC_7 (VAR_2, 1)));

    case 146:



      return 1;

    case 139:
      return ((FUNC_15 (FUNC_7 (VAR_2, 0)))
       || (FUNC_15 (FUNC_7 (VAR_2, 2))));

    default:


      switch (FUNC_5 (FUNC_4 (VAR_2)))
 {
 case 129:
 case 128:
   return (FUNC_15
    (FUNC_7 (VAR_2, 0)));

 case 131:
 case 132:
   return ((FUNC_15
     (FUNC_7 (VAR_2, 0)))
    || (FUNC_15
        (FUNC_7 (VAR_2, 1))));

 case 130:
   {
     int VAR_4;
     for (VAR_4 = 0; VAR_4 < FUNC_6 (FUNC_4 (VAR_2)); ++VAR_4)




       if (FUNC_7 (VAR_2, VAR_4)
    && (FUNC_15
        (FUNC_7 (VAR_2, VAR_4))))
  return 1;
     return 0;
   }

 default:
   break;
 }
    }


  return 0;
}
