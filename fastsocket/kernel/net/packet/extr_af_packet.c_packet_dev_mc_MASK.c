
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_mclist {int type; int addr; int alen; } ;
struct net_device {int dummy; } ;






 int FUNC_0 (struct net_device*,int ,int ,int ) ;
 int FUNC_1 (struct net_device*,int ,int ,int ) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0, struct packet_mclist *VAR_1,
    int VAR_2)
{
 switch (VAR_1->type) {
 case 130:
  if (VAR_2 > 0)
   return FUNC_0(VAR_0, VAR_1->addr, VAR_1->alen, 0);
  else
   return FUNC_1(VAR_0, VAR_1->addr, VAR_1->alen, 0);
  break;
 case 129:
  return FUNC_3(VAR_0, VAR_2);
  break;
 case 131:
  return FUNC_2(VAR_0, VAR_2);
  break;
 case 128:
  if (VAR_2 > 0)
   return FUNC_4(VAR_0, VAR_1->addr);
  else
   return FUNC_5(VAR_0, VAR_1->addr);
  break;
 default:
  break;
 }
 return 0;
}
