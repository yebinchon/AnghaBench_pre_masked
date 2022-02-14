
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ spi; } ;
struct TYPE_6__ {scalar_t__ state; int all; } ;
struct xfrm_state {int byspi; TYPE_1__ id; int bysrc; int bydst; TYPE_3__ km; } ;
struct TYPE_5__ {int state_num; } ;
struct net {TYPE_2__ xfrm; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (struct xfrm_state*) ;
 struct net* FUNC_5 (struct xfrm_state*) ;

int FUNC_6(struct xfrm_state *VAR_3)
{
 struct net *VAR_4 = FUNC_5(VAR_3);
 int VAR_5 = -VAR_0;

 if (VAR_3->km.state != VAR_1) {
  VAR_3->km.state = VAR_1;
  FUNC_2(&VAR_2);
  FUNC_1(&VAR_3->km.all);
  FUNC_0(&VAR_3->bydst);
  FUNC_0(&VAR_3->bysrc);
  if (VAR_3->id.spi)
   FUNC_0(&VAR_3->byspi);
  VAR_4->xfrm.state_num--;
  FUNC_3(&VAR_2);





  FUNC_4(VAR_3);
  VAR_5 = 0;
 }

 return VAR_5;
}
