
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (char const*,size_t,scalar_t__*,size_t) ;
 size_t FUNC_2 (char const*) ;

int FUNC_3(const char* VAR_3, uint8_t* VAR_4, size_t* VAR_5)
{
 size_t VAR_6 = FUNC_2(VAR_3);
 size_t VAR_7 = FUNC_0(VAR_6);
 int VAR_8;
 if(*VAR_5 < 1+VAR_7)
  return VAR_0;
 VAR_4[0] = (uint8_t)VAR_7;
 VAR_8 = FUNC_1(VAR_3, VAR_6, VAR_4+1, *VAR_5-1);
 if(VAR_8 < 0)
  return VAR_2;
 *VAR_5 = (size_t)VAR_8+1;
 return VAR_1;
}
