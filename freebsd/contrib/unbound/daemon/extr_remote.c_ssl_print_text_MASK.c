
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_3__ {int fd; scalar_t__ ssl; } ;
typedef TYPE_1__ RES ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,char const*,int) ;
 int VAR_3 ;
 int FUNC_3 () ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,char const*,size_t,int ) ;
 int FUNC_7 (scalar_t__) ;
 size_t FUNC_8 (char const*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ) ;

int
FUNC_11(RES* VAR_5, const char* VAR_6)
{
 int VAR_7;
 if(!VAR_5)
  return 0;
 if(VAR_5->ssl) {
  FUNC_0();
  if((VAR_7=FUNC_2(VAR_5->ssl, VAR_6, (int)FUNC_8(VAR_6))) <= 0) {
   if(FUNC_1(VAR_5->ssl, VAR_7) == VAR_2) {
    FUNC_9(VAR_3, "warning, in SSL_write, peer "
     "closed connection");
    return 0;
   }
   FUNC_4("could not SSL_write");
   return 0;
  }
 } else {
  size_t VAR_8 = 0;
  while(VAR_8 < FUNC_8(VAR_6)) {
   ssize_t VAR_9 = FUNC_6(VAR_5->fd, VAR_6+VAR_8, FUNC_8(VAR_6)-VAR_8, 0);
   if(VAR_9 == -1) {
    if(VAR_4 == VAR_0 || VAR_4 == VAR_1)
     continue;

    FUNC_5("could not send: %s", FUNC_7(VAR_4));



    return 0;
   }
   VAR_8 += VAR_9;
  }
 }
 return 1;
}
