
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (int ) ;
 size_t FUNC_4 (char const*) ;

int FUNC_5(const char* VAR_5, uint8_t* VAR_6, size_t* VAR_7)
{
 const char* VAR_8 = VAR_5;
 size_t VAR_9 = FUNC_4(VAR_5);
 size_t VAR_10 = 0;



 if(VAR_9 > VAR_0*2)
  return VAR_2;
 while(*VAR_8) {
  if(FUNC_1((unsigned char)*VAR_8) || *VAR_8 == '.') {
   VAR_8++;
   continue;
  }
  if(!FUNC_2((unsigned char)*VAR_8))
   return FUNC_0(VAR_4, VAR_8-VAR_5);
  if(*VAR_7 < VAR_10/2 + 1)
   return FUNC_0(VAR_1,
    VAR_8-VAR_5);
  if((VAR_10&1)==0)
   VAR_6[VAR_10/2] = (uint8_t)FUNC_3(*VAR_8++) * 16;
  else VAR_6[VAR_10/2] += FUNC_3(*VAR_8++);
  VAR_10++;
 }
 if((VAR_10&1)!=0)
  return FUNC_0(VAR_4, VAR_8-VAR_5);
 *VAR_7 = VAR_10/2;
 return VAR_3;
}
