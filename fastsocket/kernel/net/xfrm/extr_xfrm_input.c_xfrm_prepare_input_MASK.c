
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ family; } ;
struct xfrm_state {TYPE_4__ sel; TYPE_3__* outer_mode; struct xfrm_mode* inner_mode; } ;
struct xfrm_mode {int (* input2 ) (struct xfrm_state*,struct sk_buff*) ;TYPE_1__* afinfo; } ;
struct sk_buff {int protocol; } ;
struct TYPE_10__ {int protocol; } ;
struct TYPE_8__ {TYPE_2__* afinfo; } ;
struct TYPE_7__ {int (* extract_input ) (struct xfrm_state*,struct sk_buff*) ;} ;
struct TYPE_6__ {int eth_proto; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct xfrm_state*,struct sk_buff*) ;
 int FUNC_2 (struct xfrm_state*,struct sk_buff*) ;
 struct xfrm_mode* FUNC_3 (struct xfrm_state*,int ) ;

int FUNC_4(struct xfrm_state *VAR_2, struct sk_buff *VAR_3)
{
 struct xfrm_mode *VAR_4 = VAR_2->inner_mode;
 int VAR_5;

 VAR_5 = VAR_2->outer_mode->afinfo->extract_input(VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 if (VAR_2->sel.family == VAR_0) {
  VAR_4 = FUNC_3(VAR_2, FUNC_0(VAR_3)->protocol);
  if (VAR_4 == ((void*)0))
   return -VAR_1;
 }

 VAR_3->protocol = VAR_4->afinfo->eth_proto;
 return VAR_4->input2(VAR_2, VAR_3);
}
