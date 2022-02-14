
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshauthopt {int permit_port_forwarding_flag; int permit_agent_forwarding_flag; int permit_x11_forwarding_flag; int permit_pty_flag; int permit_user_rc; } ;


 int FUNC_0 (struct sshauthopt*,int *) ;
 struct sshauthopt* FUNC_1 () ;

__attribute__((used)) static struct sshauthopt *
FUNC_2(void)
{
 struct sshauthopt *VAR_0 = FUNC_1();

 FUNC_0(VAR_0, ((void*)0));
 VAR_0->permit_port_forwarding_flag = 1;
 VAR_0->permit_agent_forwarding_flag = 1;
 VAR_0->permit_x11_forwarding_flag = 1;
 VAR_0->permit_pty_flag = 1;
 VAR_0->permit_user_rc = 1;
 return VAR_0;
}
