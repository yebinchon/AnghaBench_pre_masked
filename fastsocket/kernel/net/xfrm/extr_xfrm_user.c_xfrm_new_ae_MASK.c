
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {scalar_t__ state; } ;
struct xfrm_state {int lock; TYPE_2__ km; } ;
struct xfrm_mark {int dummy; } ;
struct TYPE_4__ {int family; int proto; int spi; int daddr; } ;
struct xfrm_aevent_id {TYPE_1__ sa_id; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_flags; int nlmsg_pid; int nlmsg_seq; int nlmsg_type; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_6__ {int aevent; } ;
struct km_event {TYPE_3__ data; int pid; int seq; int event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct xfrm_state*,struct km_event*) ;
 struct xfrm_aevent_id* FUNC_1 (struct nlmsghdr*) ;
 struct net* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nlattr**,struct xfrm_mark*) ;
 struct xfrm_state* FUNC_6 (struct net*,int ,int *,int ,int ,int ) ;
 int FUNC_7 (struct xfrm_state*) ;
 int FUNC_8 (struct xfrm_state*,struct nlattr**) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_7, struct nlmsghdr *VAR_8,
  struct nlattr **VAR_9)
{
 struct net *VAR_10 = FUNC_2(VAR_7->sk);
 struct xfrm_state *VAR_11;
 struct km_event VAR_12;
 int VAR_13 = - VAR_0;
 u32 VAR_14 = 0;
 struct xfrm_mark VAR_15;
 struct xfrm_aevent_id *VAR_16 = FUNC_1(VAR_8);
 struct nlattr *VAR_17 = VAR_9[VAR_4];
 struct nlattr *VAR_18 = VAR_9[VAR_3];

 if (!VAR_18 && !VAR_17)
  return VAR_13;


 if (!(VAR_8->nlmsg_flags&VAR_2))
  return VAR_13;

 VAR_14 = FUNC_5(VAR_9, &VAR_15);

 VAR_11 = FUNC_6(VAR_10, VAR_14, &VAR_16->sa_id.daddr, VAR_16->sa_id.spi, VAR_16->sa_id.proto, VAR_16->sa_id.family);
 if (VAR_11 == ((void*)0))
  return -VAR_1;

 if (VAR_11->km.state != VAR_6)
  goto out;

 FUNC_3(&VAR_11->lock);
 FUNC_8(VAR_11, VAR_9);
 FUNC_4(&VAR_11->lock);

 VAR_12.event = VAR_8->nlmsg_type;
 VAR_12.seq = VAR_8->nlmsg_seq;
 VAR_12.pid = VAR_8->nlmsg_pid;
 VAR_12.data.aevent = VAR_5;
 FUNC_0(VAR_11, &VAR_12);
 VAR_13 = 0;
out:
 FUNC_7(VAR_11);
 return VAR_13;
}
