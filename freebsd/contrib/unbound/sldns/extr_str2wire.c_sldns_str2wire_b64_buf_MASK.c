
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int *,size_t) ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*) ;

int FUNC_4(const char* VAR_3, uint8_t* VAR_4, size_t* VAR_5)
{
 size_t VAR_6 = FUNC_1(FUNC_3(VAR_3));
 int VAR_7;
 if(FUNC_2(VAR_3, "0") == 0) {
  *VAR_5 = 0;
  return VAR_1;
 }
 if(*VAR_5 < VAR_6)
  return VAR_0;
 VAR_7 = FUNC_0(VAR_3, VAR_4, *VAR_5);
 if(VAR_7 < 0)
  return VAR_2;
 *VAR_5 = (size_t)VAR_7;
 return VAR_1;
}
