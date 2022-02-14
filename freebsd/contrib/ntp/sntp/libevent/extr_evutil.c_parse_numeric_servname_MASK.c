
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0)
{
 int VAR_1;
 char *VAR_2=((void*)0);
 VAR_1 = (int) FUNC_0(VAR_0, &VAR_2, 10);
 if (VAR_1>=0 && VAR_1 <= 65535 && VAR_0[0] && VAR_2 && !VAR_2[0])
  return VAR_1;
 else
  return -1;
}
