
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct tcmsg {unsigned long tcm_handle; int tcm_info; int tcm_parent; int tcm_ifindex; scalar_t__ tcm__pad2; scalar_t__ tcm__pad1; int tcm_family; } ;
struct tcf_proto {TYPE_1__* ops; int protocol; int prio; int classid; int q; } ;
struct sk_buff {int len; } ;
struct nlmsghdr {int nlmsg_len; } ;
struct TYPE_4__ {int ifindex; } ;
struct TYPE_3__ {scalar_t__ (* dump ) (struct tcf_proto*,unsigned long,struct sk_buff*,struct tcmsg*) ;int kind; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 struct tcmsg* FUNC_1 (struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_2 (struct sk_buff*,int ,int ,int,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct sk_buff*,unsigned char*) ;
 TYPE_2__* FUNC_5 (int ) ;
 unsigned char* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct tcf_proto*,unsigned long,struct sk_buff*,struct tcmsg*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_3, struct tcf_proto *VAR_4,
    unsigned long VAR_5, u32 VAR_6, u32 VAR_7, u16 VAR_8, int VAR_9)
{
 struct tcmsg *VAR_10;
 struct nlmsghdr *VAR_11;
 unsigned char *VAR_12 = FUNC_6(VAR_3);

 VAR_11 = FUNC_2(VAR_3, VAR_6, VAR_7, VAR_9, sizeof(*VAR_10), VAR_8);
 VAR_10 = FUNC_1(VAR_11);
 VAR_10->tcm_family = VAR_0;
 VAR_10->tcm__pad1 = 0;
 VAR_10->tcm__pad2 = 0;
 VAR_10->tcm_ifindex = FUNC_5(VAR_4->q)->ifindex;
 VAR_10->tcm_parent = VAR_4->classid;
 VAR_10->tcm_info = FUNC_3(VAR_4->prio, VAR_4->protocol);
 FUNC_0(VAR_3, VAR_2, VAR_4->ops->kind);
 VAR_10->tcm_handle = VAR_5;
 if (VAR_1 != VAR_9) {
  VAR_10->tcm_handle = 0;
  if (VAR_4->ops->dump && VAR_4->ops->dump(VAR_4, VAR_5, VAR_3, VAR_10) < 0)
   goto nla_put_failure;
 }
 VAR_11->nlmsg_len = FUNC_6(VAR_3) - VAR_12;
 return VAR_3->len;

nlmsg_failure:
nla_put_failure:
 FUNC_4(VAR_3, VAR_12);
 return -1;
}
