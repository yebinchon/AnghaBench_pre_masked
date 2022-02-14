
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (char const*,char**) ;
 scalar_t__ FUNC_3 (char const*,char**) ;
 int VAR_0 ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static char*
FUNC_5(const char* VAR_1, int* VAR_2)
{

 char* VAR_3;
 if(FUNC_2(VAR_1, &VAR_3)) {
  *VAR_2 = 1;
 } else if(FUNC_3(VAR_1, &VAR_3)) {
  *VAR_2 = 1;
 } else {
  VAR_3 = FUNC_4(VAR_1);
 }
 if(!VAR_3) {
  FUNC_1(VAR_0, "error: out of memory\n");
  FUNC_0(1);
 }
 return VAR_3;
}
