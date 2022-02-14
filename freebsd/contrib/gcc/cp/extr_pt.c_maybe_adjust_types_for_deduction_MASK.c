
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unification_kind_t ;
typedef int tree ;


 scalar_t__ VAR_0 ;



 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;

__attribute__((used)) static int
FUNC_5 (unification_kind_t VAR_4,
      tree* VAR_5,
      tree* VAR_6)
{
  int VAR_7 = 0;

  switch (VAR_4)
    {
    case 130:
      break;

    case 129:
      {



 tree* VAR_8 = VAR_5;
 VAR_5 = VAR_6;
 VAR_6 = VAR_8;
 break;
      }

    case 128:

      return 0;

    default:
      FUNC_4 ();
    }

  if (FUNC_0 (*VAR_5) != VAR_2)
    {
      if (FUNC_0 (*VAR_6) == VAR_0)
 *VAR_6 = FUNC_3 (FUNC_1 (*VAR_6));
      else if (FUNC_0 (*VAR_6) == VAR_1)
 *VAR_6 = FUNC_3 (*VAR_6);
      else
 *VAR_6 = FUNC_2 (*VAR_6);
    }







  *VAR_5 = FUNC_2 (*VAR_5);
  if (FUNC_0 (*VAR_5) == VAR_2)
    {
      *VAR_5 = FUNC_1 (*VAR_5);
      VAR_7 |= VAR_3;
    }



  if (VAR_4 == 129 && FUNC_0 (*VAR_6) == VAR_2)
    *VAR_6 = FUNC_1 (*VAR_6);

  return VAR_7;
}
