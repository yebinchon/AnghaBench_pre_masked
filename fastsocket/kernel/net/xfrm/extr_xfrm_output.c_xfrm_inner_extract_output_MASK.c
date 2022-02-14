
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ family; } ;
struct xfrm_state {struct xfrm_mode* inner_mode; TYPE_1__ sel; } ;
struct xfrm_mode {TYPE_3__* afinfo; } ;
struct sk_buff {int dummy; } ;
struct TYPE_8__ {TYPE_2__* ops; } ;
struct TYPE_7__ {int (* extract_output ) (struct xfrm_state*,struct sk_buff*) ;} ;
struct TYPE_6__ {int family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct xfrm_state*,struct sk_buff*) ;
 int FUNC_2 (int ) ;
 struct xfrm_mode* FUNC_3 (struct xfrm_state*,int ) ;

int FUNC_4(struct xfrm_state *VAR_2, struct sk_buff *VAR_3)
{
 struct xfrm_mode *VAR_4;
 if (VAR_2->sel.family == VAR_0)
  VAR_4 = FUNC_3(VAR_2,
    FUNC_2(FUNC_0(VAR_3)->ops->family));
 else
  VAR_4 = VAR_2->inner_mode;

 if (VAR_4 == ((void*)0))
  return -VAR_1;
 return VAR_4->afinfo->extract_output(VAR_2, VAR_3);
}
