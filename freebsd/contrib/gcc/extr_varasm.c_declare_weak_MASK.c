
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int ,char*,int ) ;
 int VAR_2 ;

void
FUNC_8 (tree VAR_3)
{
  if (! FUNC_3 (VAR_3))
    FUNC_4 ("weak declaration of %q+D must be public", VAR_3);
  else if (FUNC_2 (VAR_3) == VAR_0 && FUNC_1 (VAR_3))
    FUNC_4 ("weak declaration of %q+D must precede definition", VAR_3);
  else if (VAR_1)
    {
      if (! FUNC_0 (VAR_3))
 VAR_2 = FUNC_6 (((void*)0), VAR_3, VAR_2);
    }
  else
    FUNC_7 (0, "weak declaration of %q+D not supported", VAR_3);

  FUNC_5 (VAR_3);
}
