
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int) ;

char *
FUNC_3(char *VAR_0, char *VAR_1, char *VAR_2, char *VAR_3)
{
  int VAR_4 = FUNC_1(VAR_1);
  int VAR_5 = FUNC_1(VAR_2);
  int VAR_6 = FUNC_1(VAR_3);

  VAR_0 = (char *) FUNC_2(VAR_0, VAR_4 + VAR_5 + VAR_6 + 1);
  FUNC_0(VAR_0, VAR_1, VAR_4);
  FUNC_0(VAR_0 + VAR_4, VAR_2, VAR_5);
  FUNC_0(VAR_0 + VAR_4 + VAR_5, VAR_3, VAR_6 + 1);
  return VAR_0;
}
