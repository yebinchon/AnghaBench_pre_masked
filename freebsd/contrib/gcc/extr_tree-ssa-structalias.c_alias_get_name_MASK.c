
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char**,char*,char const*,...) ;
 int VAR_1 ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int ) ;
 char* FUNC_8 (char*) ;

__attribute__((used)) static const char *
FUNC_9 (tree VAR_2)
{
  const char *VAR_3 = FUNC_7 (VAR_2);
  char *VAR_4;
  int VAR_5 = 0;

  if (VAR_3 != ((void*)0))
    return VAR_3;

  VAR_3 = "NULL";
  if (!VAR_1)
    return VAR_3;

  if (FUNC_4 (VAR_2) == VAR_0)
    {
      VAR_5 = FUNC_5 (&VAR_4, "%s_%u",
         FUNC_9 (FUNC_2 (VAR_2)),
         FUNC_3 (VAR_2));
    }
  else if (FUNC_0 (VAR_2))
    {
      VAR_5 = FUNC_5 (&VAR_4, "D.%s", FUNC_1 (VAR_2));
    }
  if (VAR_5 > 0)
    {
      VAR_3 = FUNC_8 (VAR_4);
      FUNC_6 (VAR_4);
    }
  return VAR_3;
}
