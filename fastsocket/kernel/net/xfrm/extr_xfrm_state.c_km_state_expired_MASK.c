
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct xfrm_state {int dummy; } ;
struct TYPE_4__ {int km_waitq; } ;
struct net {TYPE_2__ xfrm; } ;
struct TYPE_3__ {int hard; } ;
struct km_event {int event; int pid; TYPE_1__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfrm_state*,struct km_event*) ;
 int FUNC_1 (int *) ;
 struct net* FUNC_2 (struct xfrm_state*) ;

void FUNC_3(struct xfrm_state *VAR_1, int VAR_2, u32 VAR_3)
{
 struct net *VAR_4 = FUNC_2(VAR_1);
 struct km_event VAR_5;

 VAR_5.data.hard = VAR_2;
 VAR_5.pid = VAR_3;
 VAR_5.event = VAR_0;
 FUNC_0(VAR_1, &VAR_5);

 if (VAR_2)
  FUNC_1(&VAR_4->xfrm.km_waitq);
}
