
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;






 int VAR_0 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_1 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 int VAR_2 ;
 int FUNC_9 (int ,int ,int ) ;

tree
FUNC_10 (tree VAR_3)
{
  switch (FUNC_0 (VAR_3))
    {
    case 133: case 134: case 136:
    case 131: case 129:
    case 132:
      return FUNC_4 (VAR_3, 1);

    case 130:
      return FUNC_5 (VAR_3, VAR_1);

    case 128:
      {
 tree VAR_4, VAR_5;
 int VAR_6;

 VAR_4 = FUNC_10 (FUNC_1 (VAR_3));


 VAR_5 = VAR_0;
 for (VAR_6 = FUNC_2 (VAR_3); --VAR_6 >= 0; )
   VAR_5 = FUNC_9 (VAR_0, VAR_4, VAR_5);

 return FUNC_6 (VAR_3, VAR_5);
      }

    case 135:
      return FUNC_3 (VAR_3,
       FUNC_10 (FUNC_1 (VAR_3)),
       FUNC_7 (FUNC_1 (VAR_3), VAR_2));

    default:
      FUNC_8 ();
    }
}
