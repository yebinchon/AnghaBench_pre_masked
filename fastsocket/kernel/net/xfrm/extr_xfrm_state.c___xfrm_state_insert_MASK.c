
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int * next; } ;
struct TYPE_8__ {int family; int saddr; int reqid; } ;
struct TYPE_7__ {int proto; int spi; int daddr; } ;
struct TYPE_6__ {int all; } ;
struct xfrm_state {TYPE_5__ bydst; scalar_t__ replay_maxage; int rtimer; int timer; TYPE_5__ byspi; TYPE_3__ props; TYPE_2__ id; TYPE_5__ bysrc; TYPE_1__ km; } ;
struct TYPE_9__ {int state_num; int km_waitq; scalar_t__ state_byspi; scalar_t__ state_bysrc; scalar_t__ state_bydst; int state_all; } ;
struct net {TYPE_4__ xfrm; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_5__*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 (struct net*,int *,int *,int ,int ) ;
 int FUNC_5 (struct net*,int ) ;
 unsigned int FUNC_6 (struct net*,int *,int ,int ,int ) ;
 unsigned int FUNC_7 (struct net*,int *,int *,int ) ;
 struct net* FUNC_8 (struct xfrm_state*) ;

__attribute__((used)) static void FUNC_9(struct xfrm_state *VAR_2)
{
 struct net *VAR_3 = FUNC_8(VAR_2);
 unsigned int VAR_4;

 FUNC_1(&VAR_2->km.all, &VAR_3->xfrm.state_all);

 VAR_4 = FUNC_4(VAR_3, &VAR_2->id.daddr, &VAR_2->props.saddr,
     VAR_2->props.reqid, VAR_2->props.family);
 FUNC_0(&VAR_2->bydst, VAR_3->xfrm.state_bydst+VAR_4);

 VAR_4 = FUNC_7(VAR_3, &VAR_2->id.daddr, &VAR_2->props.saddr, VAR_2->props.family);
 FUNC_0(&VAR_2->bysrc, VAR_3->xfrm.state_bysrc+VAR_4);

 if (VAR_2->id.spi) {
  VAR_4 = FUNC_6(VAR_3, &VAR_2->id.daddr, VAR_2->id.spi, VAR_2->id.proto,
      VAR_2->props.family);

  FUNC_0(&VAR_2->byspi, VAR_3->xfrm.state_byspi+VAR_4);
 }

 FUNC_2(&VAR_2->timer, VAR_1 + VAR_0);
 if (VAR_2->replay_maxage)
  FUNC_2(&VAR_2->rtimer, VAR_1 + VAR_2->replay_maxage);

 FUNC_3(&VAR_3->xfrm.km_waitq);

 VAR_3->xfrm.state_num++;

 FUNC_5(VAR_3, VAR_2->bydst.next != ((void*)0));
}
