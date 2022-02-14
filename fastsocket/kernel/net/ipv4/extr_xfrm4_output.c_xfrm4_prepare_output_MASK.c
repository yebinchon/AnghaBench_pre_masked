
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xfrm_state {TYPE_1__* outer_mode; } ;
struct sk_buff {int protocol; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int (* output2 ) (struct xfrm_state*,struct sk_buff*) ;} ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (struct xfrm_state*,struct sk_buff*) ;
 int FUNC_4 (struct xfrm_state*,struct sk_buff*) ;

int FUNC_5(struct xfrm_state *VAR_3, struct sk_buff *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_4(VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_2(FUNC_0(VAR_4), 0, sizeof(*FUNC_0(VAR_4)));
 FUNC_0(VAR_4)->flags |= VAR_2 | VAR_1;

 VAR_4->protocol = FUNC_1(VAR_0);

 return VAR_3->outer_mode->output2(VAR_3, VAR_4);
}
