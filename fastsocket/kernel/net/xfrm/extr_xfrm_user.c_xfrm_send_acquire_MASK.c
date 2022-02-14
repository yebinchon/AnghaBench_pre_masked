
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_tmpl {int dummy; } ;
struct xfrm_state {int dummy; } ;
struct xfrm_policy {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int nlsk; } ;
struct net {TYPE_1__ xfrm; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct xfrm_state*,struct xfrm_tmpl*,struct xfrm_policy*,int) ;
 int FUNC_2 (int ,struct sk_buff*,int ,int ,int ) ;
 struct sk_buff* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct xfrm_state*,struct xfrm_policy*) ;
 struct net* FUNC_5 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_6(struct xfrm_state *VAR_3, struct xfrm_tmpl *VAR_4,
        struct xfrm_policy *VAR_5, int VAR_6)
{
 struct net *VAR_7 = FUNC_5(VAR_3);
 struct sk_buff *VAR_8;

 VAR_8 = FUNC_3(FUNC_4(VAR_3, VAR_5), VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 if (FUNC_1(VAR_8, VAR_3, VAR_4, VAR_5, VAR_6) < 0)
  FUNC_0();

 return FUNC_2(VAR_7->xfrm.nlsk, VAR_8, 0, VAR_2, VAR_1);
}
