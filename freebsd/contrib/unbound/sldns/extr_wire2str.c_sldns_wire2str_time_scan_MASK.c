
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int tm ;
struct tm {int dummy; } ;


 int FUNC_0 (struct tm*,int ,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ,struct tm*) ;
 int FUNC_3 (char**,size_t*,char*,char*) ;
 scalar_t__ FUNC_4 (char*,int,char*,struct tm*) ;
 int FUNC_5 (int *) ;

int FUNC_6(uint8_t** VAR_0, size_t* VAR_1, char** VAR_2, size_t* VAR_3)
{

 struct tm VAR_4;
 char VAR_5[16];
 uint32_t VAR_6;
 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 if(*VAR_1 < 4) return -1;
 VAR_6 = FUNC_1(*VAR_0);
 VAR_5[15]=0;
 if(FUNC_2(VAR_6, FUNC_5(((void*)0)), &VAR_4) &&
  FUNC_4(VAR_5, 15, "%Y%m%d%H%M%S", &VAR_4)) {
  (*VAR_0) += 4;
  (*VAR_1) -= 4;
  return FUNC_3(VAR_2, VAR_3, "%s", VAR_5);
 }
 return -1;
}
