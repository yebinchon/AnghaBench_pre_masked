
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*,char*) ;
 scalar_t__ FUNC_2 (char) ;
 char* FUNC_3 (char*,int*) ;

__attribute__((used)) static char *
FUNC_4(char *VAR_0, int *VAR_1)
{
 int VAR_2, VAR_3;

 if (*VAR_0 == '(') {
  VAR_0++;
  VAR_0 = FUNC_3(VAR_0, &VAR_2);
  if (*VAR_0++ != ',')
   FUNC_1("id", ",", VAR_0 - 1);
  VAR_0 = FUNC_3(VAR_0, &VAR_3);
  if (*VAR_0++ != ')')
   FUNC_1("id", ")", VAR_0 - 1);
  *VAR_1 = FUNC_0(VAR_2, VAR_3);
 } else if (FUNC_2(*VAR_0)) {
  VAR_0 = FUNC_3(VAR_0, &VAR_2);
  *VAR_1 = VAR_2;
 } else {
  FUNC_1("id", "(/0-9", VAR_0);
 }
 return (VAR_0);
}
