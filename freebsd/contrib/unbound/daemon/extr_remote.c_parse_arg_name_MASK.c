
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int nm ;
typedef int RES ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,size_t*) ;
 int * FUNC_2 (int *,size_t) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int *,size_t*) ;
 int FUNC_5 (int *,char*,...) ;

__attribute__((used)) static int
FUNC_6(RES* VAR_1, char* VAR_2, uint8_t** VAR_3, size_t* VAR_4, int* VAR_5)
{
 uint8_t VAR_6[VAR_0+1];
 size_t VAR_7 = sizeof(VAR_6);
 int VAR_8;
 *VAR_3 = ((void*)0);
 *VAR_4 = 0;
 *VAR_5 = 0;
 VAR_8 = FUNC_4(VAR_2, VAR_6, &VAR_7);
 if(VAR_8 != 0) {
  FUNC_5(VAR_1, "error cannot parse name %s at %d: %s\n", VAR_2,
   FUNC_0(VAR_8),
   FUNC_3(VAR_8));
  return 0;
 }
 *VAR_3 = FUNC_2(VAR_6, VAR_7);
 if(!*VAR_3) {
  FUNC_5(VAR_1, "error out of memory\n");
  return 0;
 }
 *VAR_5 = FUNC_1(*VAR_3, VAR_4);
 return 1;
}
