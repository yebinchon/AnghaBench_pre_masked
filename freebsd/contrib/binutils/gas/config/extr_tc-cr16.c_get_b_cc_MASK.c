
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (char*,scalar_t__) ;
 unsigned int FUNC_1 (char*) ;

__attribute__((used)) static char *
FUNC_2 (char * VAR_2)
{
  unsigned int VAR_3;
  char VAR_4[5];

  for (VAR_3 = 1; VAR_3 < FUNC_1 (VAR_2); VAR_3++)
     VAR_4[VAR_3-1] = VAR_2[VAR_3];

  VAR_4[VAR_3-1] = '\0';

  for (VAR_3 = 0; VAR_3 < VAR_1 ; VAR_3++)
    if (FUNC_0 (VAR_4, VAR_0[VAR_3]))
      return (char *) VAR_0[VAR_3];

   return ((void*)0);
}
