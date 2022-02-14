
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssh {int dummy; } ;
typedef int remote_id ;
struct TYPE_2__ {scalar_t__ client_alive_count_max; } ;


 int VAR_0 ;
 int FUNC_0 (struct ssh*) ;
 int FUNC_1 (struct ssh*,int,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct ssh*,char*,int) ;

__attribute__((used)) static void
FUNC_10(struct ssh *VAR_2)
{
 int VAR_3;
 char VAR_4[512];


 if (FUNC_4() > VAR_1.client_alive_count_max) {
  FUNC_9(VAR_2, VAR_4, sizeof(VAR_4));
  FUNC_3("Timeout, client not responding from %s", VAR_4);
  FUNC_2(255);
 }





 if ((VAR_3 = FUNC_0(VAR_2)) == -1) {
  FUNC_8(VAR_0);
  FUNC_6("keepalive@openssh.com");
  FUNC_5(1);
 } else {
  FUNC_1(VAR_2, VAR_3,
      "keepalive@openssh.com", 1);
 }
 FUNC_7();
}
