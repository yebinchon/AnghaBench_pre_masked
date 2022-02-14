
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;



 int VAR_0 ;


 int VAR_1 ;


 int VAR_2 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_9 (int ) ;

tree
FUNC_10 (tree VAR_4, tree VAR_5)
{
  tree VAR_6 = FUNC_2 (VAR_4);

  switch (FUNC_0 (FUNC_2 (VAR_5)))
    {
    case 129:
    case 131:
    case 132:
    case 134:
      return FUNC_4 (VAR_0, VAR_4, FUNC_5 (VAR_6, VAR_5),
       FUNC_5 (VAR_6, VAR_3));

    case 133:
      {
 tree VAR_7 = FUNC_2 (FUNC_2 (VAR_5));

 if (FUNC_3 (VAR_7) == FUNC_3 (VAR_6))
   return VAR_5;
 else if (FUNC_0 (VAR_5) == VAR_0)
   return FUNC_8 (VAR_0, VAR_4,
         FUNC_5 (VAR_6, FUNC_1 (VAR_5, 0)),
         FUNC_5 (VAR_6, FUNC_1 (VAR_5, 1)));
 else
   {
     VAR_5 = FUNC_9 (VAR_5);
     return
       FUNC_8 (VAR_0, VAR_4,
      FUNC_5 (VAR_6,
        FUNC_7 (VAR_2,
       FUNC_2 (FUNC_2 (VAR_5)),
       VAR_5)),
      FUNC_5 (VAR_6,
        FUNC_7 (VAR_1,
       FUNC_2 (FUNC_2 (VAR_5)),
       VAR_5)));
   }
      }

    case 130:
    case 128:
      FUNC_6 ("pointer value used where a complex was expected");
      return FUNC_10 (VAR_4, VAR_3);

    default:
      FUNC_6 ("aggregate value used where a complex was expected");
      return FUNC_10 (VAR_4, VAR_3);
    }
}
