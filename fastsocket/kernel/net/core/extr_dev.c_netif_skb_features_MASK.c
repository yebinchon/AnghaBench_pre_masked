
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vlan_ethhdr {scalar_t__ h_vlan_encapsulated_proto; } ;
struct sk_buff {scalar_t__ protocol; TYPE_3__* dev; scalar_t__ data; } ;
typedef scalar_t__ __be16 ;
struct TYPE_6__ {int features; int vlan_features; } ;
struct TYPE_5__ {scalar_t__ gso_max_segs; } ;
struct TYPE_4__ {scalar_t__ gso_segs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (TYPE_3__*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;

int FUNC_5(struct sk_buff *VAR_7)
{
 __be16 VAR_8 = VAR_7->protocol;
 int VAR_9 = VAR_7->dev->features;

 if (FUNC_3(VAR_7)->gso_segs > FUNC_2(VAR_7->dev)->gso_max_segs)
  VAR_9 &= ~VAR_3;

 if (VAR_8 == FUNC_1(VAR_0)) {
  struct vlan_ethhdr *VAR_10 = (struct vlan_ethhdr *)VAR_7->data;
  VAR_8 = VAR_10->h_vlan_encapsulated_proto;
 } else if (!FUNC_4(VAR_7)) {
  return FUNC_0(VAR_7, VAR_8, VAR_9);
 }

 VAR_9 &= (VAR_7->dev->vlan_features | VAR_5);

 if (VAR_8 != FUNC_1(VAR_0)) {
  return FUNC_0(VAR_7, VAR_8, VAR_9);
 } else {
  VAR_9 &= VAR_6 | VAR_4 | VAR_1 |
    VAR_2 | VAR_5;
  return FUNC_0(VAR_7, VAR_8, VAR_9);
 }
}
