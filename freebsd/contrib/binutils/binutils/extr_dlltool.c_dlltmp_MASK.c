
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char const*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static char *
FUNC_3 (char **VAR_1, const char *VAR_2)
{
  if (!*VAR_1)
    {
      *VAR_1 = FUNC_0 (FUNC_2 (VAR_0) + 64);
      FUNC_1 (*VAR_1, VAR_2, VAR_0);
    }
  return *VAR_1;
}
