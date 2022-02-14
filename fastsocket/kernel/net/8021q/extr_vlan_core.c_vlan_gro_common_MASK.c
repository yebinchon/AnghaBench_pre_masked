
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct vlan_group {int dummy; } ;
struct sk_buff {int deliver_no_wcard; struct net_device* dev; struct sk_buff* next; int pkt_type; int iif; } ;
struct net_device {int flags; int ifindex; int master; } ;
struct napi_struct {struct sk_buff* gro_list; } ;
typedef int gro_result_t ;
struct TYPE_2__ {int same_flow; scalar_t__ flush; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct napi_struct*,struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 struct net_device* FUNC_8 (struct vlan_group*,int) ;

__attribute__((used)) static gro_result_t
FUNC_9(struct napi_struct *VAR_4, struct vlan_group *VAR_5,
  unsigned int VAR_6, struct sk_buff *VAR_7)
{
 struct sk_buff *VAR_8;
 struct net_device *VAR_9;
 u16 VAR_10;

 if (FUNC_5(VAR_7, FUNC_0(VAR_7->dev->master)))
  VAR_7->deliver_no_wcard = 1;

 VAR_7->iif = VAR_7->dev->ifindex;
 FUNC_2(VAR_7, VAR_6);
 VAR_10 = VAR_6 & VAR_3;
 VAR_9 = FUNC_8(VAR_5, VAR_10);

 if (VAR_9)
  VAR_7->dev = VAR_9;
 else if (VAR_10) {
  if (!(VAR_7->dev->flags & VAR_1))
   goto drop;
  VAR_7->pkt_type = VAR_2;
 }

 for (VAR_8 = VAR_4->gro_list; VAR_8; VAR_8 = VAR_8->next) {
  FUNC_1(VAR_8)->same_flow =
   VAR_8->dev == VAR_7->dev && !FUNC_3(
    FUNC_7(VAR_8), FUNC_6(VAR_7));
  FUNC_1(VAR_8)->flush = 0;
 }

 return FUNC_4(VAR_4, VAR_7);

drop:
 return VAR_0;
}
