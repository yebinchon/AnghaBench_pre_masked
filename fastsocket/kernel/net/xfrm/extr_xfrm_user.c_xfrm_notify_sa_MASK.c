
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xfrm_usersa_info {int dummy; } ;
struct xfrm_usersa_id {int proto; int family; int spi; int daddr; } ;
struct TYPE_5__ {int proto; int spi; int daddr; } ;
struct TYPE_4__ {int family; } ;
struct xfrm_state {TYPE_2__ id; TYPE_1__ props; } ;
struct xfrm_mark {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_6__ {int nlsk; } ;
struct net {TYPE_3__ xfrm; } ;
struct km_event {int event; int seq; int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct xfrm_state*,struct xfrm_usersa_info*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,int *,int) ;
 struct xfrm_usersa_info* FUNC_5 (struct nlattr*) ;
 struct nlattr* FUNC_6 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_7 (int) ;
 void* FUNC_8 (struct nlmsghdr*) ;
 int FUNC_9 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_10 (int ,struct sk_buff*,int ,int ,int ) ;
 struct sk_buff* FUNC_11 (int,int ) ;
 struct nlmsghdr* FUNC_12 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int FUNC_13 (struct xfrm_state*) ;
 struct net* FUNC_14 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_15(struct xfrm_state *VAR_5, struct km_event *VAR_6)
{
 struct net *VAR_7 = FUNC_14(VAR_5);
 struct xfrm_usersa_info *VAR_8;
 struct xfrm_usersa_id *VAR_9;
 struct nlmsghdr *VAR_10;
 struct sk_buff *VAR_11;
 int VAR_12 = FUNC_13(VAR_5);
 int VAR_13;

 VAR_13 = sizeof(*VAR_8);
 if (VAR_6->event == VAR_4) {
  VAR_12 += FUNC_7(VAR_13);
  VAR_13 = sizeof(*VAR_9);
  VAR_12 += FUNC_7(sizeof(struct xfrm_mark));
 }
 VAR_12 += FUNC_0(VAR_13);

 VAR_11 = FUNC_11(VAR_12, VAR_1);
 if (VAR_11 == ((void*)0))
  return -VAR_0;

 VAR_10 = FUNC_12(VAR_11, VAR_6->pid, VAR_6->seq, VAR_6->event, VAR_13, 0);
 if (VAR_10 == ((void*)0))
  goto nla_put_failure;

 VAR_8 = FUNC_8(VAR_10);
 if (VAR_6->event == VAR_4) {
  struct nlattr *VAR_14;

  VAR_9 = FUNC_8(VAR_10);
  FUNC_4(&VAR_9->daddr, &VAR_5->id.daddr, sizeof(VAR_9->daddr));
  VAR_9->spi = VAR_5->id.spi;
  VAR_9->family = VAR_5->props.family;
  VAR_9->proto = VAR_5->id.proto;

  VAR_14 = FUNC_6(VAR_11, VAR_2, sizeof(*VAR_8));
  if (VAR_14 == ((void*)0))
   goto nla_put_failure;

  VAR_8 = FUNC_5(VAR_14);
 }

 if (FUNC_2(VAR_5, VAR_8, VAR_11))
  goto nla_put_failure;

 FUNC_9(VAR_11, VAR_10);

 return FUNC_10(VAR_7->xfrm.nlsk, VAR_11, 0, VAR_3, VAR_1);

nla_put_failure:

 FUNC_1(1);
 FUNC_3(VAR_11);
 return -1;
}
