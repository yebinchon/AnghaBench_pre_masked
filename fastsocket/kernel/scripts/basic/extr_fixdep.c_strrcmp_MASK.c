
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, char *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = FUNC_1(VAR_1);

 if (VAR_3 > VAR_2)
  return 1;

 return FUNC_0(VAR_0 + VAR_2 - VAR_3, VAR_1, VAR_3);
}
