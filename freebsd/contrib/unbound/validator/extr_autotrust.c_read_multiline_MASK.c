
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int * FUNC_0 (char*,int,int *) ;
 int FUNC_1 (char*) ;
 scalar_t__* FUNC_2 (char*,char) ;
 size_t FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(char* VAR_0, size_t VAR_1, FILE* VAR_2, int* VAR_3)
{
 char* VAR_4 = VAR_0;
 size_t VAR_5 = VAR_1;
 int VAR_6 = 0;
 VAR_0[VAR_1-1] = 0;
 while(VAR_5 > 0 && FUNC_0(VAR_4, (int)VAR_5, VAR_2) != ((void*)0)) {
  size_t VAR_7, VAR_8 = FUNC_3(VAR_4);
  (*VAR_3)++;




  for(VAR_7=0; VAR_7<VAR_8; VAR_7++) {
   if(VAR_4[VAR_7] == '(') {
    VAR_6++;
   } else if(VAR_4[VAR_7] == ')') {
    if(VAR_6 == 0) {
     FUNC_1("mismatch: too many ')'");
     return -1;
    }
    VAR_6--;
   } else if(VAR_4[VAR_7] == ';') {
    break;
   }
  }


  if(VAR_6 == 0) {
   return 1;
  }


  if(VAR_8>0)
   VAR_4[VAR_8-1] = 0;
  if(FUNC_2(VAR_4, ';'))
   FUNC_2(VAR_4, ';')[0] = 0;


  VAR_8 = FUNC_3(VAR_4);
  VAR_4 += VAR_8;
  VAR_5 -= VAR_8;

  if(VAR_5 <= 2 ) {
   FUNC_1("line too long");
   return -1;
  }
  VAR_4[0] = ' ';
  VAR_4[1] = 0;
  VAR_4 += 1;
  VAR_5 -= 1;
 }
 if(VAR_6 != 0) {
  FUNC_1("mismatch: too many '('");
  return -1;
 }
 if(VAR_4 != VAR_0)
  return 1;
 return 0;
}
