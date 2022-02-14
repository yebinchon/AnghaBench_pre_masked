
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (char const*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int
FUNC_5(const char* VAR_2)
{
 if(VAR_2) {
  int VAR_3 = FUNC_2(VAR_2);
  if(VAR_3 == 0 && FUNC_3(VAR_2, "CLASS0") != 0 &&
   FUNC_4(VAR_2, "") != 0) {
   FUNC_1(VAR_1, "error unknown class %s\n", VAR_2);
   FUNC_0(1);
  }
  return VAR_3;
 }
 return VAR_0;
}
