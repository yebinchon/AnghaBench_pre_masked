
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (char*,char**,int) ;
 scalar_t__ FUNC_3 (char*,char**,int) ;

int FUNC_4(const char* VAR_6, uint8_t* VAR_7, size_t* VAR_8)
{
 char* VAR_9;
 uint32_t VAR_10;
 VAR_5 = 0;

 if(*VAR_6 == '-')
  VAR_10 = (uint32_t)FUNC_2((char*)VAR_6, &VAR_9, 10);
 else VAR_10 = (uint32_t)FUNC_3((char*)VAR_6, &VAR_9, 10);
 if(*VAR_9 != 0)
  return FUNC_0(VAR_3, VAR_9-(char*)VAR_6);
 if(VAR_5 == VAR_0)
  return VAR_4;
 if(*VAR_8 < 4)
  return VAR_1;
 FUNC_1(VAR_7, VAR_10);
 *VAR_8 = 4;
 return VAR_2;
}
