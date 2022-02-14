
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

int FUNC_3(const char* VAR_3, uint8_t* VAR_4, size_t* VAR_5)
{
 uint16_t VAR_6 = FUNC_0(VAR_3);
 if(VAR_6 == 0 && FUNC_2(VAR_3, "CLASS0") != 0)
  return VAR_2;
 if(*VAR_5 < 2)
  return VAR_0;
 FUNC_1(VAR_4, VAR_6);
 *VAR_5 = 2;
 return VAR_1;
}
