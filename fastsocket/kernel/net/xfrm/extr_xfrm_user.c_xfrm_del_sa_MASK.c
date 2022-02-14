
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
typedef int u32 ;
struct xfrm_usersa_id {int dummy; } ;
struct xfrm_state {int dummy; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_type; int nlmsg_pid; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct km_event {int event; int pid; int seq; } ;
struct TYPE_2__ {int sid; int sessionid; int loginuid; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct xfrm_state*,struct km_event*) ;
 struct xfrm_usersa_id* FUNC_2 (struct nlmsghdr*) ;
 int FUNC_3 (struct xfrm_state*) ;
 struct net* FUNC_4 (int ) ;
 int FUNC_5 (struct xfrm_state*,int,int ,int ,int ) ;
 int FUNC_6 (struct xfrm_state*) ;
 scalar_t__ FUNC_7 (struct xfrm_state*) ;
 int FUNC_8 (struct xfrm_state*) ;
 struct xfrm_state* FUNC_9 (struct net*,struct xfrm_usersa_id*,struct nlattr**,int*) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_2, struct nlmsghdr *VAR_3,
  struct nlattr **VAR_4)
{
 struct net *VAR_5 = FUNC_4(VAR_2->sk);
 struct xfrm_state *VAR_6;
 int VAR_7 = -VAR_1;
 struct km_event VAR_8;
 struct xfrm_usersa_id *VAR_9 = FUNC_2(VAR_3);
 uid_t VAR_10 = FUNC_0(VAR_2).loginuid;
 u32 VAR_11 = FUNC_0(VAR_2).sessionid;
 u32 VAR_12 = FUNC_0(VAR_2).sid;

 VAR_6 = FUNC_9(VAR_5, VAR_9, VAR_4, &VAR_7);
 if (VAR_6 == ((void*)0))
  return VAR_7;

 if ((VAR_7 = FUNC_3(VAR_6)) != 0)
  goto out;

 if (FUNC_7(VAR_6)) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_7 = FUNC_6(VAR_6);

 if (VAR_7 < 0)
  goto out;

 VAR_8.seq = VAR_3->nlmsg_seq;
 VAR_8.pid = VAR_3->nlmsg_pid;
 VAR_8.event = VAR_3->nlmsg_type;
 FUNC_1(VAR_6, &VAR_8);

out:
 FUNC_5(VAR_6, VAR_7 ? 0 : 1, VAR_10, VAR_11, VAR_12);
 FUNC_8(VAR_6);
 return VAR_7;
}
