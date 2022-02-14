
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 size_t FUNC_0 (size_t) ;

int FUNC_1(uint8_t const *VAR_0, size_t VAR_1,
 char *VAR_2, size_t VAR_3)
{
 const char* VAR_4 =
 "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
 const char VAR_5 = '=';
 size_t VAR_6 = 0, VAR_7 = 0;
 if(VAR_3 < FUNC_0(VAR_1))
  return -1;

 while(VAR_6+3 <= VAR_1) {
  if(VAR_7+4 > VAR_3) return -1;
  VAR_2[VAR_7] = VAR_4[VAR_0[VAR_6] >> 2];
  VAR_2[VAR_7+1] = VAR_4[ ((VAR_0[VAR_6]&0x03)<<4) | (VAR_0[VAR_6+1]>>4) ];
  VAR_2[VAR_7+2] = VAR_4[ ((VAR_0[VAR_6+1]&0x0f)<<2) | (VAR_0[VAR_6+2]>>6) ];
  VAR_2[VAR_7+3] = VAR_4[ (VAR_0[VAR_6+2]&0x3f) ];
  VAR_6 += 3;
  VAR_7 += 4;
 }

 switch(VAR_1 - VAR_6) {
 case 2:

  VAR_2[VAR_7] = VAR_4[VAR_0[VAR_6] >> 2];
  VAR_2[VAR_7+1] = VAR_4[ ((VAR_0[VAR_6]&0x03)<<4) | (VAR_0[VAR_6+1]>>4) ];
  VAR_2[VAR_7+2] = VAR_4[ ((VAR_0[VAR_6+1]&0x0f)<<2) ];
  VAR_2[VAR_7+3] = VAR_5;

  VAR_7 += 4;
  break;
 case 1:

  VAR_2[VAR_7] = VAR_4[VAR_0[VAR_6] >> 2];
  VAR_2[VAR_7+1] = VAR_4[ ((VAR_0[VAR_6]&0x03)<<4) ];
  VAR_2[VAR_7+2] = VAR_5;
  VAR_2[VAR_7+3] = VAR_5;

  VAR_7 += 4;
  break;
 case 0:
 default:

  break;
 }

 if(VAR_7+1 > VAR_3) return -1;
 VAR_2[VAR_7] = 0;
 return (int)VAR_7;
}
