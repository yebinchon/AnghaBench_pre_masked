
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 char** VAR_3 ;

__attribute__((used)) static int
FUNC_3(void)
{
 char *VAR_4;
 int VAR_5;

 if (VAR_1 == 1)
  return 1;
 VAR_4 = *(VAR_3 + 1);
 if (VAR_1 == 2)
  return VAR_2 == 1 && FUNC_2(VAR_4, ")") == 0;
 if (VAR_1 != 3)
  return 0;
 VAR_5 = FUNC_1(VAR_4);
 return FUNC_0(VAR_5) == VAR_0;
}
