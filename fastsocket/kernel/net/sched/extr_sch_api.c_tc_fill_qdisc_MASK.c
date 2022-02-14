
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct tcmsg {int tcm_info; int tcm_handle; int tcm_parent; int tcm_ifindex; scalar_t__ tcm__pad2; scalar_t__ tcm__pad1; int tcm_family; } ;
struct sk_buff {int len; } ;
struct nlmsghdr {int nlmsg_len; } ;
struct gnet_dump {int dummy; } ;
struct TYPE_8__ {int qlen; } ;
struct TYPE_5__ {int qlen; } ;
struct Qdisc {TYPE_4__ qstats; int rate_est; int bstats; TYPE_2__* ops; scalar_t__ stab; TYPE_1__ q; int refcnt; int handle; } ;
struct TYPE_7__ {int ifindex; } ;
struct TYPE_6__ {scalar_t__ (* dump ) (struct Qdisc*,struct sk_buff*) ;scalar_t__ (* dump_stats ) (struct Qdisc*,struct gnet_dump*) ;int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 struct tcmsg* FUNC_1 (struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_2 (struct sk_buff*,int ,int ,int,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct gnet_dump*,int *) ;
 scalar_t__ FUNC_5 (struct gnet_dump*,TYPE_4__*) ;
 scalar_t__ FUNC_6 (struct gnet_dump*,int *) ;
 scalar_t__ FUNC_7 (struct gnet_dump*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ,int ,int ,struct gnet_dump*) ;
 int FUNC_9 (struct sk_buff*,unsigned char*) ;
 TYPE_3__* FUNC_10 (struct Qdisc*) ;
 scalar_t__ FUNC_11 (struct sk_buff*,scalar_t__) ;
 int FUNC_12 (struct Qdisc*) ;
 unsigned char* FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (struct Qdisc*,struct sk_buff*) ;
 scalar_t__ FUNC_15 (struct Qdisc*,struct gnet_dump*) ;

__attribute__((used)) static int FUNC_16(struct sk_buff *VAR_5, struct Qdisc *VAR_6, u32 VAR_7,
    u32 VAR_8, u32 VAR_9, u16 VAR_10, int VAR_11)
{
 struct tcmsg *VAR_12;
 struct nlmsghdr *VAR_13;
 unsigned char *VAR_14 = FUNC_13(VAR_5);
 struct gnet_dump VAR_15;

 VAR_13 = FUNC_2(VAR_5, VAR_8, VAR_9, VAR_11, sizeof(*VAR_12), VAR_10);
 VAR_12 = FUNC_1(VAR_13);
 VAR_12->tcm_family = VAR_0;
 VAR_12->tcm__pad1 = 0;
 VAR_12->tcm__pad2 = 0;
 VAR_12->tcm_ifindex = FUNC_10(VAR_6)->ifindex;
 VAR_12->tcm_parent = VAR_7;
 VAR_12->tcm_handle = VAR_6->handle;
 VAR_12->tcm_info = FUNC_3(&VAR_6->refcnt);
 FUNC_0(VAR_5, VAR_1, VAR_6->ops->id);
 if (VAR_6->ops->dump && VAR_6->ops->dump(VAR_6, VAR_5) < 0)
  goto nla_put_failure;
 VAR_6->qstats.qlen = VAR_6->q.qlen;

 if (VAR_6->stab && FUNC_11(VAR_5, VAR_6->stab) < 0)
  goto nla_put_failure;

 if (FUNC_8(VAR_5, VAR_3, VAR_2, VAR_4,
      FUNC_12(VAR_6), &VAR_15) < 0)
  goto nla_put_failure;

 if (VAR_6->ops->dump_stats && VAR_6->ops->dump_stats(VAR_6, &VAR_15) < 0)
  goto nla_put_failure;

 if (FUNC_4(&VAR_15, &VAR_6->bstats) < 0 ||
     FUNC_6(&VAR_15, &VAR_6->rate_est) < 0 ||
     FUNC_5(&VAR_15, &VAR_6->qstats) < 0)
  goto nla_put_failure;

 if (FUNC_7(&VAR_15) < 0)
  goto nla_put_failure;

 VAR_13->nlmsg_len = FUNC_13(VAR_5) - VAR_14;
 return VAR_5->len;

nlmsg_failure:
nla_put_failure:
 FUNC_9(VAR_5, VAR_14);
 return -1;
}
