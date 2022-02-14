
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_1 ;

__attribute__((used)) static char *
FUNC_4 (FILE *VAR_2)
{
  int VAR_3;
  while ((VAR_3 = FUNC_0 (VAR_2)) != VAR_0 && VAR_3 != '\n')
    FUNC_1 (&VAR_1, VAR_3);
  if (FUNC_3 (&VAR_1) == 0)
    return ((void*)0);
  FUNC_1 (&VAR_1, '\0');
  return (char *) FUNC_2 (&VAR_1);
}
