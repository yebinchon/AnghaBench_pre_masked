
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 unsigned char FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

int
FUNC_5(char *VAR_0, char **VAR_1)
{
     char *VAR_2, *VAR_3, *VAR_4;
     int VAR_5, VAR_6 = 0;

     VAR_2 = VAR_0;
     VAR_4 = ((void*)0);
     if(FUNC_4("0x", VAR_2, 2) == 0) {
   VAR_2 += 2;
   VAR_6 = FUNC_3(VAR_2);

   if((VAR_4 = FUNC_2((VAR_6+1)/2)) == ((void*)0)) {

        return 0;
   }
   VAR_3 = VAR_4;
   if(VAR_6 & 1)
        *VAR_3++ = FUNC_0(*VAR_2++);
   while(*VAR_2) {
        *VAR_3 = FUNC_0(*VAR_2++) << 4;
        *VAR_3++ |= FUNC_0(*VAR_2++);
   }
   VAR_6 = VAR_3 - VAR_4;
     } else
     if(FUNC_4("0b", VAR_2 , 2) == 0) {

   unsigned char VAR_7;

   VAR_2 += 2;
   VAR_6 = FUNC_3(VAR_2) / 4 * 3;
   if((VAR_4 = FUNC_2(VAR_6)) == ((void*)0)) {

        return 0;
   }
   VAR_3 = VAR_4;
   VAR_5 = 0;
   while(*VAR_2 && ((VAR_7 = FUNC_1(*VAR_2++)) != 64)) {
        switch(VAR_5 % 4) {
        case 0:
      *VAR_3 = VAR_7 << 2;
      break;
        case 1:
      *VAR_3++ |= VAR_7 >> 4;
      *VAR_3 = VAR_7 << 4;
      break;
        case 2:
      *VAR_3++ |= VAR_7 >> 2;
      *VAR_3 = VAR_7 << 6;
      break;
        case 3:
      *VAR_3++ |= VAR_7;
      break;
        }
        VAR_5++;
   }
   VAR_6 = VAR_3 - VAR_4;
     }
     else {



   VAR_6 = FUNC_3(VAR_0);
   if((VAR_4 = FUNC_2(VAR_6)) == ((void*)0))
        return 0;
   VAR_3 = VAR_4;
   VAR_2 = VAR_0;
   while(*VAR_2)
        *VAR_3++ = *VAR_2++;
     }

     *VAR_1 = VAR_4;
     return VAR_6;
}
