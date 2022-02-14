
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 scalar_t__ FUNC_1 (int) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static char **
FUNC_4(char *VAR_0)
{
 int VAR_1 = 0;
 char **VAR_2 = (char **) FUNC_1(((FUNC_3(VAR_0) + 1) / 2 + 1)
      * sizeof (char *));

 if ((VAR_2[VAR_1++] = FUNC_2(VAR_0)) == ((void*)0)) {
  FUNC_0(VAR_2);
  return (((void*)0));
 }
 while ((VAR_2[VAR_1++] = FUNC_2((char *) 0)) != ((void*)0))
  continue;
 return VAR_2;
}
