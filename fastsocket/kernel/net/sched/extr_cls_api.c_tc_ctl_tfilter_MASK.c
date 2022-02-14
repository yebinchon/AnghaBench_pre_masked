
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcmsg {scalar_t__ tcm_info; scalar_t__ tcm_parent; scalar_t__ tcm_handle; int tcm_ifindex; } ;
struct tcf_proto_ops {int (* init ) (struct tcf_proto*) ;unsigned long (* get ) (struct tcf_proto*,scalar_t__) ;int (* delete ) (struct tcf_proto*,unsigned long) ;int (* change ) (struct tcf_proto*,unsigned long,scalar_t__,struct nlattr**,unsigned long*) ;int kind; int owner; int classify; } ;
struct tcf_proto {scalar_t__ prio; scalar_t__ protocol; struct tcf_proto* next; struct tcf_proto_ops* ops; scalar_t__ classid; int classify; struct Qdisc* q; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_type; int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct net_device {struct Qdisc* qdisc; } ;
struct net {int dummy; } ;
struct Qdisc_class_ops {unsigned long (* get ) (struct Qdisc*,scalar_t__) ;int (* put ) (struct Qdisc*,unsigned long) ;struct tcf_proto** (* tcf_chain ) (struct Qdisc*,unsigned long) ;} ;
struct Qdisc {scalar_t__ handle; TYPE_1__* ops; } ;
typedef int spinlock_t ;
struct TYPE_2__ {struct Qdisc_class_ops* cl_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct tcmsg* FUNC_0 (struct nlmsghdr*) ;
 int VAR_9 ;
 int VAR_10 ;



