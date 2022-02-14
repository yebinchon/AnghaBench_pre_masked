
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (char*,char**,int) ;

int FUNC_4(const char* VAR_3, uint8_t* VAR_4, size_t* VAR_5)
{
 char* VAR_6;
 uint64_t VAR_7 = (uint64_t)FUNC_3((char*)VAR_3, &VAR_6, 10);
 uint16_t VAR_8;
 uint32_t VAR_9;
 if(*VAR_6 != 0)
  return FUNC_0(VAR_2, VAR_6-VAR_3);
 if(*VAR_5 < 6)
  return VAR_0;
 VAR_8 = (uint16_t)(VAR_7>>32);
 VAR_9 = (uint32_t)(VAR_7);
 FUNC_1(VAR_4, VAR_8);
 FUNC_2(VAR_4+2, VAR_9);
 *VAR_5 = 6;
 return VAR_1;
}
