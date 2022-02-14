
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sshbuf {int dummy; } ;
struct sshauthopt {int permit_port_forwarding_flag; int permit_agent_forwarding_flag; int permit_x11_forwarding_flag; int permit_pty_flag; int permit_user_rc; int restricted; int cert_authority; int force_tun_device; char* cert_principals; char* force_command; char* required_from_host_cert; char* required_from_host_keys; int npermitlisten; int permitlisten; int npermitopen; int permitopen; int nenv; int env; int valid_before; } ;


 int VAR_0 ;
 int FUNC_0 (struct sshbuf*,int ,int ) ;
 int FUNC_1 (struct sshbuf*,char*) ;
 int FUNC_2 (struct sshbuf*,int ) ;
 int FUNC_3 (struct sshbuf*,int ) ;
 int FUNC_4 (struct sshbuf*,int) ;

int
FUNC_5(const struct sshauthopt *VAR_1, struct sshbuf *VAR_2,
    int VAR_3)
{
 int VAR_4 = VAR_0;


 if ((VAR_4 = FUNC_4(VAR_2, VAR_1->permit_port_forwarding_flag)) != 0 ||
     (VAR_4 = FUNC_4(VAR_2, VAR_1->permit_agent_forwarding_flag)) != 0 ||
     (VAR_4 = FUNC_4(VAR_2, VAR_1->permit_x11_forwarding_flag)) != 0 ||
     (VAR_4 = FUNC_4(VAR_2, VAR_1->permit_pty_flag)) != 0 ||
     (VAR_4 = FUNC_4(VAR_2, VAR_1->permit_user_rc)) != 0 ||
     (VAR_4 = FUNC_4(VAR_2, VAR_1->restricted)) != 0 ||
     (VAR_4 = FUNC_4(VAR_2, VAR_1->cert_authority)) != 0 ||
     (VAR_4 = FUNC_3(VAR_2, VAR_1->valid_before)) != 0)
  return VAR_4;


 if ((VAR_4 = FUNC_4(VAR_2, VAR_1->force_tun_device == -1)) != 0 ||
     (VAR_4 = FUNC_2(VAR_2, (VAR_1->force_tun_device < 0) ?
     0 : (u_int)VAR_1->force_tun_device)) != 0)
  return VAR_4;


 if ((VAR_4 = FUNC_1(VAR_2,
     VAR_3 ? "yes" : VAR_1->cert_principals)) != 0 ||
     (VAR_4 = FUNC_1(VAR_2,
     VAR_3 ? "true" : VAR_1->force_command)) != 0 ||
     (VAR_4 = FUNC_1(VAR_2,
     VAR_3 ? ((void*)0) : VAR_1->required_from_host_cert)) != 0 ||
     (VAR_4 = FUNC_1(VAR_2,
      VAR_3 ? ((void*)0) : VAR_1->required_from_host_keys)) != 0)
  return VAR_4;


 if ((VAR_4 = FUNC_0(VAR_2, VAR_1->env,
     VAR_3 ? 0 : VAR_1->nenv)) != 0 ||
     (VAR_4 = FUNC_0(VAR_2, VAR_1->permitopen,
     VAR_3 ? 0 : VAR_1->npermitopen)) != 0 ||
     (VAR_4 = FUNC_0(VAR_2, VAR_1->permitlisten,
     VAR_3 ? 0 : VAR_1->npermitlisten)) != 0)
  return VAR_4;


 return 0;
}
