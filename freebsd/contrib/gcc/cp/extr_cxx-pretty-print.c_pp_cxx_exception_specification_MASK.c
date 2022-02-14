
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
typedef int cxx_pretty_printer ;


 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char) ;
 int FUNC_8 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_9 (cxx_pretty_printer *VAR_0, tree VAR_1)
{
  tree VAR_2 = FUNC_3 (VAR_1);

  if (!FUNC_2 (VAR_1) && VAR_2 == ((void*)0))
    return;
  FUNC_4 (VAR_0, "throw");
  FUNC_5 (VAR_0);
  for (; VAR_2 && FUNC_1 (VAR_2); VAR_2 = FUNC_0 (VAR_2))
    {
      FUNC_8 (VAR_0, FUNC_1 (VAR_2));
      if (FUNC_0 (VAR_2))
 FUNC_7 (VAR_0, ',');
    }
  FUNC_6 (VAR_0);
}
