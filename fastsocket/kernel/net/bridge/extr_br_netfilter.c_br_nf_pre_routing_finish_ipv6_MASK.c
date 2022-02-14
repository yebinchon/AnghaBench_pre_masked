
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dev; int pkt_type; struct nf_bridge_info* nf_bridge; } ;
struct TYPE_2__ {int dst; } ;
struct rtable {TYPE_1__ u; } ;
struct nf_bridge_info {int mask; int physindev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct sk_buff*,int ,int *,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct rtable* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int *) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_6)
{
 struct nf_bridge_info *VAR_7 = VAR_6->nf_bridge;
 struct rtable *VAR_8;

 if (VAR_7->mask & VAR_1) {
  VAR_6->pkt_type = VAR_3;
  VAR_7->mask ^= VAR_1;
 }
 VAR_7->mask ^= VAR_0;

 VAR_8 = FUNC_1(VAR_7->physindev);
 if (!VAR_8) {
  FUNC_3(VAR_6);
  return 0;
 }
 FUNC_2(&VAR_8->u.dst);
 FUNC_5(VAR_6, &VAR_8->u.dst);

 VAR_6->dev = VAR_7->physindev;
 FUNC_4(VAR_6);
 FUNC_0(VAR_4, VAR_2, VAR_6, VAR_6->dev, ((void*)0),
         VAR_5, 1);

 return 0;
}
