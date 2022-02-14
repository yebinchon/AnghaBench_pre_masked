
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfrm_user_acquire {int seq; int calgos; int ealgos; int aalgos; int policy; int sel; int saddr; int id; } ;
struct xfrm_tmpl {int calgos; int ealgos; int aalgos; } ;
struct TYPE_4__ {int seq; } ;
struct TYPE_3__ {int saddr; } ;
struct xfrm_state {TYPE_2__ km; int sel; TYPE_1__ props; int id; } ;
struct xfrm_policy {int mark; int type; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfrm_policy*,int *,int) ;
 scalar_t__ FUNC_1 (int ,struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct xfrm_state*,struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct xfrm_policy*,struct sk_buff*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct sk_buff*,struct nlmsghdr*) ;
 struct xfrm_user_acquire* FUNC_6 (struct nlmsghdr*) ;
 int FUNC_7 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_8 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (struct sk_buff*,int *) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_2, struct xfrm_state *VAR_3,
    struct xfrm_tmpl *VAR_4, struct xfrm_policy *VAR_5,
    int VAR_6)
{
 struct xfrm_user_acquire *VAR_7;
 struct nlmsghdr *VAR_8;
 __u32 VAR_9 = FUNC_9();

 VAR_8 = FUNC_8(VAR_2, 0, 0, VAR_1, sizeof(*VAR_7), 0);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_7 = FUNC_6(VAR_8);
 FUNC_4(&VAR_7->id, &VAR_3->id, sizeof(VAR_7->id));
 FUNC_4(&VAR_7->saddr, &VAR_3->props.saddr, sizeof(VAR_7->saddr));
 FUNC_4(&VAR_7->sel, &VAR_3->sel, sizeof(VAR_7->sel));
 FUNC_0(VAR_5, &VAR_7->policy, VAR_6);
 VAR_7->aalgos = VAR_4->aalgos;
 VAR_7->ealgos = VAR_4->ealgos;
 VAR_7->calgos = VAR_4->calgos;
 VAR_7->seq = VAR_3->km.seq = VAR_9;

 if (FUNC_3(VAR_5, VAR_2) < 0)
  goto nlmsg_failure;
 if (FUNC_2(VAR_3, VAR_2))
  goto nlmsg_failure;
 if (FUNC_1(VAR_5->type, VAR_2) < 0)
  goto nlmsg_failure;
 if (FUNC_10(VAR_2, &VAR_5->mark))
  goto nla_put_failure;

 return FUNC_7(VAR_2, VAR_8);

nla_put_failure:
nlmsg_failure:
 FUNC_5(VAR_2, VAR_8);
 return -VAR_0;
}
