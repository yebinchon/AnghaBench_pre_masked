
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int32_t ;
typedef void* u_int ;
struct ssh {int dummy; } ;
struct TYPE_6__ {scalar_t__ type; int remote_id; int have_remote_id; int self; int local_window; int local_maxpacket; void* remote_maxpacket; void* remote_window; } ;
typedef TYPE_1__ Channel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_0 (struct ssh*,char*,int) ;
 TYPE_1__* FUNC_1 (struct ssh*,char*,int) ;
 TYPE_1__* FUNC_2 (struct ssh*,char*,int,void*,void*) ;
 TYPE_1__* FUNC_3 (struct ssh*,char*,int) ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 void* FUNC_7 () ;
 char* FUNC_8 (void**) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (char*,char*) ;

__attribute__((used)) static int
FUNC_14(int VAR_5, u_int32_t VAR_6, struct ssh *VAR_7)
{
 Channel *VAR_8 = ((void*)0);
 char *VAR_9;
 int VAR_10;
 u_int VAR_11, VAR_12, VAR_13;

 VAR_9 = FUNC_8(&VAR_13);
 VAR_10 = FUNC_7();
 VAR_12 = FUNC_7();
 VAR_11 = FUNC_7();

 FUNC_4("client_input_channel_open: ctype %s rchan %d win %d max %d",
     VAR_9, VAR_10, VAR_12, VAR_11);

 if (FUNC_13(VAR_9, "forwarded-tcpip") == 0) {
  VAR_8 = FUNC_2(VAR_7, VAR_9, VAR_10, VAR_12,
      VAR_11);
 } else if (FUNC_13(VAR_9, "forwarded-streamlocal@openssh.com") == 0) {
  VAR_8 = FUNC_1(VAR_7, VAR_9, VAR_10);
 } else if (FUNC_13(VAR_9, "x11") == 0) {
  VAR_8 = FUNC_3(VAR_7, VAR_9, VAR_10);
 } else if (FUNC_13(VAR_9, "auth-agent@openssh.com") == 0) {
  VAR_8 = FUNC_0(VAR_7, VAR_9, VAR_10);
 }
 if (VAR_8 != ((void*)0) && VAR_8->type == VAR_4) {
  FUNC_5("proxied to downstream: %s", VAR_9);
 } else if (VAR_8 != ((void*)0)) {
  FUNC_4("confirm %s", VAR_9);
  VAR_8->remote_id = VAR_10;
  VAR_8->have_remote_id = 1;
  VAR_8->remote_window = VAR_12;
  VAR_8->remote_maxpacket = VAR_11;
  if (VAR_8->type != VAR_3) {
   FUNC_12(VAR_0);
   FUNC_10(VAR_8->remote_id);
   FUNC_10(VAR_8->self);
   FUNC_10(VAR_8->local_window);
   FUNC_10(VAR_8->local_maxpacket);
   FUNC_11();
  }
 } else {
  FUNC_4("failure %s", VAR_9);
  FUNC_12(VAR_1);
  FUNC_10(VAR_10);
  FUNC_10(VAR_2);
  FUNC_9("open failed");
  FUNC_9("");
  FUNC_11();
 }
 FUNC_6(VAR_9);
 return 0;
}
