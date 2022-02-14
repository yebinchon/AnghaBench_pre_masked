
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int reqid; int saddr; int family; } ;
struct TYPE_6__ {int proto; int spi; int daddr; } ;
struct xfrm_state {int replay_maxdiff; int replay_maxage; int mark; int curlft; int replay; TYPE_3__ props; TYPE_2__ id; } ;
struct TYPE_5__ {int proto; int family; int spi; int daddr; } ;
struct xfrm_aevent_id {int flags; int reqid; int saddr; TYPE_1__ sa_id; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct TYPE_8__ {int aevent; } ;
struct km_event {TYPE_4__ data; int seq; int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int,int *) ;
 int FUNC_1 (struct sk_buff*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*) ;
 struct xfrm_aevent_id* FUNC_4 (struct nlmsghdr*) ;
 int FUNC_5 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_6 (struct sk_buff*,int ,int ,int ,int,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int *) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_9, struct xfrm_state *VAR_10, struct km_event *VAR_11)
{
 struct xfrm_aevent_id *VAR_12;
 struct nlmsghdr *VAR_13;

 VAR_13 = FUNC_6(VAR_9, VAR_11->pid, VAR_11->seq, VAR_8, sizeof(*VAR_12), 0);
 if (VAR_13 == ((void*)0))
  return -VAR_0;

 VAR_12 = FUNC_4(VAR_13);
 FUNC_2(&VAR_12->sa_id.daddr, &VAR_10->id.daddr,sizeof(VAR_10->id.daddr));
 VAR_12->sa_id.spi = VAR_10->id.spi;
 VAR_12->sa_id.family = VAR_10->props.family;
 VAR_12->sa_id.proto = VAR_10->id.proto;
 FUNC_2(&VAR_12->saddr, &VAR_10->props.saddr,sizeof(VAR_10->props.saddr));
 VAR_12->reqid = VAR_10->props.reqid;
 VAR_12->flags = VAR_11->data.aevent;

 FUNC_0(VAR_9, VAR_5, sizeof(VAR_10->replay), &VAR_10->replay);
 FUNC_0(VAR_9, VAR_3, sizeof(VAR_10->curlft), &VAR_10->curlft);

 if (VAR_12->flags & VAR_7)
  FUNC_1(VAR_9, VAR_4, VAR_10->replay_maxdiff);

 if (VAR_12->flags & VAR_6)
  FUNC_1(VAR_9, VAR_2,
       VAR_10->replay_maxage * 10 / VAR_1);

 if (FUNC_7(VAR_9, &VAR_10->mark))
  goto nla_put_failure;

 return FUNC_5(VAR_9, VAR_13);

nla_put_failure:
 FUNC_3(VAR_9, VAR_13);
 return -VAR_0;
}
