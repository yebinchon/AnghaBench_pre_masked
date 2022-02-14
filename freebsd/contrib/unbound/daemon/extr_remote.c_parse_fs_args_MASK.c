
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct delegpt {int dummy; } ;
typedef int RES ;


 int FUNC_0 (int *,char*,char**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int **,size_t*,int*) ;
 struct delegpt* FUNC_3 (int *,char*,int *,int) ;
 int FUNC_4 (int *,char*,char*) ;

__attribute__((used)) static int
FUNC_5(RES* VAR_0, char* VAR_1, uint8_t** VAR_2, struct delegpt** VAR_3,
 int* VAR_4, int* VAR_5)
{
 char* VAR_6;
 char* VAR_7;
 size_t VAR_8;
 int VAR_9;

 while(VAR_1[0] == '+') {
  if(!FUNC_0(VAR_0, VAR_1, &VAR_7))
   return 0;
  while(*(++VAR_1) != 0) {
   if(*VAR_1 == 'i' && VAR_4)
    *VAR_4 = 1;
   else if(*VAR_1 == 'p' && VAR_5)
    *VAR_5 = 1;
   else {
    (void)FUNC_4(VAR_0, "error: unknown option %s\n", VAR_1);
    return 0;
   }
  }
  VAR_1 = VAR_7;
 }

 if(VAR_3) {
  if(!FUNC_0(VAR_0, VAR_1, &VAR_7))
   return 0;
  VAR_6 = VAR_1;
  VAR_1 = VAR_7;
 } else VAR_6 = VAR_1;
 if(!FUNC_2(VAR_0, VAR_6, VAR_2, &VAR_8, &VAR_9))
  return 0;


 if(VAR_3) {
  if(!(*VAR_3 = FUNC_3(VAR_0, VAR_1, *VAR_2, 1))) {
   FUNC_1(*VAR_2);
   return 0;
  }
 }
 return 1;
}
