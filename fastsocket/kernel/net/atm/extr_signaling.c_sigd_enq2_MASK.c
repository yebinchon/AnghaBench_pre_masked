
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_atmsvc {int dummy; } ;
struct sockaddr_atmpvc {int dummy; } ;
struct sk_buff {int dummy; } ;
struct atm_qos {int dummy; } ;
struct atmsvc_msg {int type; int reply; unsigned int session; struct sockaddr_atmpvc pvc; int local; struct sockaddr_atmsvc svc; int sap; struct atm_qos qos; int listen_vcc; int vcc; } ;
struct atm_vcc {int flags; int local; int sap; } ;
typedef enum atmsvc_msg_type { ____Placeholder_atmsvc_msg_type } atmsvc_msg_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct atmsvc_msg*,int ,int) ;
 int FUNC_2 (char*,int,struct atm_vcc*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int) ;
 scalar_t__ FUNC_7 (int ,int *) ;

void FUNC_8(struct atm_vcc *VAR_4,enum atmsvc_msg_type VAR_5,
    struct atm_vcc *VAR_6,const struct sockaddr_atmpvc *VAR_7,
    const struct sockaddr_atmsvc *VAR_8,const struct atm_qos *VAR_9,int VAR_10)
{
 struct sk_buff *VAR_11;
 struct atmsvc_msg *VAR_12;
 static unsigned VAR_13 = 0;

 FUNC_2("sigd_enq %d (0x%p)\n",(int) VAR_5,VAR_4);
 while (!(VAR_11 = FUNC_0(sizeof(struct atmsvc_msg),VAR_2)))
  FUNC_3();
 VAR_12 = (struct atmsvc_msg *) FUNC_6(VAR_11,sizeof(struct atmsvc_msg));
 FUNC_1(VAR_12,0,sizeof(*VAR_12));
 VAR_12->type = VAR_5;
 *(struct atm_vcc **) &VAR_12->vcc = VAR_4;
 *(struct atm_vcc **) &VAR_12->listen_vcc = VAR_6;
 VAR_12->reply = VAR_10;
 if (VAR_9) VAR_12->qos = *VAR_9;
 if (VAR_4) VAR_12->sap = VAR_4->sap;
 if (VAR_8) VAR_12->svc = *VAR_8;
 if (VAR_4) VAR_12->local = VAR_4->local;
 if (VAR_7) VAR_12->pvc = *VAR_7;
 if (VAR_4) {
  if (VAR_5 == VAR_3 && FUNC_7(VAR_1, &VAR_4->flags))
   VAR_12->session = ++VAR_13;

 }
 FUNC_5(VAR_11);
 if (VAR_4) FUNC_4(VAR_0,&VAR_4->flags);
}
