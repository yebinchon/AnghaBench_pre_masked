
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char const*,char const**) ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(const char* VAR_3, uint8_t* VAR_4, size_t* VAR_5)
{
 const char* VAR_6;
 uint32_t VAR_7 = FUNC_1(VAR_3, &VAR_6);
 if(*VAR_6 != 0)
  return FUNC_0(VAR_2, VAR_6-VAR_3);
 if(*VAR_5 < 4)
  return VAR_0;
 FUNC_2(VAR_4, VAR_7);
 *VAR_5 = 4;
 return VAR_1;
}
