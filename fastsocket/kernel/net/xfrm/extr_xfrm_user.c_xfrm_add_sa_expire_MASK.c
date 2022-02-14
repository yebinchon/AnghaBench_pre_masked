
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uid_t ;
typedef int u32 ;
struct TYPE_5__ {int proto; int spi; int daddr; } ;
struct xfrm_usersa_info {int family; TYPE_1__ id; } ;
struct xfrm_user_expire {scalar_t__ hard; struct xfrm_usersa_info state; } ;
struct TYPE_6__ {scalar_t__ state; } ;
struct xfrm_state {int lock; TYPE_2__ km; } ;
struct xfrm_mark {int dummy; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_8__ {int sid; int sessionid; int loginuid; } ;
struct TYPE_7__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct xfrm_state*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_2 (struct xfrm_state*,scalar_t__,int ) ;
 struct xfrm_user_expire* FUNC_3 (struct nlmsghdr*) ;
 struct net* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct xfrm_state*,int,int ,int ,int ) ;
 int FUNC_8 (struct nlattr**,struct xfrm_mark*) ;
 struct xfrm_state* FUNC_9 (struct net*,int ,int *,int ,int ,int ) ;
 int FUNC_10 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_4, struct nlmsghdr *VAR_5,
  struct nlattr **VAR_6)
{
 struct net *VAR_7 = FUNC_4(VAR_4->sk);
 struct xfrm_state *VAR_8;
 int VAR_9;
 struct xfrm_user_expire *VAR_10 = FUNC_3(VAR_5);
 struct xfrm_usersa_info *VAR_11 = &VAR_10->state;
 struct xfrm_mark VAR_12;
 u32 VAR_13 = FUNC_8(VAR_6, &VAR_12);;

 VAR_8 = FUNC_9(VAR_7, VAR_13, &VAR_11->id.daddr, VAR_11->id.spi, VAR_11->id.proto, VAR_11->family);

 VAR_9 = -VAR_1;
 if (VAR_8 == ((void*)0))
  return VAR_9;

 FUNC_5(&VAR_8->lock);
 VAR_9 = -VAR_0;
 if (VAR_8->km.state != VAR_2)
  goto out;
 FUNC_2(VAR_8, VAR_10->hard, VAR_3->pid);

 if (VAR_10->hard) {
  uid_t VAR_14 = FUNC_0(VAR_4).loginuid;
  uid_t VAR_15 = FUNC_0(VAR_4).sessionid;
  u32 VAR_16 = FUNC_0(VAR_4).sid;
  FUNC_1(VAR_8);
  FUNC_7(VAR_8, 1, VAR_14, VAR_15, VAR_16);
 }
 VAR_9 = 0;
out:
 FUNC_6(&VAR_8->lock);
 FUNC_10(VAR_8);
 return VAR_9;
}
