
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_state {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int nlsk; } ;
struct net {TYPE_1__ xfrm; } ;
struct km_event {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct xfrm_state*,struct km_event*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,struct sk_buff*,int ,int ,int ) ;
 struct sk_buff* FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 struct net* FUNC_5 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_6(struct xfrm_state *VAR_4, struct km_event *VAR_5)
{
 struct net *VAR_6 = FUNC_5(VAR_4);
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_3(FUNC_4(), VAR_2);
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 if (FUNC_0(VAR_7, VAR_4, VAR_5) < 0) {
  FUNC_1(VAR_7);
  return -VAR_0;
 }

 return FUNC_2(VAR_6->xfrm.nlsk, VAR_7, 0, VAR_3, VAR_2);
}
