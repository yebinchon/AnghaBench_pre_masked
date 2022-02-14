
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static tree
FUNC_8 (tree VAR_3)
{
  if (VAR_3 == VAR_1)
    return VAR_3;



  FUNC_0 (VAR_3);






  if (FUNC_2 ())
    {
      VAR_3 = FUNC_4 (VAR_3);
      FUNC_0 (VAR_3);
      VAR_3 = FUNC_6 (VAR_3);
    }

  if (FUNC_1 (VAR_3) == VAR_0)

    VAR_3 = FUNC_7 (VAR_3);
  else if (VAR_3 != VAR_2)
    {
      FUNC_5 ("case label does not reduce to an integer constant");
      VAR_3 = VAR_2;
    }

  FUNC_3 (VAR_3);

  return VAR_3;
}
