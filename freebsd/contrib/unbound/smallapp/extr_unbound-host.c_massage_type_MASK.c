
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (char const*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int
FUNC_5(const char* VAR_3, int VAR_4, int* VAR_5)
{
 if(VAR_3) {
  int VAR_6 = FUNC_2(VAR_3);
  if(VAR_6 == 0 && FUNC_3(VAR_3, "TYPE0") != 0 &&
   FUNC_4(VAR_3, "") != 0) {
   FUNC_1(VAR_2, "error unknown type %s\n", VAR_3);
   FUNC_0(1);
  }
  return VAR_6;
 }
 if(!VAR_3 && VAR_4)
  return VAR_1;
 *VAR_5 = 1;
 return VAR_0;
}
