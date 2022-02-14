
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct tcmsg {scalar_t__ tcm_info; int tcm_handle; int tcm_parent; int tcm_ifindex; scalar_t__ tcm__pad2; scalar_t__ tcm__pad1; int tcm_family; } ;
struct sk_buff {int len; } ;
struct nlmsghdr {int nlmsg_len; } ;
struct gnet_dump {int dummy; } ;
struct Qdisc_class_ops {scalar_t__ (* dump ) (struct Qdisc*,unsigned long,struct sk_buff*,struct tcmsg*) ;scalar_t__ (* dump_stats ) (struct Qdisc*,unsigned long,struct gnet_dump*) ;} ;
struct Qdisc {TYPE_1__* ops; int handle; } ;
struct TYPE_4__ {int ifindex; } ;
struct TYPE_3__ {int id; struct Qdisc_class_ops* cl_ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 struct tcmsg* FUNC_1 (struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_2 (struct sk_buff*,int ,int ,int,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct gnet_dump*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int ,int ,struct gnet_dump*) ;
 int FUNC_5 (struct sk_buff*,unsigned char*) ;
 TYPE_2__* FUNC_6 (struct Qdisc*) ;
 int FUNC_7 (struct Qdisc*) ;
 unsigned char* FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct Qdisc*,unsigned long,struct sk_buff*,struct tcmsg*) ;
 scalar_t__ FUNC_10 (struct Qdisc*,unsigned long,struct gnet_dump*) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_5, struct Qdisc *VAR_6,
     unsigned long VAR_7,
     u32 VAR_8, u32 VAR_9, u16 VAR_10, int VAR_11)
{
 struct tcmsg *VAR_12;
 struct nlmsghdr *VAR_13;
 unsigned char *VAR_14 = FUNC_8(VAR_5);
 struct gnet_dump VAR_15;
 const struct Qdisc_class_ops *VAR_16 = VAR_6->ops->cl_ops;

 VAR_13 = FUNC_2(VAR_5, VAR_8, VAR_9, VAR_11, sizeof(*VAR_12), VAR_10);
 VAR_12 = FUNC_1(VAR_13);
 VAR_12->tcm_family = VAR_0;
 VAR_12->tcm__pad1 = 0;
 VAR_12->tcm__pad2 = 0;
 VAR_12->tcm_ifindex = FUNC_6(VAR_6)->ifindex;
 VAR_12->tcm_parent = VAR_6->handle;
 VAR_12->tcm_handle = VAR_6->handle;
 VAR_12->tcm_info = 0;
 FUNC_0(VAR_5, VAR_1, VAR_6->ops->id);
 if (VAR_16->dump && VAR_16->dump(VAR_6, VAR_7, VAR_5, VAR_12) < 0)
  goto nla_put_failure;

 if (FUNC_4(VAR_5, VAR_3, VAR_2, VAR_4,
      FUNC_7(VAR_6), &VAR_15) < 0)
  goto nla_put_failure;

 if (VAR_16->dump_stats && VAR_16->dump_stats(VAR_6, VAR_7, &VAR_15) < 0)
  goto nla_put_failure;

 if (FUNC_3(&VAR_15) < 0)
  goto nla_put_failure;

 VAR_13->nlmsg_len = FUNC_8(VAR_5) - VAR_14;
 return VAR_5->len;

nlmsg_failure:
nla_put_failure:
 FUNC_5(VAR_5, VAR_14);
 return -1;
}
