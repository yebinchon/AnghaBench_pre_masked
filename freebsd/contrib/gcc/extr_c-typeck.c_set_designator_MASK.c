
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_2__ {scalar_t__ implicit; } ;




 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9 (int VAR_8)
{
  tree VAR_9;
  enum tree_code VAR_10;



  if (VAR_4 == 0)
    return 1;



  if (VAR_6)
    return 1;

  if (!VAR_5)
    {
      FUNC_4 (!VAR_2);



      while (VAR_3->implicit)
 FUNC_7 (FUNC_6 (1));
      VAR_0 = 1;
      return 0;
    }

  switch (FUNC_0 (VAR_4))
    {
    case 129:
    case 128:
      VAR_9 = FUNC_1 (VAR_1);
      if (VAR_9 != VAR_7)
 VAR_9 = FUNC_2 (VAR_9);
      break;
    case 130:
      VAR_9 = FUNC_2 (FUNC_1 (VAR_4));
      break;
    default:
      FUNC_5 ();
    }

  VAR_10 = FUNC_0 (VAR_9);
  if (VAR_8 && VAR_10 != 130)
    {
      FUNC_3 ("array index in non-array initializer");
      return 1;
    }
  else if (!VAR_8 && VAR_10 != 129 && VAR_10 != 128)
    {
      FUNC_3 ("field name not in record or union initializer");
      return 1;
    }

  VAR_0 = 1;
  FUNC_8 (2);
  return 0;
}
