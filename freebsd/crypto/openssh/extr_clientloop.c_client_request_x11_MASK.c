
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_short ;
typedef scalar_t__ u_int ;
struct ssh {int dummy; } ;
struct TYPE_6__ {int forward_x11; } ;
struct TYPE_5__ {int force_drain; } ;
typedef TYPE_1__ Channel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct ssh*,char*,int ,int,int,int,int ,int ,int ,char*,int) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 () ;
 TYPE_2__ VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct ssh*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static Channel *
FUNC_10(struct ssh *VAR_5, const char *VAR_6, int VAR_7)
{
 Channel *VAR_8 = ((void*)0);
 char *VAR_9;
 u_short VAR_10;
 int VAR_11;

 if (!VAR_3.forward_x11) {
  FUNC_2("Warning: ssh server tried X11 forwarding.");
  FUNC_2("Warning: this is probably a break-in attempt by a "
      "malicious server.");
  return ((void*)0);
 }
 if (VAR_4 != 0 && (u_int)FUNC_4() >= VAR_4) {
  FUNC_8("Rejected X11 connection after ForwardX11Timeout "
      "expired");
  return ((void*)0);
 }
 VAR_9 = FUNC_7(((void*)0));
 VAR_10 = FUNC_6();
 FUNC_5();

 FUNC_1("client_request_x11: request from %s %d", VAR_9,
     VAR_10);
 FUNC_3(VAR_9);
 VAR_11 = FUNC_9(VAR_5);
 if (VAR_11 < 0)
  return ((void*)0);
 VAR_8 = FUNC_0(VAR_5, "x11",
     VAR_2, VAR_11, VAR_11, -1,
     VAR_0, VAR_1, 0, "x11", 1);
 VAR_8->force_drain = 1;
 return VAR_8;
}
