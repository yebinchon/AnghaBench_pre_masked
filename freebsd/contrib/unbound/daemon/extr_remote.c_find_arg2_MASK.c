
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RES ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,char*) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static int
FUNC_3(RES* VAR_0, char* VAR_1, char** VAR_2)
{
 char* VAR_3 = FUNC_2(VAR_1, ' ');
 char* VAR_4 = FUNC_2(VAR_1, '\t');
 if(VAR_3 && VAR_4) {
  if(VAR_4 < VAR_3)
   VAR_3 = VAR_4;
  VAR_3[0]=0;
  *VAR_2 = FUNC_0(VAR_3+1);
 } else if(VAR_3) {
  VAR_3[0]=0;
  *VAR_2 = FUNC_0(VAR_3+1);
 } else if(VAR_4) {
  VAR_4[0]=0;
  *VAR_2 = FUNC_0(VAR_4+1);
 } else {
  FUNC_1(VAR_0, "error could not find next argument "
   "after %s\n", VAR_1);
  return 0;
 }
 return 1;
}
