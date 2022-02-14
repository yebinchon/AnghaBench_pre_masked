
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct p2p_group {scalar_t__ num_members; TYPE_3__* cfg; TYPE_2__* p2p; scalar_t__ group_formation; } ;
struct TYPE_6__ {int persistent_group; scalar_t__ max_clients; scalar_t__ ip_addr_alloc; } ;
struct TYPE_5__ {scalar_t__ cross_connect; TYPE_1__* cfg; int dev_capab; } ;
struct TYPE_4__ {scalar_t__ p2p_intra_bss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct wpabuf*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct p2p_group *VAR_9,
         struct wpabuf *VAR_10)
{
 u8 VAR_11 = VAR_9->p2p->dev_capab, VAR_12 = 0;


 VAR_11 &= ~VAR_0;
 VAR_12 |= VAR_4;
 if (VAR_9->cfg->persistent_group) {
  VAR_12 |= VAR_7;
  if (VAR_9->cfg->persistent_group == 2)
   VAR_12 |= VAR_8;
 }
 if (VAR_9->p2p->cfg->p2p_intra_bss)
  VAR_12 |= VAR_5;
 if (VAR_9->group_formation)
  VAR_12 |= VAR_2;
 if (VAR_9->p2p->cross_connect)
  VAR_12 |= VAR_1;
 if (VAR_9->num_members >= VAR_9->cfg->max_clients)
  VAR_12 |= VAR_3;
 if (VAR_9->cfg->ip_addr_alloc)
  VAR_12 |= VAR_6;
 FUNC_0(VAR_10, VAR_11, VAR_12);
}
