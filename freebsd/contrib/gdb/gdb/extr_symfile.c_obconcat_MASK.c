
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obstack {int dummy; } ;


 scalar_t__ FUNC_0 (struct obstack*,int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*) ;

char *
FUNC_4 (struct obstack *VAR_0, const char *VAR_1, const char *VAR_2,
   const char *VAR_3)
{
  int VAR_4 = FUNC_3 (VAR_1) + FUNC_3 (VAR_2) + FUNC_3 (VAR_3) + 1;
  char *VAR_5 = (char *) FUNC_0 (VAR_0, VAR_4);
  FUNC_2 (VAR_5, VAR_1);
  FUNC_1 (VAR_5, VAR_2);
  FUNC_1 (VAR_5, VAR_3);
  return VAR_5;
}
