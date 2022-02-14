
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshauthopt {int restricted; scalar_t__ permit_user_rc; scalar_t__ permit_pty_flag; scalar_t__ permit_x11_forwarding_flag; scalar_t__ permit_agent_forwarding_flag; scalar_t__ permit_port_forwarding_flag; } ;


 int FUNC_0 (struct sshauthopt*,int *) ;
 struct sshauthopt* FUNC_1 () ;

__attribute__((used)) static struct sshauthopt *
FUNC_2(void)
{
 struct sshauthopt *VAR_0 = FUNC_1();

 FUNC_0(VAR_0, ((void*)0));
 VAR_0->permit_port_forwarding_flag = 0;
 VAR_0->permit_agent_forwarding_flag = 0;
 VAR_0->permit_x11_forwarding_flag = 0;
 VAR_0->permit_pty_flag = 0;
 VAR_0->permit_user_rc = 0;
 VAR_0->restricted = 1;
 return VAR_0;
}
