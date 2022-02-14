
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {void* hard_packet_limit; void* hard_byte_limit; void* soft_packet_limit; void* soft_byte_limit; } ;
struct TYPE_5__ {int add_time; } ;
struct TYPE_4__ {int all; } ;
struct xfrm_state {int lock; int * inner_mode_iaf; int * inner_mode; scalar_t__ replay_maxdiff; scalar_t__ replay_maxage; TYPE_3__ lft; TYPE_2__ curlft; int rtimer; int timer; int byspi; int bysrc; int bydst; TYPE_1__ km; int tunnel_users; int refcnt; int xs_net; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* VAR_1 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 () ;
 struct xfrm_state* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int ,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct net*) ;
 int VAR_2 ;
 int VAR_3 ;

struct xfrm_state *FUNC_8(struct net *VAR_4)
{
 struct xfrm_state *VAR_5;

 VAR_5 = FUNC_4(sizeof(struct xfrm_state), VAR_0);

 if (VAR_5) {
  FUNC_7(&VAR_5->xs_net, VAR_4);
  FUNC_2(&VAR_5->refcnt, 1);
  FUNC_2(&VAR_5->tunnel_users, 0);
  FUNC_1(&VAR_5->km.all);
  FUNC_0(&VAR_5->bydst);
  FUNC_0(&VAR_5->bysrc);
  FUNC_0(&VAR_5->byspi);
  FUNC_5(&VAR_5->timer, VAR_3, (unsigned long)VAR_5);
  FUNC_5(&VAR_5->rtimer, VAR_2,
    (unsigned long)VAR_5);
  VAR_5->curlft.add_time = FUNC_3();
  VAR_5->lft.soft_byte_limit = VAR_1;
  VAR_5->lft.soft_packet_limit = VAR_1;
  VAR_5->lft.hard_byte_limit = VAR_1;
  VAR_5->lft.hard_packet_limit = VAR_1;
  VAR_5->replay_maxage = 0;
  VAR_5->replay_maxdiff = 0;
  VAR_5->inner_mode = ((void*)0);
  VAR_5->inner_mode_iaf = ((void*)0);
  FUNC_6(&VAR_5->lock);
 }
 return VAR_5;
}
