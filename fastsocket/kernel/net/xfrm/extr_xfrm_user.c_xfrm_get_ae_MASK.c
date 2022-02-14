
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct xfrm_usersa_id {int family; int proto; int spi; int daddr; } ;
struct xfrm_state {int lock; } ;
struct xfrm_mark {int dummy; } ;
struct xfrm_aevent_id {int flags; struct xfrm_usersa_id sa_id; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_pid; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct TYPE_5__ {int nlsk; } ;
struct net {TYPE_2__ xfrm; } ;
struct TYPE_4__ {int aevent; } ;
struct km_event {int pid; int seq; TYPE_1__ data; } ;
struct TYPE_6__ {int pid; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct xfrm_state*,struct km_event*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct xfrm_aevent_id* FUNC_4 (struct nlmsghdr*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,struct sk_buff*,int ) ;
 struct net* FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (struct nlattr**,struct xfrm_mark*) ;
 struct xfrm_state* FUNC_12 (struct net*,int ,int *,int ,int ,int ) ;
 int FUNC_13 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_3, struct nlmsghdr *VAR_4,
  struct nlattr **VAR_5)
{
 struct net *VAR_6 = FUNC_7(VAR_3->sk);
 struct xfrm_state *VAR_7;
 struct sk_buff *VAR_8;
 int VAR_9;
 struct km_event VAR_10;
 u32 VAR_11;
 struct xfrm_mark VAR_12;
 struct xfrm_aevent_id *VAR_13 = FUNC_4(VAR_4);
 struct xfrm_usersa_id *VAR_14 = &VAR_13->sa_id;

 VAR_8 = FUNC_5(FUNC_10(), VAR_2);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_11 = FUNC_11(VAR_5, &VAR_12);

 VAR_7 = FUNC_12(VAR_6, VAR_11, &VAR_14->daddr, VAR_14->spi, VAR_14->proto, VAR_14->family);
 if (VAR_7 == ((void*)0)) {
  FUNC_3(VAR_8);
  return -VAR_1;
 }






 FUNC_8(&VAR_7->lock);
 VAR_10.data.aevent = VAR_13->flags;
 VAR_10.seq = VAR_4->nlmsg_seq;
 VAR_10.pid = VAR_4->nlmsg_pid;

 if (FUNC_2(VAR_8, VAR_7, &VAR_10) < 0)
  FUNC_0();
 VAR_9 = FUNC_6(VAR_6->xfrm.nlsk, VAR_8, FUNC_1(VAR_3).pid);
 FUNC_9(&VAR_7->lock);
 FUNC_13(VAR_7);
 return VAR_9;
}
