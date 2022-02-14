
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static char *
FUNC_2 (char * VAR_1)
{

  while (FUNC_0 ((unsigned char)*VAR_1))
    VAR_1++;


  {
    char * VAR_2 = VAR_1 + FUNC_1 (VAR_1);
    while ((VAR_2 > VAR_1) && FUNC_0 ((unsigned char)VAR_2[-1]))
      VAR_2--;
    *VAR_2 = VAR_0;
  }

  return VAR_1;
}
