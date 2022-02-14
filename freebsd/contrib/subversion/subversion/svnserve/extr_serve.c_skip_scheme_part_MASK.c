
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_0)
{
  if (FUNC_1(VAR_0, "svn", 3) != 0)
    return ((void*)0);
  VAR_0 += 3;
  if (*VAR_0 == '+')
    VAR_0 += FUNC_0(VAR_0, ":");
  if (FUNC_1(VAR_0, "://", 3) != 0)
    return ((void*)0);
  return VAR_0 + 3;
}
