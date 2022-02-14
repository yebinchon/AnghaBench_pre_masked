
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (char const*,char*) ;

__attribute__((used)) static int
FUNC_1 (const char *VAR_0, const char *VAR_1)
{
  int VAR_2, VAR_3;


  VAR_2 = (FUNC_0 (VAR_0, "short") != ((void*)0));
  VAR_3 = (FUNC_0 (VAR_1, "short") != ((void*)0));
  if (VAR_2 && VAR_3)
    return 1;
  if (VAR_2 || VAR_3)
    return 0;


  VAR_2 = (FUNC_0 (VAR_0, "long") != ((void*)0));
  VAR_3 = (FUNC_0 (VAR_1, "long") != ((void*)0));
  if (VAR_2 && VAR_3)
    return 1;
  if (VAR_2 || VAR_3)
    return 0;


  VAR_2 = (FUNC_0 (VAR_0, "char") != ((void*)0));
  VAR_3 = (FUNC_0 (VAR_1, "char") != ((void*)0));
  if (VAR_2 && VAR_3)
    return 1;
  if (VAR_2 || VAR_3)
    return 0;


  return 1;
}
