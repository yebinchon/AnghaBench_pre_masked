
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int VAR_1 ;
 char** VAR_2 ;

__attribute__((used)) static int
FUNC_4(char *VAR_3)
{

 if (FUNC_1(VAR_3)) {
  int VAR_4;

  VAR_4 = FUNC_0(VAR_3);
  return ((VAR_4 >= 0 && VAR_4 < VAR_0) ? VAR_4 : (-1));
 } else if (FUNC_2(VAR_3, "EXIT") == 0) {
  return (0);
 } else {
  int VAR_5;

  if (FUNC_3(VAR_3, "SIG", 3) == 0)
   VAR_3 += 3;
  for (VAR_5 = 1; VAR_5 < VAR_1; VAR_5++)
   if (VAR_2[VAR_5] &&
       FUNC_2(VAR_2[VAR_5], VAR_3) == 0)
    return (VAR_5);
 }
 return (-1);
}
