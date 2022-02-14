
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int type; int addr_len; int broadcast; } ;
typedef int __be32 ;







 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int ,int ) ;

int FUNC_4(__be32 VAR_1, u8 *VAR_2, struct net_device *VAR_3, int VAR_4)
{
 switch (VAR_3->type) {
 case 132:
 case 131:
 case 130:
  FUNC_0(VAR_1, VAR_2);
  return 0;
 case 129:
  FUNC_2(VAR_1, VAR_2);
  return 0;
 case 128:
  FUNC_1(VAR_1, VAR_3->broadcast, VAR_2);
  return 0;
 default:
  if (VAR_4) {
   FUNC_3(VAR_2, VAR_3->broadcast, VAR_3->addr_len);
   return 0;
  }
 }
 return -VAR_0;
}
