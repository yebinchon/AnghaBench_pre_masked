
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef int SSL ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (char*,int ) ;
 size_t FUNC_5 (int,char*,size_t,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(SSL* VAR_2, int VAR_3, char* VAR_4, size_t VAR_5)
{
 if(VAR_2) {
  int VAR_6;
  FUNC_0();
  if((VAR_6 = FUNC_2(VAR_2, VAR_4, (int)VAR_5-1)) <= 0) {
   if(FUNC_1(VAR_2, VAR_6) == VAR_0) {

    return 0;
   }
   FUNC_6("could not SSL_read");
  }
  VAR_4[VAR_6] = 0;
 } else {
  ssize_t VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_5-1, 0);
  if(VAR_7 <= 0) {
   if(VAR_7 == 0) {

    return 0;
   }

   FUNC_4("could not recv: %s", FUNC_7(VAR_1));



  }
  VAR_4[VAR_7] = 0;
 }
 return 1;
}
