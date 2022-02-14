
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int FUNC_1 (char const*,int,char*,char const*,...) ;
 scalar_t__ FUNC_2 (char const*,int,char const*,char const*,int) ;

int
FUNC_3(const char *VAR_0, int VAR_1,
    const char *VAR_2, const char *VAR_3, int VAR_4)
{
 if (FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4))
  return (1);
 if (VAR_3)
  FUNC_1(VAR_0, VAR_1, "File %s is not a symlink to %s",
      VAR_2, VAR_3);
 else
  FUNC_1(VAR_0, VAR_1, "File %s is not a symlink", VAR_2);
 FUNC_0(((void*)0));
 return (0);
}