 size_t VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int,unsigned int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 struct net_device* FUNC_4 (struct net*,int ) ;
 struct net VAR_13 ;
 int FUNC_5 (struct tcf_proto*) ;
 struct tcf_proto* FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct nlattr*,int ) ;
 int FUNC_9 (char*,struct nlattr*,int) ;
 int FUNC_10 (struct nlmsghdr*,int,struct nlattr**,int ,int *) ;
 struct Qdisc* FUNC_11 (struct net_device*,scalar_t__) ;
 int * FUNC_12 (struct Qdisc*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 struct net* FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 unsigned long FUNC_19 (struct Qdisc*,scalar_t__) ;
 struct tcf_proto** FUNC_20 (struct Qdisc*,unsigned long) ;
 int FUNC_21 (struct tcf_proto*) ;
 unsigned long FUNC_22 (struct tcf_proto*,scalar_t__) ;
 int FUNC_23 (struct tcf_proto*,unsigned long) ;
 int FUNC_24 (struct tcf_proto*,unsigned long,scalar_t__,struct nlattr**,unsigned long*) ;
 int FUNC_25 (struct Qdisc*,unsigned long) ;
 scalar_t__ FUNC_26 (struct tcf_proto*) ;
 int FUNC_27 (struct tcf_proto*) ;
 struct tcf_proto_ops* FUNC_28 (struct nlattr*) ;
 int FUNC_29 (struct sk_buff*,struct nlmsghdr*,struct tcf_proto*,unsigned long,int const) ;

__attribute__((used)) static int FUNC_30(struct sk_buff *VAR_14, struct nlmsghdr *VAR_15, void *VAR_16)
{
 struct net *VAR_17 = FUNC_16(VAR_14->sk);
 struct nlattr *VAR_18[VAR_12 + 1];
 spinlock_t *VAR_19;
 struct tcmsg *VAR_20;
 u32 VAR_21;
 u32 VAR_22;
 u32 VAR_23;
 u32 VAR_24;
 struct net_device *VAR_25;
 struct Qdisc *VAR_26;
 struct tcf_proto **VAR_27, **VAR_28;
 struct tcf_proto *VAR_29;
 struct tcf_proto_ops *VAR_30;
 const struct Qdisc_class_ops *VAR_31;
 unsigned long VAR_32;
 unsigned long VAR_33;
 int VAR_34;
 int VAR_35 = 0;

 if (VAR_17 != &VAR_13)
  return -VAR_2;

replay:
 VAR_20 = FUNC_0(VAR_15);
 VAR_21 = FUNC_3(VAR_20->tcm_info);
 VAR_22 = FUNC_1(VAR_20->tcm_info);
 VAR_23 = VAR_22;
 VAR_24 = VAR_20->tcm_parent;
 VAR_32 = 0;

 if (VAR_22 == 0) {

  if (VAR_15->nlmsg_type != 128 || !(VAR_15->nlmsg_flags&VAR_9))
   return -VAR_5;
  VAR_22 = FUNC_2(0x80000000U, 0U);
 }




 VAR_25 = FUNC_4(&VAR_13, VAR_20->tcm_ifindex);
 if (VAR_25 == ((void*)0))
  return -VAR_4;

 VAR_34 = FUNC_10(VAR_15, sizeof(*VAR_20), VAR_18, VAR_12, ((void*)0));
 if (VAR_34 < 0)
  return VAR_34;


 if (!VAR_24) {
  VAR_26 = VAR_25->qdisc;
  VAR_24 = VAR_26->handle;
 } else {
  VAR_26 = FUNC_11(VAR_25, FUNC_1(VAR_20->tcm_parent));
  if (VAR_26 == ((void*)0))
   return -VAR_2;
 }


 if ((VAR_31 = VAR_26->ops->cl_ops) == ((void*)0))
  return -VAR_2;

 if (VAR_31->tcf_chain == ((void*)0))
  return -VAR_6;


 if (FUNC_3(VAR_24)) {
  VAR_32 = VAR_31->get(VAR_26, VAR_24);
  if (VAR_32 == 0)
   return -VAR_5;
 }


 VAR_28 = VAR_31->tcf_chain(VAR_26, VAR_32);
 VAR_34 = -VAR_2;
 if (VAR_28 == ((void*)0))
  goto errout;


 for (VAR_27 = VAR_28; (VAR_29=*VAR_27) != ((void*)0); VAR_27 = &VAR_29->next) {
  if (VAR_29->prio >= VAR_22) {
   if (VAR_29->prio == VAR_22) {
    if (!VAR_23 || (VAR_29->protocol != VAR_21 && VAR_21))
     goto errout;
   } else
    VAR_29 = ((void*)0);
   break;
  }
 }

 VAR_19 = FUNC_12(VAR_26);

 if (VAR_29 == ((void*)0)) {


  if (VAR_18[VAR_11] == ((void*)0) || !VAR_21)
   goto errout;

  VAR_34 = -VAR_5;
  if (VAR_15->nlmsg_type != 128 || !(VAR_15->nlmsg_flags&VAR_9))
   goto errout;




  VAR_34 = -VAR_3;
  VAR_29 = FUNC_6(sizeof(*VAR_29), VAR_7);
  if (VAR_29 == ((void*)0))
   goto errout;
  VAR_34 = -VAR_5;
  VAR_30 = FUNC_28(VAR_18[VAR_11]);
  if (VAR_30 == ((void*)0)) {
   FUNC_5(VAR_29);
   goto errout;
  }
  VAR_29->ops = VAR_30;
  VAR_29->protocol = VAR_21;
  VAR_29->prio = VAR_23 ? : FUNC_1(FUNC_26(*VAR_27));
  VAR_29->q = VAR_26;
  VAR_29->classify = VAR_30->classify;
  VAR_29->classid = VAR_24;

  VAR_34 = VAR_30->init(VAR_29);
  if (VAR_34 != 0) {
   FUNC_7(VAR_30->owner);
   FUNC_5(VAR_29);
   goto errout;
  }

  VAR_35 = 1;

 } else if (VAR_18[VAR_11] && FUNC_8(VAR_18[VAR_11], VAR_29->ops->kind))
  goto errout;

 VAR_33 = VAR_29->ops->get(VAR_29, VAR_20->tcm_handle);

 if (VAR_33 == 0) {
  if (VAR_15->nlmsg_type == 130 && VAR_20->tcm_handle == 0) {
   FUNC_17(VAR_19);
   *VAR_27 = VAR_29->next;
   FUNC_18(VAR_19);

   FUNC_29(VAR_14, VAR_15, VAR_29, VAR_33, 130);
   FUNC_27(VAR_29);
   VAR_34 = 0;
   goto errout;
  }

  VAR_34 = -VAR_5;
  if (VAR_15->nlmsg_type != 128 ||
      !(VAR_15->nlmsg_flags & VAR_9))
   goto errout;
 } else {
  switch (VAR_15->nlmsg_type) {
  case 128:
   VAR_34 = -VAR_1;
   if (VAR_15->nlmsg_flags & VAR_10) {
    if (VAR_35)
     FUNC_27(VAR_29);
    goto errout;
   }
   break;
  case 130:
   VAR_34 = VAR_29->ops->delete(VAR_29, VAR_33);
   if (VAR_34 == 0)
    FUNC_29(VAR_14, VAR_15, VAR_29, VAR_33, 130);
   goto errout;
  case 129:
   VAR_34 = FUNC_29(VAR_14, VAR_15, VAR_29, VAR_33, 128);
   goto errout;
  default:
   VAR_34 = -VAR_2;
   goto errout;
  }
 }

 VAR_34 = VAR_29->ops->change(VAR_29, VAR_32, VAR_20->tcm_handle, VAR_18, &VAR_33);
 if (VAR_34 == 0) {
  if (VAR_35) {
   FUNC_17(VAR_19);
   VAR_29->next = *VAR_27;
   *VAR_27 = VAR_29;
   FUNC_18(VAR_19);
  }
  FUNC_29(VAR_14, VAR_15, VAR_29, VAR_33, 128);
 } else {
  if (VAR_35)
   FUNC_27(VAR_29);
 }

errout:
 if (VAR_32)
  VAR_31->put(VAR_26, VAR_32);
 if (VAR_34 == -VAR_0)

  goto replay;
 return VAR_34;
}
