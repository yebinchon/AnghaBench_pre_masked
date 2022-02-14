
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef scalar_t__ TYPE_VALUES ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int ,int) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,int ) ;
 int VAR_5 ;

tree
FUNC_8 (tree VAR_6)
{
  tree VAR_7;

  FUNC_3 (FUNC_0 (VAR_6) == VAR_1);





  VAR_7 = FUNC_4 (VAR_3, VAR_6,
                     VAR_5,
                             0);

  if (VAR_7 != VAR_2 && FUNC_0 (VAR_7) == VAR_0)
    {
      FUNC_2 ("multiple definition of %q#T", VAR_7);
      FUNC_2 ("%Jprevious definition here", FUNC_1 (VAR_7));

      TYPE_VALUES (VAR_8) = VAR_2;
    }
  else
    {


      if (VAR_7 == VAR_4)
 VAR_6 = FUNC_5 ();

      VAR_7 = FUNC_6 (VAR_0);
      VAR_7 = FUNC_7 (VAR_6, VAR_7, VAR_5);
    }

  return VAR_7;
}
