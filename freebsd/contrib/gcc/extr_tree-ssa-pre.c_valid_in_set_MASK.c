
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value_set_t ;
typedef int tree ;
typedef int basic_block ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;







 int FUNC_12 (int ,int ) ;

__attribute__((used)) static bool
FUNC_13 (value_set_t VAR_6, tree VAR_7, basic_block VAR_8)
{
 tree VAR_9 = FUNC_9 (VAR_7);
 switch (FUNC_3 (FUNC_2 (VAR_7)))
    {
    case 134:
    case 133:
      {
 tree VAR_10 = FUNC_4 (VAR_7, 0);
 tree VAR_11 = FUNC_4 (VAR_7, 1);
 return FUNC_11 (VAR_6, VAR_10) && FUNC_11 (VAR_6, VAR_11);
      }

    case 128:
      {
 tree VAR_12 = FUNC_4 (VAR_7, 0);
 return FUNC_11 (VAR_6, VAR_12);
      }

    case 130:
      {
 if (FUNC_2 (VAR_7) == VAR_1)
   {
     tree VAR_13 = FUNC_4 (VAR_7, 0);
     tree VAR_14 = FUNC_4 (VAR_7, 1);
     tree VAR_15 = FUNC_4 (VAR_7, 2);


     if (!FUNC_11 (VAR_6, VAR_13)
  || (VAR_15 && !FUNC_11 (VAR_6, VAR_15)))
       return 0;


     for (; VAR_14; VAR_14 = FUNC_1 (VAR_14))
       {
  if (!FUNC_11 (VAR_6, FUNC_5 (VAR_14)))
    return 0;
       }
     return !FUNC_12 (FUNC_6 (VAR_9), VAR_8);
   }
 return 0;
      }

    case 129:
      {
 if (FUNC_2 (VAR_7) == VAR_3
     || FUNC_2 (VAR_7) == VAR_2
            || FUNC_2 (VAR_7) == VAR_0)
   {
     tree VAR_16 = FUNC_4 (VAR_7, 0);
     FUNC_7 (FUNC_10 (VAR_16)
   || FUNC_2 (VAR_16) == VAR_5);
     if (!FUNC_11 (VAR_6, VAR_16))
       return 0;
     if (FUNC_2 (VAR_7) == VAR_0)
       {
  tree VAR_17 = FUNC_4 (VAR_7, 1);
  tree VAR_18 = FUNC_4 (VAR_7, 2);
  tree VAR_19 = FUNC_4 (VAR_7, 3);
  FUNC_7 (FUNC_10 (VAR_17)
              || FUNC_2 (VAR_17) == VAR_5);
  if (!FUNC_11 (VAR_6, VAR_17))
    return 0;
  FUNC_7 (!VAR_18 || FUNC_10 (VAR_18)
              || FUNC_2 (VAR_18) == VAR_5);
  if (VAR_18
      && !FUNC_11 (VAR_6, VAR_18))
    return 0;
  FUNC_7 (!VAR_19 || FUNC_10 (VAR_19)
              || FUNC_2 (VAR_19) == VAR_5);
  if (VAR_19
      && !FUNC_11 (VAR_6, VAR_19))
    return 0;
     }
   return FUNC_11 (FUNC_0 (VAR_8),
         VAR_9)
     || !FUNC_12 (FUNC_6 (VAR_9),
           VAR_8);
   }
      }
      return 0;

    case 131:
      FUNC_7 (FUNC_2 (VAR_7) == VAR_4);
      return 1;

    case 132:
      return !FUNC_12 (FUNC_6 (VAR_9), VAR_8);

    default:

      FUNC_8 ();
   }
}
