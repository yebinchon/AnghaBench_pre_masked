
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (void*,size_t) ;
 int FUNC_2 (char*,char*) ;
 size_t FUNC_3 (char*) ;

__attribute__((used)) static char *
FUNC_4 (char *VAR_0, char *VAR_1)
{
  char *VAR_2;
  size_t VAR_3, VAR_4;

  VAR_4 = (VAR_1 == ((void*)0)) ? 0 : FUNC_3(VAR_1);
  if (VAR_0 == ((void*)0))
    VAR_3 = 0;
  else if (VAR_4 == 0)
    return VAR_0;
  else VAR_3 = FUNC_3(VAR_0);
  if (VAR_0 == ((void*)0))
    VAR_2 = (char *) FUNC_0(VAR_4 + 1);
  else
    VAR_2 = (char *) FUNC_1((void *) VAR_0, VAR_3 + VAR_4 + 1);
  if (VAR_2 != ((void*)0) && VAR_1 != ((void*)0))
    (void) FUNC_2(VAR_2 + VAR_3, VAR_1);
  return VAR_2;
}
