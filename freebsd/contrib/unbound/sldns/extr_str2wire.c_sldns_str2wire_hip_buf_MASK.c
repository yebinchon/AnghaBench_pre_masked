
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,scalar_t__*,size_t*) ;
 int FUNC_3 (char*,scalar_t__*,size_t*) ;
 int FUNC_4 (scalar_t__*,int ) ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (char*,char**,int) ;

int FUNC_7(const char* VAR_5, uint8_t* VAR_6, size_t* VAR_7)
{
 char* VAR_8, *VAR_9;
 int VAR_10;
 size_t VAR_11, VAR_12 = 0;




 if(*VAR_7 < 4)
  return VAR_0;


 VAR_6[1] = (uint8_t)FUNC_6((char*)VAR_5, &VAR_8, 10);
 if(*VAR_8 != ' ')
  return FUNC_0(VAR_4, VAR_8-(char*)VAR_5);
 VAR_8++;
 while(*VAR_8 == ' ')
  VAR_8++;



 VAR_9 = FUNC_5(VAR_8, ' ');
 if(!VAR_9) return FUNC_0(VAR_3, VAR_8-(char*)VAR_5);
 *VAR_9 = 0;
 VAR_11 = *VAR_7 - 4;
 if((VAR_10 = FUNC_3(VAR_8, VAR_6+4, &VAR_11)) != 0) {
  *VAR_9 = ' ';
  return FUNC_1(VAR_10, VAR_8-(char*)VAR_5);
 }
 if(VAR_11 > 255) {
  *VAR_9 = ' ';
  return FUNC_0(VAR_1, VAR_8-(char*)VAR_5+255*2);
 }
 VAR_6[0] = (uint8_t)VAR_11;
 *VAR_9 = ' ';
 VAR_8 = VAR_9+1;


 VAR_12 = *VAR_7 - 4 - VAR_11;
 if((VAR_10 = FUNC_2(VAR_8, VAR_6+4+VAR_11, &VAR_12)) != 0)
  return FUNC_1(VAR_10, VAR_8-(char*)VAR_5);
 if(VAR_12 > 65535)
  return FUNC_0(VAR_1, VAR_8-(char*)VAR_5+65535);
 FUNC_4(VAR_6+2, (uint16_t)VAR_12);

 *VAR_7 = 4 + VAR_11 + VAR_12;
 return VAR_2;
}
