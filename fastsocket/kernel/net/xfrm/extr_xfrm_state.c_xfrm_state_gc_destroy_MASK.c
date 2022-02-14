
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_state {TYPE_1__* type; scalar_t__ outer_mode; scalar_t__ inner_mode_iaf; scalar_t__ inner_mode; struct xfrm_state* coaddr; struct xfrm_state* encap; struct xfrm_state* calg; struct xfrm_state* ealg; struct xfrm_state* aalg; int rtimer; int timer; } ;
struct TYPE_2__ {int (* destructor ) (struct xfrm_state*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct xfrm_state*) ;
 int FUNC_2 (struct xfrm_state*) ;
 int FUNC_3 (struct xfrm_state*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct xfrm_state *VAR_0)
{
 FUNC_0(&VAR_0->timer);
 FUNC_0(&VAR_0->rtimer);
 FUNC_1(VAR_0->aalg);
 FUNC_1(VAR_0->ealg);
 FUNC_1(VAR_0->calg);
 FUNC_1(VAR_0->encap);
 FUNC_1(VAR_0->coaddr);
 if (VAR_0->inner_mode)
  FUNC_4(VAR_0->inner_mode);
 if (VAR_0->inner_mode_iaf)
  FUNC_4(VAR_0->inner_mode_iaf);
 if (VAR_0->outer_mode)
  FUNC_4(VAR_0->outer_mode);
 if (VAR_0->type) {
  VAR_0->type->destructor(VAR_0);
  FUNC_5(VAR_0->type);
 }
 FUNC_2(VAR_0);
 FUNC_1(VAR_0);
}
