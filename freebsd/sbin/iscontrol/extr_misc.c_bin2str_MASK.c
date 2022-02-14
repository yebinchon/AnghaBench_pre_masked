
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void** VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*,char) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

char *
FUNC_4(char *VAR_1, unsigned char *VAR_2, int VAR_3)
{
     int VAR_4;
     char *VAR_5, *VAR_6;
     unsigned char *VAR_7;

     if(FUNC_3(VAR_1, "0x", 2) == 0) {
   char VAR_8[5];

   VAR_4 = VAR_3 * 2;
   VAR_5 = FUNC_0(VAR_4 + 3);
   FUNC_2(VAR_5, VAR_1);
   VAR_6 = VAR_5 + 2;
   VAR_7 = VAR_2;
   FUNC_1(VAR_8, "%%02%c", VAR_1[1]);
   while(VAR_3-- > 0) {
        FUNC_1(VAR_6, VAR_8, *VAR_7++);
        VAR_6 += 2;
   }
   *VAR_6 = 0;
   return VAR_5;
     }
     if(FUNC_3(VAR_1, "0b", 2) == 0) {
   int VAR_9, VAR_10;

   VAR_4 = (VAR_3 + 2) * 4 / 3;
   VAR_5 = FUNC_0(VAR_4 + 3);
   FUNC_2(VAR_5, VAR_1);
   VAR_6 = VAR_5 + 2;
   VAR_7 = VAR_2;
   VAR_10 = 0;
   for(VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
        switch(VAR_9 % 3) {
        case 0:
      *VAR_6++ = VAR_0[*VAR_7 >> 2];
      VAR_10 = (*VAR_7 & 0x3) << 4;
      break;
        case 1:
      VAR_10 += (*VAR_7 >> 4);
      *VAR_6++ = VAR_0[VAR_10];
      VAR_10 = (*VAR_7 & 0xf) << 2;
      break;
        case 2:
      VAR_10 += (*VAR_7 >> 6);
      *VAR_6++ = VAR_0[VAR_10];
      *VAR_6++ = VAR_0[*VAR_7 & 0x3f];
        }
        VAR_7++;
   }
   switch(VAR_3 % 3) {
   case 0:
        break;
   case 1:
        *VAR_6++ = VAR_0[VAR_10];
        *VAR_6++ = '=';
        *VAR_6++ = '=';
        break;
   case 2:
        *VAR_6++ = VAR_0[VAR_10];
        *VAR_6++ = '=';
        break;
   }

   *VAR_6 = 0;
   return VAR_5;
     }

     return ((void*)0);
}
