
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; } ;
struct xfrm_state {int lock; int xflags; TYPE_1__ km; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct xfrm_state*,int ) ;
 int FUNC_4 (struct xfrm_state*) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_3)
{
 struct xfrm_state *VAR_4 = (struct xfrm_state*)VAR_3;

 FUNC_0(&VAR_4->lock);

 if (VAR_4->km.state == VAR_1) {
  if (FUNC_2(FUNC_4(VAR_4)))
   FUNC_3(VAR_4, VAR_0);
  else
   VAR_4->xflags |= VAR_2;
 }

 FUNC_1(&VAR_4->lock);
}
