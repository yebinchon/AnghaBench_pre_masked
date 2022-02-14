
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid_t ;
typedef int u32 ;
struct xfrm_usersa_info {int dummy; } ;
struct TYPE_3__ {int state; } ;
struct xfrm_state {TYPE_1__ km; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {scalar_t__ nlmsg_type; int nlmsg_pid; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct km_event {scalar_t__ event; int pid; int seq; } ;
struct TYPE_4__ {int sid; int sessionid; int loginuid; } ;


 TYPE_2__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct xfrm_state*) ;
 int FUNC_2 (struct xfrm_state*,struct km_event*) ;
 struct xfrm_usersa_info* FUNC_3 (struct nlmsghdr*) ;
 struct net* FUNC_4 (int ) ;
 int FUNC_5 (struct xfrm_usersa_info*,struct nlattr**) ;
 int FUNC_6 (struct xfrm_state*,int,int ,int ,int ) ;
 int FUNC_7 (struct xfrm_state*) ;
 struct xfrm_state* FUNC_8 (struct net*,struct xfrm_usersa_info*,struct nlattr**,int*) ;
 int FUNC_9 (struct xfrm_state*) ;
 int FUNC_10 (struct xfrm_state*) ;
 int FUNC_11 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_2, struct nlmsghdr *VAR_3,
  struct nlattr **VAR_4)
{
 struct net *VAR_5 = FUNC_4(VAR_2->sk);
 struct xfrm_usersa_info *VAR_6 = FUNC_3(VAR_3);
 struct xfrm_state *VAR_7;
 int VAR_8;
 struct km_event VAR_9;
 uid_t VAR_10 = FUNC_0(VAR_2).loginuid;
 u32 VAR_11 = FUNC_0(VAR_2).sessionid;
 u32 VAR_12 = FUNC_0(VAR_2).sid;

 VAR_8 = FUNC_5(VAR_6, VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_7 = FUNC_8(VAR_5, VAR_6, VAR_4, &VAR_8);
 if (!VAR_7)
  return VAR_8;

 FUNC_9(VAR_7);
 if (VAR_3->nlmsg_type == VAR_0)
  VAR_8 = FUNC_7(VAR_7);
 else
  VAR_8 = FUNC_11(VAR_7);

 FUNC_6(VAR_7, VAR_8 ? 0 : 1, VAR_10, VAR_11, VAR_12);

 if (VAR_8 < 0) {
  VAR_7->km.state = VAR_1;
  FUNC_1(VAR_7);
  goto out;
 }

 VAR_9.seq = VAR_3->nlmsg_seq;
 VAR_9.pid = VAR_3->nlmsg_pid;
 VAR_9.event = VAR_3->nlmsg_type;

 FUNC_2(VAR_7, &VAR_9);
out:
 FUNC_10(VAR_7);
 return VAR_8;
}
