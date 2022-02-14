
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * ops; } ;
struct TYPE_3__ {int all; } ;
struct xfrm_policy {TYPE_2__ flo; int timer; int refcnt; int lock; int byidx; int bydst; TYPE_1__ walk; int xp_net; } ;
struct net {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 struct xfrm_policy* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,unsigned long) ;
 int FUNC_6 (int *,struct net*) ;
 int VAR_0 ;
 int VAR_1 ;

struct xfrm_policy *FUNC_7(struct net *VAR_2, gfp_t VAR_3)
{
 struct xfrm_policy *VAR_4;

 VAR_4 = FUNC_3(sizeof(struct xfrm_policy), VAR_3);

 if (VAR_4) {
  FUNC_6(&VAR_4->xp_net, VAR_2);
  FUNC_1(&VAR_4->walk.all);
  FUNC_0(&VAR_4->bydst);
  FUNC_0(&VAR_4->byidx);
  FUNC_4(&VAR_4->lock);
  FUNC_2(&VAR_4->refcnt, 1);
  FUNC_5(&VAR_4->timer, VAR_1,
    (unsigned long)VAR_4);
  VAR_4->flo.ops = &VAR_0;
 }
 return VAR_4;
}
