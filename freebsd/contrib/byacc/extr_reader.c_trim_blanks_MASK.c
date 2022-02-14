
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(char *VAR_0)
{
    if (*VAR_0 != '\0')
    {
 char *VAR_1 = VAR_0;
 char *VAR_2 = FUNC_1(VAR_1);

 while ((*VAR_1++ = *VAR_2++) != '\0')
 {
     ;
 }

 --VAR_1;
 while ((--VAR_1 != VAR_0) && FUNC_2(FUNC_0(*VAR_1)))
     *VAR_1 = '\0';

 for (VAR_2 = VAR_1 = VAR_0; (*VAR_1++ = *VAR_2++) != '\0';)
 {
     if (FUNC_2(FUNC_0(*VAR_2)))
     {
  *VAR_2 = ' ';
  while (FUNC_2(FUNC_0(*VAR_2)))
  {
      *VAR_2++ = ' ';
  }
  --VAR_2;
     }
 }
    }

    return (int)FUNC_3(VAR_0) - 1;
}
