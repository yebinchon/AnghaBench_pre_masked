
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,size_t) ;
 char* FUNC_1 (char const*,char) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(char *VAR_0, size_t VAR_1, const char *VAR_2)
{
 char *VAR_3;
 size_t VAR_4;

 VAR_3 = FUNC_1(VAR_2, '/');
 if (VAR_3 == ((void*)0)) {
  if ((VAR_4 = FUNC_2(VAR_2)) == 0)
   return (0);
 } else
  VAR_4 = VAR_3 - VAR_2;
 if (VAR_4 > VAR_1 -1)
  return (-1);
 FUNC_0(VAR_0, VAR_2, VAR_4);
 VAR_0[VAR_4] = '\0';

 return ((int)VAR_4);
}
