
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;

tree
FUNC_13 (tree VAR_2)
{
  switch (FUNC_2 (VAR_2))
    {
    case 128:
      {
 tree VAR_3 = FUNC_3 (VAR_2);
 tree VAR_4;


 VAR_4 = FUNC_1 (VAR_2);

 if (FUNC_2 (VAR_4) == VAR_0)
   {

     VAR_2 = FUNC_7 (VAR_4);
     while (!FUNC_11 (FUNC_0 (VAR_4),
     FUNC_4 (VAR_3)))
       {



  VAR_4 = FUNC_10 (FUNC_4 (VAR_3),
         FUNC_0 (VAR_4));
  VAR_2 = FUNC_12 (VAR_1, VAR_2, FUNC_7 (VAR_4));
       }
     VAR_2 = FUNC_9 (FUNC_5 (VAR_3, VAR_2));
   }
 else
   {
     tree VAR_5;
     tree VAR_6;

     FUNC_8 (VAR_2, &VAR_5, &VAR_6);
     VAR_2 = FUNC_6 (VAR_3, VAR_5, VAR_6);
   }
      }
      break;

    default:

      break;
    }

  return VAR_2;
}
