
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_2)
{
 if (!VAR_2)
  return -VAR_0;
 if (FUNC_1(VAR_2, "off") == 0)
  FUNC_0();
 else if (FUNC_1(VAR_2, "on") == 0)
  VAR_1 = 1;
 else
  return -VAR_0;
 return 0;
}
