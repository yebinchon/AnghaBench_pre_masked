
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; } ;
struct xfrm_state {int gclist; TYPE_1__ km; } ;
struct TYPE_4__ {int state_gc_work; int state_gc_list; } ;
struct net {TYPE_2__ xfrm; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 struct net* FUNC_5 (struct xfrm_state*) ;

void FUNC_6(struct xfrm_state *VAR_2)
{
 struct net *VAR_3 = FUNC_5(VAR_2);

 FUNC_0(VAR_2->km.state != VAR_0);

 FUNC_3(&VAR_1);
 FUNC_1(&VAR_2->gclist, &VAR_3->xfrm.state_gc_list);
 FUNC_4(&VAR_1);
 FUNC_2(&VAR_3->xfrm.state_gc_work);
}
