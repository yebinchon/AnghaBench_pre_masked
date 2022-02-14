
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tcmsg {int tcm_handle; int tcm_info; } ;
struct TYPE_7__ {int itf; int vci; int vpi; } ;
struct sockaddr_atmpvc {TYPE_3__ sap_addr; int sap_family; } ;
struct sk_buff {int len; } ;
struct nlattr {int dummy; } ;
struct atm_qdisc_data {int dummy; } ;
struct atm_flow_data {int classid; int hdr_len; scalar_t__ excess; TYPE_4__* vcc; struct sockaddr_atmpvc* hdr; TYPE_1__* q; } ;
struct Qdisc {int dummy; } ;
typedef int pvc ;
struct TYPE_8__ {int flags; int vci; int vpi; TYPE_2__* dev; } ;
struct TYPE_6__ {int number; } ;
struct TYPE_5__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*,int ,int,struct sockaddr_atmpvc*) ;
 int FUNC_2 (struct sk_buff*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct atm_qdisc_data*,struct atm_flow_data*) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (char*,struct Qdisc*,struct atm_qdisc_data*,struct atm_flow_data*,struct sk_buff*,struct tcmsg*) ;
 struct atm_qdisc_data* FUNC_8 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_9(struct Qdisc *VAR_7, unsigned long VAR_8,
        struct sk_buff *VAR_9, struct tcmsg *VAR_10)
{
 struct atm_qdisc_data *VAR_11 = FUNC_8(VAR_7);
 struct atm_flow_data *VAR_12 = (struct atm_flow_data *)VAR_8;
 struct nlattr *VAR_13;

 FUNC_7("atm_tc_dump_class(sch %p,[qdisc %p],flow %p,skb %p,tcm %p)\n",
  VAR_7, VAR_11, VAR_12, VAR_9, VAR_10);
 if (!FUNC_3(VAR_11, VAR_12))
  return -VAR_1;
 VAR_10->tcm_handle = VAR_12->classid;
 VAR_10->tcm_info = VAR_12->q->handle;

 VAR_13 = FUNC_6(VAR_9, VAR_6);
 if (VAR_13 == ((void*)0))
  goto nla_put_failure;

 FUNC_1(VAR_9, VAR_4, VAR_12->hdr_len, VAR_12->hdr);
 if (VAR_12->vcc) {
  struct sockaddr_atmpvc VAR_14;
  int VAR_15;

  VAR_14.sap_family = VAR_0;
  VAR_14.sap_addr.itf = VAR_12->vcc->dev ? VAR_12->vcc->dev->number : -1;
  VAR_14.sap_addr.vpi = VAR_12->vcc->vpi;
  VAR_14.sap_addr.vci = VAR_12->vcc->vci;
  FUNC_1(VAR_9, VAR_2, sizeof(VAR_14), &VAR_14);
  VAR_15 = FUNC_0(VAR_12->vcc->flags);
  FUNC_2(VAR_9, VAR_5, VAR_15);
 }
 if (VAR_12->excess)
  FUNC_2(VAR_9, VAR_3, VAR_12->classid);
 else {
  FUNC_2(VAR_9, VAR_3, 0);
 }

 FUNC_5(VAR_9, VAR_13);
 return VAR_9->len;

nla_put_failure:
 FUNC_4(VAR_9, VAR_13);
 return -1;
}
