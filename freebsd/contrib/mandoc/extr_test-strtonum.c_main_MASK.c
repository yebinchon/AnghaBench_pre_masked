
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int,char const**) ;

int
FUNC_1(void)
{
 const char *VAR_0;

 if (FUNC_0("1", 0, 2, &VAR_0) != 1)
  return 1;
 if (VAR_0 != ((void*)0))
  return 2;
 if (FUNC_0("1x", 0, 2, &VAR_0) != 0)
  return 3;
 if (VAR_0 == ((void*)0))
  return 4;
 if (FUNC_0("2", 0, 1, &VAR_0) != 0)
  return 5;
 if (VAR_0 == ((void*)0))
  return 6;
 if (FUNC_0("0", 1, 2, &VAR_0) != 0)
  return 7;
 if (VAR_0 == ((void*)0))
  return 8;
 return 0;
}
