
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int) ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static char *
FUNC_4 (char *VAR_0, const char *VAR_1, int VAR_2)
{
  char *VAR_3;
  int VAR_4;

  if (VAR_2 == 0)
    return VAR_0;

  VAR_4 = (VAR_0 ? FUNC_2(VAR_0) : 0);
  VAR_3 = FUNC_1 (VAR_0, VAR_4 + VAR_2 + 1);
  FUNC_0 (VAR_3 + VAR_4, 0, VAR_2 + 1);
  return FUNC_3 (VAR_3, VAR_1, VAR_2);
}
