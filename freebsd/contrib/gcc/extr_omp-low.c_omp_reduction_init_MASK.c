
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int REAL_VALUE_TYPE ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;




 int VAR_0 ;

 int FUNC_2 (int ) ;

 int FUNC_3 (int ) ;





 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (int *,int ,int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int,int ) ;

tree
FUNC_14 (tree VAR_4, tree VAR_5)
{
  switch (FUNC_2 (VAR_4))
    {
    case 133:
    case 137:
    case 141:
    case 140:
    case 129:
    case 130:
    case 128:
    case 134:
      return FUNC_8 (VAR_5, VAR_3);

    case 135:
    case 131:
    case 132:
    case 139:
      return FUNC_8 (VAR_5, VAR_2);

    case 142:
      return FUNC_8 (VAR_5, VAR_1);

    case 138:
      if (FUNC_3 (VAR_5))
 {
   REAL_VALUE_TYPE VAR_6, VAR_7;
   if (FUNC_0 (FUNC_6 (VAR_5)))
     {
       FUNC_12 (&VAR_6);
       FUNC_11 (&VAR_7, VAR_0, &VAR_6, ((void*)0));
     }
   else
     FUNC_13 (&VAR_7, 1, FUNC_6 (VAR_5));
   return FUNC_7 (VAR_5, VAR_7);
 }
      else
 {
   FUNC_9 (FUNC_1 (VAR_5));
   return FUNC_5 (VAR_5);
 }

    case 136:
      if (FUNC_3 (VAR_5))
 {
   REAL_VALUE_TYPE VAR_8;
   if (FUNC_0 (FUNC_6 (VAR_5)))
     FUNC_12 (&VAR_8);
   else
     FUNC_13 (&VAR_8, 0, FUNC_6 (VAR_5));
   return FUNC_7 (VAR_5, VAR_8);
 }
      else
 {
   FUNC_9 (FUNC_1 (VAR_5));
   return FUNC_4 (VAR_5);
 }

    default:
      FUNC_10 ();
    }
}
