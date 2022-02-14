
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfrm_userpolicy_info {int dummy; } ;
struct xfrm_userpolicy_id {int dir; int sel; int index; } ;
struct xfrm_user_tmpl {int dummy; } ;
struct xfrm_policy {int xfrm_nr; int mark; int type; int selector; int index; } ;
struct xfrm_mark {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_4__ {int nlsk; } ;
struct net {TYPE_2__ xfrm; } ;
struct TYPE_3__ {scalar_t__ byid; } ;
struct km_event {TYPE_1__ data; int event; int seq; int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct xfrm_policy*,struct xfrm_userpolicy_info*,int) ;
 scalar_t__ FUNC_2 (int ,struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct xfrm_policy*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (struct xfrm_userpolicy_id*,int ,int) ;
 struct xfrm_userpolicy_info* FUNC_7 (struct nlattr*) ;
 struct nlattr* FUNC_8 (struct sk_buff*,int ,int) ;
 int FUNC_9 (int) ;
 void* FUNC_10 (struct nlmsghdr*) ;
 int FUNC_11 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_12 (int ,struct sk_buff*,int ,int ,int ) ;
 struct sk_buff* FUNC_13 (int,int ) ;
 struct nlmsghdr* FUNC_14 (struct sk_buff*,int ,int ,int ,int,int ) ;
 scalar_t__ FUNC_15 () ;
 scalar_t__ FUNC_16 (struct sk_buff*,int *) ;
 struct net* FUNC_17 (struct xfrm_policy*) ;

__attribute__((used)) static int FUNC_18(struct xfrm_policy *VAR_5, int VAR_6, struct km_event *VAR_7)
{
 struct net *VAR_8 = FUNC_17(VAR_5);
 struct xfrm_userpolicy_info *VAR_9;
 struct xfrm_userpolicy_id *VAR_10;
 struct nlmsghdr *VAR_11;
 struct sk_buff *VAR_12;
 int VAR_13 = FUNC_9(sizeof(struct xfrm_user_tmpl) * VAR_5->xfrm_nr);
 int VAR_14;

 VAR_14 = sizeof(*VAR_9);
 if (VAR_7->event == VAR_4) {
  VAR_13 += FUNC_9(VAR_14);
  VAR_14 = sizeof(*VAR_10);
 }
 VAR_13 += FUNC_15();
 VAR_13 += FUNC_9(sizeof(struct xfrm_mark));
 VAR_13 += FUNC_0(VAR_14);

 VAR_12 = FUNC_13(VAR_13, VAR_1);
 if (VAR_12 == ((void*)0))
  return -VAR_0;

 VAR_11 = FUNC_14(VAR_12, VAR_7->pid, VAR_7->seq, VAR_7->event, VAR_14, 0);
 if (VAR_11 == ((void*)0))
  goto nlmsg_failure;

 VAR_9 = FUNC_10(VAR_11);
 if (VAR_7->event == VAR_4) {
  struct nlattr *VAR_15;

  VAR_10 = FUNC_10(VAR_11);
  FUNC_6(VAR_10, 0, sizeof(*VAR_10));
  VAR_10->dir = VAR_6;
  if (VAR_7->data.byid)
   VAR_10->index = VAR_5->index;
  else
   FUNC_5(&VAR_10->sel, &VAR_5->selector, sizeof(VAR_10->sel));

  VAR_15 = FUNC_8(VAR_12, VAR_2, sizeof(*VAR_9));
  if (VAR_15 == ((void*)0))
   goto nlmsg_failure;

  VAR_9 = FUNC_7(VAR_15);
 }

 FUNC_1(VAR_5, VAR_9, VAR_6);
 if (FUNC_3(VAR_5, VAR_12) < 0)
  goto nlmsg_failure;
 if (FUNC_2(VAR_5->type, VAR_12) < 0)
  goto nlmsg_failure;

 if (FUNC_16(VAR_12, &VAR_5->mark))
  goto nla_put_failure;

 FUNC_11(VAR_12, VAR_11);

 return FUNC_12(VAR_8->xfrm.nlsk, VAR_12, 0, VAR_3, VAR_1);

nla_put_failure:
nlmsg_failure:
 FUNC_4(VAR_12);
 return -1;
}
