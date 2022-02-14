
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xfrm_state {TYPE_1__* outer_mode; } ;
struct sk_buff {int local_df; int protocol; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int (* output2 ) (struct xfrm_state*,struct sk_buff*) ;} ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (struct xfrm_state*,struct sk_buff*) ;
 int FUNC_4 (struct xfrm_state*,struct sk_buff*) ;

int FUNC_5(struct xfrm_state *VAR_2, struct sk_buff *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_4(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_2(FUNC_0(VAR_3), 0, sizeof(*FUNC_0(VAR_3)));




 VAR_3->protocol = FUNC_1(VAR_0);
 VAR_3->local_df = 1;

 return VAR_2->outer_mode->output2(VAR_2, VAR_3);
}
