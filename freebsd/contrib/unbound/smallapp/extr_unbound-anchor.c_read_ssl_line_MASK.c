
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_3(SSL* VAR_2, char* VAR_3, size_t VAR_4)
{
 size_t VAR_5 = 0;
 int VAR_6;
 int VAR_7 = 0;
 while(1) {
  if(VAR_5 >= VAR_4) {
   if(VAR_1) FUNC_2("line too long\n");
   return 0;
  }
  if((VAR_6 = FUNC_1(VAR_2, VAR_3+VAR_5, 1)) <= 0) {
   if(FUNC_0(VAR_2, VAR_6) == VAR_0) {

    break;
   }
   if(VAR_1) FUNC_2("could not SSL_read\n");
   return 0;
  }
  if(VAR_7 && VAR_3[VAR_5] == '\n') {
   break;
  } else if(VAR_7) {

   if(VAR_1) FUNC_2("error: stray linefeeds\n");
   return 0;
  } else if(VAR_3[VAR_5] == '\r') {

   VAR_7 = 1;
   continue;
  } else if(VAR_3[VAR_5] == '\n') {

   break;
  } else VAR_5++;
 }
 VAR_3[VAR_5] = 0;
 return 1;
}
