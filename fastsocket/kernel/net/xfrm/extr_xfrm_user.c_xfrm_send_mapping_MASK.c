
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfrm_address_t ;
struct TYPE_3__ {scalar_t__ proto; } ;
struct xfrm_state {int encap; TYPE_1__ id; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int nlsk; } ;
struct net {TYPE_2__ xfrm; } ;
typedef int __be16 ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct xfrm_state*,int *,int ) ;
 int FUNC_2 (int ,struct sk_buff*,int ,int ,int ) ;
 struct sk_buff* FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 struct net* FUNC_5 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_6(struct xfrm_state *VAR_5, xfrm_address_t *VAR_6,
        __be16 VAR_7)
{
 struct net *VAR_8 = FUNC_5(VAR_5);
 struct sk_buff *VAR_9;

 if (VAR_5->id.proto != VAR_3)
  return -VAR_0;

 if (!VAR_5->encap)
  return -VAR_0;

 VAR_9 = FUNC_3(FUNC_4(), VAR_2);
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 if (FUNC_1(VAR_9, VAR_5, VAR_6, VAR_7) < 0)
  FUNC_0();

 return FUNC_2(VAR_8->xfrm.nlsk, VAR_9, 0, VAR_4, VAR_2);
}
