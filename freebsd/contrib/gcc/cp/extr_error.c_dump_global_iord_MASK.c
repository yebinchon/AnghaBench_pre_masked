
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char const*,int ) ;

__attribute__((used)) static void
FUNC_5 (tree VAR_2)
{
  const char *VAR_3 = ((void*)0);

  if (FUNC_0 (VAR_2))
    VAR_3 = "initializers";
  else if (FUNC_1 (VAR_2))
    VAR_3 = "destructors";
  else
    FUNC_2 ();

  FUNC_4 (FUNC_3 (VAR_0), "(static %s for %s)", VAR_3, VAR_1);
}
