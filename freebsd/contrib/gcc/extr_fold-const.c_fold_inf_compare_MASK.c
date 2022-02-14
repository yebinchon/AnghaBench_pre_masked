
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_3__ {int (* global_bindings_p ) () ;} ;
struct TYPE_4__ {TYPE_1__ decls; } ;
typedef int REAL_VALUE_TYPE ;


 int FUNC_0 (int ) ;



 int FUNC_1 (int) ;
 int FUNC_2 (int) ;



 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int const,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int *,int,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int) ;

__attribute__((used)) static tree
FUNC_15 (enum tree_code VAR_6, tree VAR_7, tree VAR_8, tree VAR_9)
{
  enum machine_mode VAR_10;
  REAL_VALUE_TYPE VAR_11;
  tree VAR_12;
  bool VAR_13;

  VAR_10 = FUNC_6 (FUNC_5 (VAR_8));


  VAR_13 = FUNC_3 (FUNC_4 (VAR_9));
  if (VAR_13)
    VAR_6 = FUNC_14 (VAR_6);

  switch (VAR_6)
    {
    case 131:

      if (FUNC_2 (VAR_10))
        return VAR_0;
      return FUNC_10 (VAR_7, VAR_4, VAR_8);

    case 130:

      if (! FUNC_1 (VAR_10))
 return FUNC_10 (VAR_7, VAR_3, VAR_8);


      if (VAR_5.decls.global_bindings_p () == 0
   && ! FUNC_0 (VAR_8))
 {
   VAR_8 = FUNC_12 (VAR_8);
   return FUNC_9 (133, VAR_7, VAR_8, VAR_8);
 }
      break;

    case 133:
    case 132:

      FUNC_11 (&VAR_11, VAR_13, VAR_10);
      return FUNC_9 (VAR_13 ? 129 : 131, VAR_7,
     VAR_8, FUNC_7 (FUNC_5 (VAR_8), VAR_11));

    case 129:

      FUNC_11 (&VAR_11, VAR_13, VAR_10);
      return FUNC_9 (VAR_13 ? 132 : 130, VAR_7,
     VAR_8, FUNC_7 (FUNC_5 (VAR_8), VAR_11));

    case 128:

      FUNC_11 (&VAR_11, VAR_13, VAR_10);
      if (! FUNC_1 (VAR_10))
 return FUNC_9 (VAR_13 ? 132 : 130, VAR_7,
       VAR_8, FUNC_7 (FUNC_5 (VAR_8), VAR_11));



      if (VAR_2)
 return VAR_0;

      VAR_12 = FUNC_9 (VAR_13 ? 129 : 131, VAR_7,
     VAR_8, FUNC_7 (FUNC_5 (VAR_8), VAR_11));
      return FUNC_8 (VAR_1, VAR_7, VAR_12);

    default:
      break;
    }

  return VAR_0;
}
