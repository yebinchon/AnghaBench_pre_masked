
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int FUNC_0 (char*,char const*,int) ;
 unsigned int VAR_0 ;
 char* FUNC_1 (struct type*,int) ;
 unsigned int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static unsigned int
FUNC_5 (struct type *VAR_1, int VAR_2)
{
  const char *VAR_3 = FUNC_1 (VAR_1, VAR_2);
  int VAR_4 = (VAR_3 == ((void*)0)) ? 0 : FUNC_4 (VAR_3);
  int VAR_5;

  if (VAR_4 < 8 || !FUNC_3 (VAR_3[VAR_4 - 1]))
    return VAR_0;

  if (FUNC_3 (VAR_3[VAR_4 - 2]))
    VAR_5 = VAR_4 - 2;
  else
    VAR_5 = VAR_4 - 1;

  if (VAR_5 < 7 || !FUNC_0 ("___XV", VAR_3 + VAR_5 - 6, 5))
    return VAR_0;

  return FUNC_2 (VAR_3 + VAR_5) * VAR_0;
}
