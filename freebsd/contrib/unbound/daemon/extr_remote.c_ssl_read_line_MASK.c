
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_3__ {int fd; scalar_t__ ssl; } ;
typedef TYPE_1__ RES ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,char*,int) ;
 int FUNC_3 () ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,...) ;
 scalar_t__ FUNC_6 (int ,char*,int,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;

int
FUNC_9(RES* VAR_4, char* VAR_5, size_t VAR_6)
{
 int VAR_7;
 size_t VAR_8 = 0;
 if(!VAR_4)
  return 0;
 while(VAR_8 < VAR_6) {
  if(VAR_4->ssl) {
   FUNC_0();
   if((VAR_7=FUNC_2(VAR_4->ssl, VAR_5+VAR_8, 1)) <= 0) {
    if(FUNC_1(VAR_4->ssl, VAR_7) == VAR_2) {
     VAR_5[VAR_8] = 0;
     return 1;
    }
    FUNC_4("could not SSL_read");
    return 0;
   }
  } else {
   while(1) {
    ssize_t VAR_9 = FUNC_6(VAR_4->fd, VAR_5+VAR_8, 1, 0);
    if(VAR_9 <= 0) {
     if(VAR_9 == 0) {
      VAR_5[VAR_8] = 0;
      return 1;
     }
     if(VAR_3 == VAR_1 || VAR_3 == VAR_0)
      continue;

     FUNC_5("could not recv: %s", FUNC_7(VAR_3));



     return 0;
    }
    break;
   }
  }
  if(VAR_5[VAR_8] == '\n') {

   VAR_5[VAR_8] = 0;
   return 1;
  }
  VAR_8++;
 }
 VAR_5[VAR_6-1] = 0;
 FUNC_5("control line too long (%d): %s", (int)VAR_6, VAR_5);
 return 0;
}
