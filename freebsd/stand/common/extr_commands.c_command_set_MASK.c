
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char*,char const*,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(int VAR_4, char *VAR_5[])
{
 int VAR_6;

 if (VAR_4 != 2) {
  VAR_3 = "wrong number of arguments";
  return (VAR_0);
 } else {
  if ((VAR_6 = FUNC_1(VAR_5[1])) != 0) {
   VAR_3 = FUNC_2(VAR_6);
   return (VAR_0);
  }
 }
 return (VAR_1);
}
