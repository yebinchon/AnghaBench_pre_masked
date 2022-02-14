
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char const*,int,int,int *) ;
 int FUNC_1 (char,int *) ;

__attribute__((used)) static void
FUNC_2 (FILE *VAR_0, char const *VAR_1)
{
  int VAR_2;
  FUNC_1 (' ', VAR_0);
  for (VAR_2 = 0; VAR_2 < 40 && VAR_1[VAR_2] != '\n'; VAR_2++)
    continue;
  FUNC_0 (VAR_1, sizeof (char), VAR_2, VAR_0);
}
