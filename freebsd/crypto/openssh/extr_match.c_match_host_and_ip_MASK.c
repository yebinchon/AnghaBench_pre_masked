
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,char const*) ;

int
FUNC_2(const char *VAR_0, const char *VAR_1,
    const char *VAR_2)
{
 int VAR_3, VAR_4;

 if ((VAR_4 = FUNC_0(VAR_1, VAR_2)) == -2)
  return -1;
 else if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_4 == -1)
  return 0;


 if ((VAR_3 = FUNC_1(VAR_0, VAR_2)) == -1)
  return 0;

 if (VAR_3 == 0 && VAR_4 == 0)
  return 0;
 return 1;
}
