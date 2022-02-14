
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const*) ;

int FUNC_5(const char* VAR_3, uint8_t* VAR_4, size_t* VAR_5)
{
 const char* VAR_6 = VAR_3;
 size_t VAR_7 = 0;
 while(*VAR_6) {
  if(FUNC_1((unsigned char)*VAR_6)) {
   VAR_6++;
   continue;
  }
  if(VAR_7 == 0 && *VAR_6 == '0' && FUNC_4(VAR_6+1)) {
   *VAR_5 = 0;
   return VAR_1;
  }
  if(!FUNC_2((unsigned char)*VAR_6))
   return FUNC_0(VAR_2, VAR_6-VAR_3);
  if(*VAR_5 < VAR_7/2 + 1)
   return FUNC_0(VAR_0,
    VAR_6-VAR_3);
  if((VAR_7&1)==0)
   VAR_4[VAR_7/2] = (uint8_t)FUNC_3(*VAR_6++) * 16;
  else VAR_4[VAR_7/2] += (uint8_t)FUNC_3(*VAR_6++);
  VAR_7++;
 }
 if((VAR_7&1)!=0)
  return FUNC_0(VAR_2, VAR_6-VAR_3);
 *VAR_5 = VAR_7/2;
 return VAR_1;
}
