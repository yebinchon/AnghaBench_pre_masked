
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {int state; struct sock* sk; } ;
struct sock {int sk_err; int sk_ack_backlog; int sk_sleep; int sk_receive_queue; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_4__ {int vci; int vpi; int itf; } ;
struct TYPE_5__ {TYPE_1__ sap_addr; } ;
struct atmsvc_msg {TYPE_2__ pvc; int sap; int local; int svc; int qos; } ;
struct atm_vcc {int flags; int qos; int sap; int local; int remote; } ;
struct TYPE_6__ {int sk_err; int sk_sleep; } ;


 struct atm_vcc* FUNC_0 (struct socket*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (char*,struct atm_vcc*,struct atm_vcc*) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ VAR_15 ;
 int FUNC_10 (struct atm_vcc*,int ,struct atm_vcc*,int *,int *) ;
 int FUNC_11 (int *,int ,struct atm_vcc*,int *,int *,int *,int) ;
 scalar_t__ FUNC_12 (int ) ;
 TYPE_3__* FUNC_13 (struct atm_vcc*) ;
 struct sk_buff* FUNC_14 (int *) ;
 int FUNC_15 (struct sock*) ;
 int FUNC_16 (int ,struct socket*,int ,int ) ;
 scalar_t__ FUNC_17 (int ,int *) ;
 int FUNC_18 (struct socket*,int ,int ,int ) ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_19(struct socket *VAR_17,struct socket *VAR_18,int VAR_19)
{
 struct sock *VAR_20 = VAR_17->sk;
 struct sk_buff *VAR_21;
 struct atmsvc_msg *VAR_22;
 struct atm_vcc *VAR_23 = FUNC_0(VAR_17);
 struct atm_vcc *VAR_24;
 int VAR_25;

 FUNC_4(VAR_20);

 VAR_25 = FUNC_16(FUNC_15(VAR_20), VAR_18, 0, 0);
 if (VAR_25)
  goto out;

 VAR_24 = FUNC_0(VAR_18);

 FUNC_5("svc_accept %p -> %p\n",VAR_23,VAR_24);
 while (1) {
  FUNC_1(VAR_16);

  FUNC_6(VAR_20->sk_sleep, &VAR_16, VAR_10);
  while (!(VAR_21 = FUNC_14(&VAR_20->sk_receive_queue)) &&
         VAR_15) {
   if (FUNC_17(VAR_2,&VAR_23->flags)) break;
   if (FUNC_17(VAR_0,&VAR_23->flags)) {
    VAR_25 = -VAR_20->sk_err;
    break;
   }
   if (VAR_19 & VAR_8) {
    VAR_25 = -VAR_4;
    break;
   }
   FUNC_7(VAR_20);
   FUNC_8();
   FUNC_4(VAR_20);
   if (FUNC_12(VAR_14)) {
    VAR_25 = -VAR_6;
    break;
   }
   FUNC_6(VAR_20->sk_sleep, &VAR_16, VAR_10);
  }
  FUNC_3(VAR_20->sk_sleep, &VAR_16);
  if (VAR_25)
   goto out;
  if (!VAR_21) {
   VAR_25 = -VAR_7;
   goto out;
  }
  VAR_22 = (struct atmsvc_msg *) VAR_21->data;
  VAR_24->qos = VAR_22->qos;
  FUNC_9(VAR_1,&VAR_24->flags);
  VAR_24->remote = VAR_22->svc;
  VAR_24->local = VAR_22->local;
  VAR_24->sap = VAR_22->sap;
  VAR_25 = FUNC_18(VAR_18, VAR_22->pvc.sap_addr.itf,
        VAR_22->pvc.sap_addr.vpi, VAR_22->pvc.sap_addr.vci);
  FUNC_2(VAR_21);
  VAR_20->sk_ack_backlog--;
  if (VAR_25) {
   FUNC_11(((void*)0),VAR_13,VAR_23,((void*)0),((void*)0),
       &VAR_23->qos,VAR_25);
   VAR_25 = VAR_25 == -VAR_4 ? -VAR_5 : VAR_25;
   goto out;
  }

  FUNC_9(VAR_3, &VAR_24->flags);
  FUNC_6(FUNC_13(VAR_24)->sk_sleep, &VAR_16, VAR_11);
  FUNC_10(VAR_24,VAR_12,VAR_23,((void*)0),((void*)0));
  while (FUNC_17(VAR_3, &VAR_24->flags) && VAR_15) {
   FUNC_7(VAR_20);
   FUNC_8();
   FUNC_4(VAR_20);
   FUNC_6(FUNC_13(VAR_24)->sk_sleep, &VAR_16, VAR_11);
  }
  FUNC_3(FUNC_13(VAR_24)->sk_sleep, &VAR_16);
  if (!VAR_15) {
   VAR_25 = -VAR_7;
   goto out;
  }
  if (!FUNC_13(VAR_24)->sk_err)
   break;
  if (FUNC_13(VAR_24)->sk_err != VAR_6) {
   VAR_25 = -FUNC_13(VAR_24)->sk_err;
   goto out;
  }
 }
 VAR_18->state = VAR_9;
out:
 FUNC_7(VAR_20);
 return VAR_25;
}
