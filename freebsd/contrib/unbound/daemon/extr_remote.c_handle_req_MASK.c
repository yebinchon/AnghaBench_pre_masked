
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rc_state {TYPE_1__* c; } ;
struct daemon_remote {int worker; } ;
typedef scalar_t__ ssize_t ;
typedef int pre ;
typedef int magic ;
typedef int buf ;
struct TYPE_8__ {int fd; scalar_t__ ssl; } ;
struct TYPE_7__ {int fd; } ;
typedef TYPE_2__ RES ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 () ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (struct daemon_remote*,TYPE_2__*,char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int ) ;
 scalar_t__ FUNC_9 (int ,char*,int,int ) ;
 int FUNC_10 (char*,int,char*,int) ;
 int FUNC_11 (TYPE_2__*,char*) ;
 int FUNC_12 (TYPE_2__*,char*,int) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (char*,char*,int) ;
 int FUNC_16 (int ,char*,...) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static void
FUNC_18(struct daemon_remote* VAR_7, struct rc_state* VAR_8, RES* VAR_9)
{
 int VAR_10;
 char VAR_11[10];
 char VAR_12[7];
 char VAR_13[1024];





 FUNC_6(VAR_8->c->fd);


 if(VAR_9->ssl) {
  FUNC_0();
  if((VAR_10=FUNC_2(VAR_9->ssl, VAR_12, (int)sizeof(VAR_12)-1)) <= 0) {
   if(FUNC_1(VAR_9->ssl, VAR_10) == VAR_2)
    return;
   FUNC_7("could not SSL_read");
   return;
  }
 } else {
  while(1) {
   ssize_t VAR_14 = FUNC_9(VAR_9->fd, VAR_12, sizeof(VAR_12)-1, 0);
   if(VAR_14 <= 0) {
    if(VAR_14 == 0) return;
    if(VAR_6 == VAR_1 || VAR_6 == VAR_0)
     continue;

    FUNC_8("could not recv: %s", FUNC_14(VAR_6));



    return;
   }
   VAR_10 = (int)VAR_14;
   break;
  }
 }
 VAR_12[6] = 0;
 if( VAR_10 != 6 || FUNC_15(VAR_12, "UBCT", 4) != 0) {
  FUNC_16(VAR_5, "control connection has bad magic string");

  return;
 }


 if(!FUNC_12(VAR_9, VAR_13, sizeof(VAR_13))) {
  return;
 }
 FUNC_10(VAR_11, sizeof(VAR_11), "UBCT%d ", VAR_3);
 if(FUNC_13(VAR_12, VAR_11) != 0) {
  FUNC_16(VAR_5, "control connection had bad "
   "version %s, cmd: %s", VAR_12, VAR_13);
  FUNC_11(VAR_9, "error version mismatch\n");
  return;
 }
 FUNC_16(VAR_4, "control cmd: %s", VAR_13);


 FUNC_5(VAR_7, VAR_9, VAR_13, VAR_7->worker);
}
