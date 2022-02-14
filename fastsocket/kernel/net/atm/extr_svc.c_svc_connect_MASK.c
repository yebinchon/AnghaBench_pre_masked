
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {int state; struct sock* sk; } ;
struct sockaddr_atmsvc {int sas_family; } ;
struct sockaddr {int dummy; } ;
struct sock {int sk_err; int sk_sleep; } ;
struct TYPE_6__ {scalar_t__ min_pcr; scalar_t__ pcr; int max_pcr; int traffic_class; } ;
struct TYPE_4__ {int traffic_class; } ;
struct TYPE_5__ {TYPE_3__ txtp; TYPE_1__ rxtp; } ;
struct atm_vcc {int vci; int vpi; int itf; TYPE_2__ qos; int flags; struct sockaddr_atmsvc remote; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct atm_vcc* FUNC_0 (struct socket*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (TYPE_3__) ;



 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (int ,int *) ;
 int VAR_19 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int *) ;
 int VAR_20 ;
 int FUNC_11 (struct atm_vcc*,int ,int *,int *,struct sockaddr_atmsvc*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct atm_vcc*) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (struct socket*,int ,int ,int ) ;
 int VAR_21 ;

__attribute__((used)) static int FUNC_16(struct socket *VAR_22,struct sockaddr *VAR_23,
    int VAR_24,int VAR_25)
{
 FUNC_1(VAR_21);
 struct sock *VAR_26 = VAR_22->sk;
 struct sockaddr_atmsvc *VAR_27;
 struct atm_vcc *VAR_28 = FUNC_0(VAR_22);
 int VAR_29;

 FUNC_6("svc_connect %p\n",VAR_28);
 FUNC_5(VAR_26);
 if (VAR_24 != sizeof(struct sockaddr_atmsvc)) {
  VAR_29 = -VAR_12;
  goto out;
 }

 switch (VAR_22->state) {
 default:
  VAR_29 = -VAR_12;
  goto out;
 case 130:
  VAR_29 = -VAR_13;
  goto out;
 case 129:
  if (FUNC_14(VAR_6, &VAR_28->flags)) {
   VAR_29 = -VAR_8;
   goto out;
  }
  VAR_22->state = 128;
  if (VAR_26->sk_err) {
   VAR_29 = -VAR_26->sk_err;
   goto out;
  }
  break;
 case 128:
  VAR_27 = (struct sockaddr_atmsvc *) VAR_23;
  if (VAR_27->sas_family != VAR_0) {
   VAR_29 = -VAR_7;
   goto out;
  }
  if (!FUNC_14(VAR_3, &VAR_28->flags)) {
   VAR_29 = -VAR_9;
   goto out;
  }
  if (VAR_28->qos.txtp.traffic_class == VAR_1 ||
      VAR_28->qos.rxtp.traffic_class == VAR_1) {
   VAR_29 = -VAR_12;
   goto out;
  }
  if (!VAR_28->qos.txtp.traffic_class &&
      !VAR_28->qos.rxtp.traffic_class) {
   VAR_29 = -VAR_12;
   goto out;
  }
  VAR_28->remote = *VAR_27;
  FUNC_10(VAR_6, &VAR_28->flags);
  FUNC_7(VAR_26->sk_sleep, &VAR_21, VAR_16);
  FUNC_11(VAR_28,VAR_18,((void*)0),((void*)0),&VAR_28->remote);
  if (VAR_25 & VAR_15) {
   FUNC_4(VAR_26->sk_sleep, &VAR_21);
   VAR_22->state = 129;
   VAR_29 = -VAR_10;
   goto out;
  }
  VAR_29 = 0;
  while (FUNC_14(VAR_6, &VAR_28->flags) && VAR_20) {
   FUNC_9();
   if (!FUNC_12(VAR_19)) {
    FUNC_7(VAR_26->sk_sleep, &VAR_21, VAR_16);
    continue;
   }
   FUNC_6("*ABORT*\n");
   FUNC_11(VAR_28,VAR_17,((void*)0),((void*)0),((void*)0));
   while (FUNC_14(VAR_6, &VAR_28->flags) && VAR_20) {
    FUNC_7(VAR_26->sk_sleep, &VAR_21, VAR_16);
    FUNC_9();
   }
   if (!VAR_26->sk_err)
    while (!FUNC_14(VAR_5,&VAR_28->flags)
        && VAR_20) {
     FUNC_7(VAR_26->sk_sleep, &VAR_21, VAR_16);
     FUNC_9();
    }
   FUNC_3(VAR_4,&VAR_28->flags);
   FUNC_3(VAR_5,&VAR_28->flags);
   FUNC_3(VAR_2,&VAR_28->flags);

   VAR_29 = -VAR_11;
   break;
  }
  FUNC_4(VAR_26->sk_sleep, &VAR_21);
  if (VAR_29)
   goto out;
  if (!VAR_20) {
   VAR_29 = -VAR_14;
   goto out;
  }
  if (VAR_26->sk_err) {
   VAR_29 = -VAR_26->sk_err;
   goto out;
  }
 }





 VAR_28->qos.txtp.max_pcr = FUNC_2(VAR_28->qos.txtp);
 VAR_28->qos.txtp.pcr = 0;
 VAR_28->qos.txtp.min_pcr = 0;



 if (!(VAR_29 = FUNC_15(VAR_22, VAR_28->itf, VAR_28->vpi, VAR_28->vci)))
  VAR_22->state = 130;
 else
  (void) FUNC_13(VAR_28);
out:
 FUNC_8(VAR_26);
 return VAR_29;
}
