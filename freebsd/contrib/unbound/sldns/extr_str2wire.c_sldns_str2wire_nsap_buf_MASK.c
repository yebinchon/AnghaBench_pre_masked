
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
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (int ) ;
 size_t FUNC_4 (char const*) ;

int FUNC_5(const char* VAR_6, uint8_t* VAR_7, size_t* VAR_8)
{
 const char* VAR_9 = VAR_6;
 size_t VAR_10;
 size_t VAR_11 = 0;


 if (VAR_9[0] != '0' || VAR_9[1] != 'x')
  return VAR_2;
 VAR_9 += 2;
 VAR_10 = FUNC_4(VAR_9);
 if(VAR_10 > VAR_0*2)
  return VAR_3;
 while(*VAR_9) {
  if(FUNC_1((unsigned char)*VAR_9) || *VAR_9 == '.') {
   VAR_9++;
   continue;
  }
  if(!FUNC_2((unsigned char)*VAR_9))
   return FUNC_0(VAR_5, VAR_9-VAR_6);
  if(*VAR_8 < VAR_11/2 + 1)
   return FUNC_0(VAR_1,
    VAR_9-VAR_6);
  if((VAR_11&1)==0)
   VAR_7[VAR_11/2] = (uint8_t)FUNC_3(*VAR_9++) * 16;
  else VAR_7[VAR_11/2] += FUNC_3(*VAR_9++);
  VAR_11++;
 }
 if((VAR_11&1)!=0)
  return FUNC_0(VAR_5, VAR_9-VAR_6);
 *VAR_8 = VAR_11/2;
 return VAR_4;
}
