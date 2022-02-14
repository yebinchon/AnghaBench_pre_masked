
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned char) ;

int
FUNC_2(uint8_t* VAR_0, int VAR_1, uint8_t* VAR_2, int VAR_3, int* VAR_4)
{
 uint8_t VAR_5, VAR_6;
 int VAR_7 = VAR_1;
 int VAR_8;
 int VAR_9 = 0;

 if(VAR_1 > VAR_3) {
  while(VAR_7 > VAR_3) {
   VAR_5 = *VAR_0++;
   VAR_0 += VAR_5;
   VAR_7--;
  }
  FUNC_0(VAR_7 == VAR_3);
 } else if(VAR_1 < VAR_3) {
  VAR_7 = VAR_3;
  while(VAR_7 > VAR_1) {
   VAR_6 = *VAR_2++;
   VAR_2 += VAR_6;
   VAR_7--;
  }
  FUNC_0(VAR_7 == VAR_1);
 }
 VAR_8 = VAR_7+1;




 while(VAR_7 > 1) {
  VAR_5 = *VAR_0++;
  VAR_6 = *VAR_2++;
  if(VAR_5 != VAR_6) {
   FUNC_0(VAR_5 != 0 && VAR_6 != 0);
   if(VAR_5<VAR_6)
    VAR_9 = -1;
   else VAR_9 = 1;
   VAR_8 = VAR_7;
   VAR_0 += VAR_5;
   VAR_2 += VAR_6;
  } else {




   while(VAR_5) {
    if(*VAR_0 != *VAR_2 && FUNC_1((unsigned char)*VAR_0)
     != FUNC_1((unsigned char)*VAR_2)) {
     if(FUNC_1((unsigned char)*VAR_0) <
      FUNC_1((unsigned char)*VAR_2)) {
      VAR_9 = -1;
      VAR_8 = VAR_7;
      VAR_0 += VAR_5;
      VAR_2 += VAR_5;
      break;
     }
     VAR_9 = 1;
     VAR_8 = VAR_7;
     VAR_0 += VAR_5;
     VAR_2 += VAR_5;
     break;
    }
    VAR_0++;
    VAR_2++;
    VAR_5--;
   }
  }
  VAR_7--;
 }


 *VAR_4 = VAR_8-1;
 if(VAR_9 == 0) {


  if(VAR_1 > VAR_3)
   return 1;
  else if(VAR_1 < VAR_3)
   return -1;
 }
 return VAR_9;
}
