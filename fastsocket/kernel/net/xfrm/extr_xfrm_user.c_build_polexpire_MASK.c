
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_user_polexpire {int hard; int pol; } ;
struct xfrm_policy {int mark; int type; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct TYPE_2__ {int hard; } ;
struct km_event {int pid; TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfrm_policy*,int *,int) ;
 scalar_t__ FUNC_1 (int ,struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct xfrm_policy*,struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct xfrm_policy*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 struct xfrm_user_polexpire* FUNC_5 (struct nlmsghdr*) ;
 int FUNC_6 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_7 (struct sk_buff*,int ,int ,int ,int,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int *) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_2, struct xfrm_policy *VAR_3,
      int VAR_4, struct km_event *VAR_5)
{
 struct xfrm_user_polexpire *VAR_6;
 struct nlmsghdr *VAR_7;
 int VAR_8 = VAR_5->data.hard;

 VAR_7 = FUNC_7(VAR_2, VAR_5->pid, 0, VAR_1, sizeof(*VAR_6), 0);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_6 = FUNC_5(VAR_7);
 FUNC_0(VAR_3, &VAR_6->pol, VAR_4);
 if (FUNC_3(VAR_3, VAR_2) < 0)
  goto nlmsg_failure;
 if (FUNC_2(VAR_3, VAR_2))
  goto nlmsg_failure;
 if (FUNC_1(VAR_3->type, VAR_2) < 0)
  goto nlmsg_failure;
 if (FUNC_8(VAR_2, &VAR_3->mark))
  goto nla_put_failure;
 VAR_6->hard = !!VAR_8;

 return FUNC_6(VAR_2, VAR_7);

nla_put_failure:
nlmsg_failure:
 FUNC_4(VAR_2, VAR_7);
 return -VAR_0;
}
