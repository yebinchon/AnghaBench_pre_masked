
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfrm_state {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int protocol; } ;
struct TYPE_3__ {int nexthdr; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;

int FUNC_4(struct xfrm_state *VAR_0, struct sk_buff *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_0(VAR_1)->protocol = FUNC_1(VAR_1)->nexthdr;

 return FUNC_2(VAR_1);
}
