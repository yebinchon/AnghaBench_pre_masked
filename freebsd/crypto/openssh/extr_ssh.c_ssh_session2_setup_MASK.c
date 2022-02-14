
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct TYPE_2__ {int ip_qos_bulk; int ip_qos_interactive; scalar_t__ forward_agent; int forward_x11_timeout; int forward_x11_trusted; int xauth_location; scalar_t__ forward_x11; } ;


 int VAR_0 ;
 int FUNC_0 (struct ssh*,int,char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct ssh*,int,char*,int ) ;
 int FUNC_3 (struct ssh*,int,int,int ,char*,int *,int ,int ,char**) ;
 scalar_t__ FUNC_4 (struct ssh*,char const*,int ,int ,int ,char**,char**) ;
 int VAR_1 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (char*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_8 () ;
 int FUNC_9 (int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (struct ssh*,int,char const*,char*,char*,int) ;

__attribute__((used)) static void
FUNC_11(struct ssh *VAR_6, int VAR_7, int VAR_8, void *VAR_9)
{
 extern char **VAR_10;
 const char *VAR_11;
 int VAR_12 = VAR_5;
 char *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);

 if (!VAR_8)
  return;

 VAR_11 = FUNC_7("DISPLAY");
 if (VAR_11 == ((void*)0) && VAR_2.forward_x11)
  FUNC_5("X11 forwarding requested but DISPLAY not set");
 if (VAR_2.forward_x11 && FUNC_4(VAR_6, VAR_11,
     VAR_2.xauth_location, VAR_2.forward_x11_trusted,
     VAR_2.forward_x11_timeout, &VAR_13, &VAR_14) == 0) {

  FUNC_5("Requesting X11 forwarding with authentication "
      "spoofing.");
  FUNC_10(VAR_6, VAR_7, VAR_11, VAR_13,
      VAR_14, 1);
  FUNC_2(VAR_6, VAR_7, "X11 forwarding", VAR_0);

  VAR_12 = 1;
 }

 FUNC_1();
 if (VAR_2.forward_agent) {
  FUNC_5("Requesting authentication agent forwarding.");
  FUNC_0(VAR_6, VAR_7, "auth-agent-req@openssh.com", 0);
  FUNC_8();
 }


 FUNC_9(VAR_12,
     VAR_2.ip_qos_interactive, VAR_2.ip_qos_bulk);

 FUNC_3(VAR_6, VAR_7, VAR_5, VAR_4, FUNC_7("TERM"),
     ((void*)0), FUNC_6(VAR_3), VAR_1, VAR_10);
}
