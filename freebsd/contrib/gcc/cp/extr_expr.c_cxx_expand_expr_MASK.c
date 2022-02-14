
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int rtx ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;



 int FUNC_0 (int ) ;

 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int,int,int *) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int,int) ;
 int FUNC_7 () ;

rtx
FUNC_8 (tree VAR_4, rtx VAR_5, enum machine_mode VAR_6, int VAR_7,
   rtx *VAR_8)
{
  tree VAR_9 = FUNC_2 (VAR_4);
  enum machine_mode VAR_10 = FUNC_3 (VAR_9);
  enum tree_code VAR_11 = FUNC_1 (VAR_4);





  if (VAR_10 != VAR_2 && VAR_7 == VAR_1)
    VAR_7 = VAR_0;

  switch (VAR_11)
    {
    case 128:
      return FUNC_6 (FUNC_5 (VAR_4),
     VAR_5, VAR_6, VAR_7);

    case 129:

      FUNC_7 ();

    case 130:

      return VAR_3;

    case 131:
      return FUNC_6 (FUNC_0 (VAR_4), VAR_5, VAR_6,
     VAR_7);

    default:
      return FUNC_4 (VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
    }
}
