
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;

__attribute__((used)) static void
FUNC_1(char *VAR_0)
{
 char *VAR_1, *VAR_2;

 VAR_1 = VAR_2 = VAR_0;

 for ( ; *VAR_1 == '_' ; VAR_1++)
  ;
 for ( ; *VAR_1 ; VAR_1++) {
  if (*VAR_1 == '_' && (*(VAR_1 + 1) == '_' || *(VAR_1 + 1) == '\0'))
   continue;
  else
   *VAR_2++ = FUNC_0(*VAR_1);
 }
 *VAR_2 = '\0';
}
