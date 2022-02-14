
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_lro_mgr {int features; } ;
struct net_lro_desc {int pkt_aggr_cnt; int parent; int vlan_tag; scalar_t__ vgrp; int mss; } ;
struct TYPE_2__ {int gso_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_lro_mgr*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct net_lro_desc*) ;
 int FUNC_2 (struct net_lro_desc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__,int ) ;
 int FUNC_7 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_8(struct net_lro_mgr *VAR_2,
        struct net_lro_desc *VAR_3)
{
 if (VAR_3->pkt_aggr_cnt > 1)
  FUNC_2(VAR_3);

 FUNC_5(VAR_3->parent)->gso_size = VAR_3->mss;

 if (VAR_3->vgrp) {
  if (VAR_2->features & VAR_0)
   FUNC_6(VAR_3->parent,
       VAR_3->vgrp,
       VAR_3->vlan_tag);
  else
   FUNC_7(VAR_3->parent,
     VAR_3->vgrp,
     VAR_3->vlan_tag);

 } else {
  if (VAR_2->features & VAR_0)
   FUNC_3(VAR_3->parent);
  else
   FUNC_4(VAR_3->parent);
 }

 FUNC_0(VAR_2, VAR_1);
 FUNC_1(VAR_3);
}
