
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0)
{
  int VAR_1;

  if (!VAR_0)
    return 0;

  VAR_1 = FUNC_1(VAR_0);
  FUNC_0("%s is %son a local network", VAR_0, (VAR_1 ? "" : "not "));
  return VAR_1;
}
