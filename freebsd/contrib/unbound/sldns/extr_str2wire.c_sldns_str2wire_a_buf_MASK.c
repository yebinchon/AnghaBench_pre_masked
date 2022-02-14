
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct in_addr {int dummy; } ;
typedef int address ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,struct in_addr*) ;
 int FUNC_1 (int *,struct in_addr*,int) ;

int FUNC_2(const char* VAR_4, uint8_t* VAR_5, size_t* VAR_6)
{
 struct in_addr VAR_7;
 if(FUNC_0(VAR_0, (char*)VAR_4, &VAR_7) != 1)
  return VAR_3;
 if(*VAR_6 < sizeof(VAR_7))
  return VAR_1;
 FUNC_1(VAR_5, &VAR_7, sizeof(VAR_7));
 *VAR_6 = sizeof(VAR_7);
 return VAR_2;
}
