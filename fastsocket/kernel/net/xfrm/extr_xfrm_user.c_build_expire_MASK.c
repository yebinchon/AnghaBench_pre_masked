
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_user_expire {int hard; int state; } ;
struct xfrm_state {int mark; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct TYPE_2__ {scalar_t__ hard; } ;
struct km_event {TYPE_1__ data; int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfrm_state*,int *) ;
 struct xfrm_user_expire* FUNC_1 (struct nlmsghdr*) ;
 int FUNC_2 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_3 (struct sk_buff*,int ,int ,int ,int,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int *) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_2, struct xfrm_state *VAR_3, struct km_event *VAR_4)
{
 struct xfrm_user_expire *VAR_5;
 struct nlmsghdr *VAR_6;

 VAR_6 = FUNC_3(VAR_2, VAR_4->pid, 0, VAR_1, sizeof(*VAR_5), 0);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_6);
 FUNC_0(VAR_3, &VAR_5->state);
 VAR_5->hard = (VAR_4->data.hard != 0) ? 1 : 0;

 if (FUNC_4(VAR_2, &VAR_3->mark))
  goto nla_put_failure;

 return FUNC_2(VAR_2, VAR_6);

nla_put_failure:
 return -VAR_0;
}
