
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sshauthopt {size_t nenv; size_t npermitopen; size_t npermitlisten; int force_tun_device; char* force_command; scalar_t__ valid_before; char* cert_principals; char** env; char** permitopen; char** permitlisten; scalar_t__ permit_port_forwarding_flag; scalar_t__ permit_agent_forwarding_flag; scalar_t__ permit_x11_forwarding_flag; scalar_t__ permit_user_rc; scalar_t__ permit_pty_flag; } ;
typedef int msg ;
typedef int buf ;
struct TYPE_2__ {int allow_tcp_forwarding; scalar_t__ permit_user_env; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,char*) ;
 int FUNC_1 (char*,char const*,char*) ;
 int FUNC_2 (scalar_t__,char*,int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (char*,int,char*,...) ;

void
FUNC_4(const char *VAR_3, const struct sshauthopt *VAR_4, int VAR_5)
{
 int VAR_6 = VAR_2.permit_user_env && VAR_4->nenv > 0;
 int VAR_7 = VAR_4->npermitopen > 0 &&
     (VAR_2.allow_tcp_forwarding & VAR_0) != 0;
 int VAR_8 = VAR_4->npermitlisten > 0 &&
     (VAR_2.allow_tcp_forwarding & VAR_1) != 0;
 size_t VAR_9;
 char VAR_10[1024], VAR_11[64];

 FUNC_3(VAR_11, sizeof(VAR_11), "%d", VAR_4->force_tun_device);

 FUNC_3(VAR_10, sizeof(VAR_10), "key options:%s%s%s%s%s%s%s%s%s%s%s%s%s",
     VAR_4->permit_agent_forwarding_flag ? " agent-forwarding" : "",
     VAR_4->force_command == ((void*)0) ? "" : " command",
     VAR_6 ? " environment" : "",
     VAR_4->valid_before == 0 ? "" : "expires",
     VAR_7 ? " permitopen" : "",
     VAR_8 ? " permitlisten" : "",
     VAR_4->permit_port_forwarding_flag ? " port-forwarding" : "",
     VAR_4->cert_principals == ((void*)0) ? "" : " principals",
     VAR_4->permit_pty_flag ? " pty" : "",
     VAR_4->force_tun_device == -1 ? "" : " tun=",
     VAR_4->force_tun_device == -1 ? "" : VAR_11,
     VAR_4->permit_user_rc ? " user-rc" : "",
     VAR_4->permit_x11_forwarding_flag ? " x11-forwarding" : "");

 FUNC_1("%s: %s", VAR_3, VAR_10);
 if (VAR_5)
  FUNC_0("%s: %s", VAR_3, VAR_10);

 if (VAR_2.permit_user_env) {
  for (VAR_9 = 0; VAR_9 < VAR_4->nenv; VAR_9++) {
   FUNC_1("%s: environment: %s", VAR_3, VAR_4->env[VAR_9]);
   if (VAR_5) {
    FUNC_0("%s: environment: %s",
        VAR_3, VAR_4->env[VAR_9]);
   }
  }
 }


 if (VAR_4->valid_before != 0) {
  FUNC_2(VAR_4->valid_before, VAR_11, sizeof(VAR_11));
  FUNC_1("%s: expires at %s", VAR_3, VAR_11);
 }
 if (VAR_4->cert_principals != ((void*)0)) {
  FUNC_1("%s: authorized principals: \"%s\"",
      VAR_3, VAR_4->cert_principals);
 }
 if (VAR_4->force_command != ((void*)0))
  FUNC_1("%s: forced command: \"%s\"", VAR_3, VAR_4->force_command);
 if (VAR_7) {
  for (VAR_9 = 0; VAR_9 < VAR_4->npermitopen; VAR_9++) {
   FUNC_1("%s: permitted open: %s",
       VAR_3, VAR_4->permitopen[VAR_9]);
  }
 }
 if (VAR_8) {
  for (VAR_9 = 0; VAR_9 < VAR_4->npermitlisten; VAR_9++) {
   FUNC_1("%s: permitted listen: %s",
       VAR_3, VAR_4->permitlisten[VAR_9]);
  }
 }
}
