
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfrm_user_tmpl {int family; } ;
struct xfrm_user_acquire {int calgos; int ealgos; int aalgos; int sel; int saddr; int id; int policy; } ;
struct xfrm_tmpl {int calgos; int ealgos; int aalgos; int reqid; int mode; int id; } ;
struct TYPE_4__ {int family; int reqid; int mode; int saddr; } ;
struct TYPE_3__ {int v; int m; } ;
struct xfrm_state {int xfrm_nr; TYPE_2__ props; int id; struct xfrm_tmpl* xfrm_vec; TYPE_1__ mark; int sel; } ;
struct xfrm_policy {int xfrm_nr; TYPE_2__ props; int id; struct xfrm_tmpl* xfrm_vec; TYPE_1__ mark; int sel; } ;
struct xfrm_mark {int v; int m; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct xfrm_state*) ;
 int FUNC_1 (struct xfrm_state*,struct xfrm_tmpl*,struct xfrm_state*) ;
 int FUNC_2 (int *,int *,int) ;
 struct xfrm_user_tmpl* FUNC_3 (struct nlattr*) ;
 struct xfrm_user_acquire* FUNC_4 (struct nlmsghdr*) ;
 int FUNC_5 (char*) ;
 struct net* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct nlattr**,struct xfrm_mark*) ;
 struct xfrm_state* FUNC_9 (struct net*,int *,struct nlattr**,int*) ;
 struct xfrm_state* FUNC_10 (struct net*) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_2, struct nlmsghdr *VAR_3,
  struct nlattr **VAR_4)
{
 struct net *VAR_5 = FUNC_6(VAR_2->sk);
 struct xfrm_policy *VAR_6;
 struct xfrm_user_tmpl *VAR_7;
 int VAR_8;
 struct nlattr *VAR_9 = VAR_4[VAR_1];
 struct xfrm_mark VAR_10;

 struct xfrm_user_acquire *VAR_11 = FUNC_4(VAR_3);
 struct xfrm_state *VAR_12 = FUNC_10(VAR_5);
 int VAR_13 = -VAR_0;

 if (!VAR_12)
  goto nomem;

 FUNC_8(VAR_4, &VAR_10);

 VAR_13 = FUNC_7(&VAR_11->policy);
 if (VAR_13)
  goto bad_policy;


 VAR_6 = FUNC_9(VAR_5, &VAR_11->policy, VAR_4, &VAR_13);
 if (!VAR_6)
  goto free_state;

 FUNC_2(&VAR_12->id, &VAR_11->id, sizeof(VAR_11->id));
 FUNC_2(&VAR_12->props.saddr, &VAR_11->saddr, sizeof(VAR_11->saddr));
 FUNC_2(&VAR_12->sel, &VAR_11->sel, sizeof(VAR_11->sel));
 VAR_6->mark.m = VAR_12->mark.m = VAR_10.m;
 VAR_6->mark.v = VAR_12->mark.v = VAR_10.v;
 VAR_7 = FUNC_3(VAR_9);

 for (VAR_8 = 0; VAR_8 < VAR_6->xfrm_nr; VAR_8++, VAR_7++) {
  struct xfrm_tmpl *VAR_14 = &VAR_6->xfrm_vec[VAR_8];
  FUNC_2(&VAR_12->id, &VAR_14->id, sizeof(VAR_12->id));
  VAR_12->props.mode = VAR_14->mode;
  VAR_12->props.reqid = VAR_14->reqid;
  VAR_12->props.family = VAR_7->family;
  VAR_14->aalgos = VAR_11->aalgos;
  VAR_14->ealgos = VAR_11->ealgos;
  VAR_14->calgos = VAR_11->calgos;
  VAR_13 = FUNC_1(VAR_12, VAR_14, VAR_6);

 }

 FUNC_0(VAR_12);
 FUNC_0(VAR_6);

 return 0;

bad_policy:
 FUNC_5("BAD policy passed\n");
free_state:
 FUNC_0(VAR_12);
nomem:
 return VAR_13;
}
