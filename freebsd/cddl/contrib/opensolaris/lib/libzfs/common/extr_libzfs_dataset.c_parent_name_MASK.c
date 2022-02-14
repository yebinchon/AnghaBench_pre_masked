
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,size_t) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, char *VAR_1, size_t VAR_2)
{
 char *VAR_3;

 (void) FUNC_0(VAR_1, VAR_0, VAR_2);

 if ((VAR_3 = FUNC_1(VAR_1, '/')) == ((void*)0))
  return (-1);
 *VAR_3 = '\0';

 return (0);
}
