
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_atmsvc {int dummy; } ;
struct sockaddr_atmpvc {int dummy; } ;
struct atm_vcc {int qos; } ;
typedef enum atmsvc_msg_type { ____Placeholder_atmsvc_msg_type } atmsvc_msg_type ;


 int FUNC_0 (struct atm_vcc*,int,struct atm_vcc*,struct sockaddr_atmpvc const*,struct sockaddr_atmsvc const*,int *,int ) ;

void FUNC_1(struct atm_vcc *VAR_0,enum atmsvc_msg_type VAR_1,
    struct atm_vcc *VAR_2,const struct sockaddr_atmpvc *VAR_3,
    const struct sockaddr_atmsvc *VAR_4)
{
 FUNC_0(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4,VAR_0 ? &VAR_0->qos : ((void*)0),0);

}
