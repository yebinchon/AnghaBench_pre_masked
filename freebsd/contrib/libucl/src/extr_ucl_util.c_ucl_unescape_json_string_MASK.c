
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;

size_t
FUNC_1 (char *VAR_0, size_t VAR_1)
{
 char *VAR_2 = VAR_0, *VAR_3 = VAR_0;
 int VAR_4, VAR_5;

 if (VAR_1 <= 1) {
  return VAR_1;
 }


 while (VAR_1) {
  if (*VAR_3 == '\\') {
   VAR_3 ++;

   if (VAR_1 == 1) {




    VAR_1 --;
    *VAR_2++ = '\\';
    continue;
   }

   switch (*VAR_3) {
   case 'n':
    *VAR_2++ = '\n';
    break;
   case 'r':
    *VAR_2++ = '\r';
    break;
   case 'b':
    *VAR_2++ = '\b';
    break;
   case 't':
    *VAR_2++ = '\t';
    break;
   case 'f':
    *VAR_2++ = '\f';
    break;
   case '\\':
    *VAR_2++ = '\\';
    break;
   case '"':
    *VAR_2++ = '"';
    break;
   case 'u':

    VAR_5 = 0;
    VAR_3 ++;
    VAR_1 --;

    if (VAR_1 > 3) {
     for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
      VAR_5 <<= 4;
      if (FUNC_0 (VAR_3[VAR_4])) {
       VAR_5 += VAR_3[VAR_4] - '0';
      }
      else if (VAR_3[VAR_4] >= 'a' && VAR_3[VAR_4] <= 'f') {
       VAR_5 += VAR_3[VAR_4] - 'a' + 10;
      }
      else if (VAR_3[VAR_4] >= 'A' && VAR_3[VAR_4] <= 'F') {
       VAR_5 += VAR_3[VAR_4] - 'A' + 10;
      }
      else {
       break;
      }
     }


     if(VAR_5 < 0x80) {
      VAR_2[0] = (char)VAR_5;
      VAR_2 ++;
     }
     else if(VAR_5 < 0x800) {
      VAR_2[0] = 0xC0 + ((VAR_5 & 0x7C0) >> 6);
      VAR_2[1] = 0x80 + ((VAR_5 & 0x03F));
      VAR_2 += 2;
     }
     else if(VAR_5 < 0x10000) {
      VAR_2[0] = 0xE0 + ((VAR_5 & 0xF000) >> 12);
      VAR_2[1] = 0x80 + ((VAR_5 & 0x0FC0) >> 6);
      VAR_2[2] = 0x80 + ((VAR_5 & 0x003F));
      VAR_2 += 3;
     }
     else {
      *VAR_2++ = '?';
     }


     VAR_3 += 4;
     VAR_1 -= 4;

     if (VAR_1 > 0) {
      VAR_1 --;
     }
     continue;
    }
    else {
     *VAR_2++ = 'u';
    }
    break;
   default:
    *VAR_2++ = *VAR_3;
    break;
   }
   VAR_3 ++;
   VAR_1 --;
  }
  else {
   *VAR_2++ = *VAR_3++;
  }

  if (VAR_1 > 0) {
   VAR_1 --;
  }
 }
 *VAR_2 = '\0';

 return (VAR_2 - VAR_0);
}
