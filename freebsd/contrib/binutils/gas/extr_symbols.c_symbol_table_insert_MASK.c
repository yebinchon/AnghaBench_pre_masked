
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbolS ;
typedef int PTR ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *,char const*) ;
 char* FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_6 (symbolS *VAR_2)
{
  register const char *VAR_3;

  FUNC_5 (VAR_2);
  FUNC_5 (FUNC_1 (VAR_2));

  if (FUNC_0 (VAR_2))
    {
      VAR_3 = FUNC_4 (VAR_0, FUNC_1 (VAR_2),
          (PTR) VAR_2);
      if (VAR_3 != ((void*)0))
 FUNC_3 (FUNC_2("inserting \"%s\" into symbol table failed: %s"),
    FUNC_1 (VAR_2), VAR_3);
      return;
    }

  if ((VAR_3 = FUNC_4 (VAR_1, FUNC_1 (VAR_2), (PTR) VAR_2)))
    {
      FUNC_3 (FUNC_2("inserting \"%s\" into symbol table failed: %s"),
  FUNC_1 (VAR_2), VAR_3);
    }
}
