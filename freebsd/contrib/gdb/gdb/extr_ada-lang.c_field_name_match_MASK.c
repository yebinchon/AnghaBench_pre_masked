
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3 (const char *VAR_0, const char *VAR_1)
{
  int VAR_2 = FUNC_2 (VAR_1);
  return
    FUNC_1 (VAR_0, VAR_1, VAR_2)
    && (VAR_0[VAR_2] == '\0'
 || (FUNC_1 (VAR_0 + VAR_2, "___", 3)
     && !FUNC_0 (VAR_0 + FUNC_2 (VAR_0) - 6, "___XVN")));
}
