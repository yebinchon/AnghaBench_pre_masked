
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



uint32_t
FUNC_0(const char *VAR_0, const char **VAR_1)
{
 int VAR_2 = 0;
 uint32_t VAR_3 = 0;
 uint32_t VAR_4 = 0;

 for(*VAR_1 = VAR_0; **VAR_1; (*VAR_1)++) {
  switch (**VAR_1) {
   case ' ':
   case '\t':
    break;
   case '-':
    if(VAR_2 == 0) {
     VAR_2 = -1;
    } else {
     return VAR_4;
    }
    break;
   case '+':
    if(VAR_2 == 0) {
     VAR_2 = 1;
    } else {
     return VAR_4;
    }
    break;
   case 's':
   case 'S':
    VAR_4 += VAR_3;
    VAR_3 = 0;
    break;
   case 'm':
   case 'M':
    VAR_4 += VAR_3 * 60;
    VAR_3 = 0;
    break;
   case 'h':
   case 'H':
    VAR_4 += VAR_3 * 60 * 60;
    VAR_3 = 0;
    break;
   case 'd':
   case 'D':
    VAR_4 += VAR_3 * 60 * 60 * 24;
    VAR_3 = 0;
    break;
   case 'w':
   case 'W':
    VAR_4 += VAR_3 * 60 * 60 * 24 * 7;
    VAR_3 = 0;
    break;
   case '0':
   case '1':
   case '2':
   case '3':
   case '4':
   case '5':
   case '6':
   case '7':
   case '8':
   case '9':
    VAR_3 *= 10;
    VAR_3 += (**VAR_1 - '0');
    break;
   default:
    VAR_4 += VAR_3;

    return VAR_4;
  }
 }
 VAR_4 += VAR_3;

 return VAR_4;
}
