
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int sldns_buffer ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 char FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int,int *) ;

__attribute__((used)) static int
FUNC_11(FILE* VAR_1, sldns_buffer* VAR_2, int* VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6 = 0;
 while((VAR_5 = FUNC_1(VAR_1)) != VAR_0 ) {
  if(VAR_4 && VAR_5 == '#') {
   FUNC_4(VAR_1);
   (*VAR_3)++;
   continue;
  } else if(VAR_4 && VAR_5=='/' && VAR_6>0 &&
   FUNC_6(VAR_2,
   FUNC_5(VAR_2)-1) == '/') {
   FUNC_8(VAR_2, -1);
   VAR_6--;
   FUNC_4(VAR_1);
   (*VAR_3)++;
   continue;
  } else if(VAR_4 && VAR_5=='*' && VAR_6>0 &&
   FUNC_6(VAR_2,
   FUNC_5(VAR_2)-1) == '/') {
   FUNC_8(VAR_2, -1);
   VAR_6--;

   while(VAR_5 != VAR_0 && (VAR_5=FUNC_1(VAR_1)) != VAR_0 ) {
    if(VAR_5 == '*') {
     if((VAR_5=FUNC_1(VAR_1)) == '/')
      break;
    }
    if(VAR_5 == '\n')
     (*VAR_3)++;
   }
   continue;
  }

  if(VAR_6 > 0) {

   if(FUNC_3((unsigned char)VAR_5)) {
    FUNC_10(VAR_5, VAR_1);
    return VAR_6;
   }
   if(FUNC_2(VAR_5)) {
    FUNC_10(VAR_5, VAR_1);
    return VAR_6;
   }
  }
  if(VAR_5 == '\n') {
   VAR_5 = ' ';
   (*VAR_3)++;
  }

  if(FUNC_7(VAR_2) < 2) {
   FUNC_0("trusted-keys, %d, string too long", *VAR_3);
  }
  FUNC_9(VAR_2, (uint8_t)VAR_5);
  VAR_6++;
  if(FUNC_3((unsigned char)VAR_5)) {

   while((VAR_5 = FUNC_1(VAR_1)) != VAR_0 ) {
    if(VAR_5 == '\n')
     (*VAR_3)++;
    if(!FUNC_3((unsigned char)VAR_5)) {
     FUNC_10(VAR_5, VAR_1);
     break;
    }
   }
   return VAR_6;
  }
  if(FUNC_2(VAR_5))
   return VAR_6;
 }
 return VAR_6;
}
