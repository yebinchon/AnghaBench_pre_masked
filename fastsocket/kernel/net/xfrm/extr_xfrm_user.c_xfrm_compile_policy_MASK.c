
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int family; } ;
struct xfrm_userpolicy_info {int dir; TYPE_1__ sel; } ;
struct xfrm_user_tmpl {int dummy; } ;
struct xfrm_policy {int type; } ;
struct sock {int sk_family; } ;
struct net {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct xfrm_policy*,struct xfrm_userpolicy_info*) ;
 int FUNC_1 (struct xfrm_policy*,struct xfrm_user_tmpl*,int) ;
 struct net* FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (int,struct xfrm_user_tmpl*,int ) ;
 scalar_t__ FUNC_4 (struct xfrm_userpolicy_info*) ;
 struct xfrm_policy* FUNC_5 (struct net*,int ) ;

__attribute__((used)) static struct xfrm_policy *FUNC_6(struct sock *VAR_8, int VAR_9,
            u8 *VAR_10, int VAR_11, int *VAR_12)
{
 struct net *VAR_13 = FUNC_2(VAR_8);
 struct xfrm_userpolicy_info *VAR_14 = (struct xfrm_userpolicy_info *)VAR_10;
 struct xfrm_user_tmpl *VAR_15 = (struct xfrm_user_tmpl *) (VAR_14 + 1);
 struct xfrm_policy *VAR_16;
 int VAR_17;

 switch (VAR_8->sk_family) {
 case 129:
  if (VAR_9 != VAR_5) {
   *VAR_12 = -VAR_2;
   return ((void*)0);
  }
  break;
 default:
  *VAR_12 = -VAR_0;
  return ((void*)0);
 }

 *VAR_12 = -VAR_0;

 if (VAR_11 < sizeof(*VAR_14) ||
     FUNC_4(VAR_14))
  return ((void*)0);

 VAR_17 = ((VAR_11 - sizeof(*VAR_14)) / sizeof(*VAR_15));
 if (FUNC_3(VAR_17, VAR_15, VAR_14->sel.family))
  return ((void*)0);

 if (VAR_14->dir > VAR_6)
  return ((void*)0);

 VAR_16 = FUNC_5(VAR_13, VAR_3);
 if (VAR_16 == ((void*)0)) {
  *VAR_12 = -VAR_1;
  return ((void*)0);
 }

 FUNC_0(VAR_16, VAR_14);
 VAR_16->type = VAR_7;
 FUNC_1(VAR_16, VAR_15, VAR_17);

 *VAR_12 = VAR_14->dir;

 return VAR_16;
}
