
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int type; } ;
 int FUNC_0 (int *,struct net_device*) ;
 int FUNC_1 (int *,struct net_device*) ;
 int FUNC_2 (int *,struct net_device*) ;
 int FUNC_3 (int *,struct net_device*) ;

__attribute__((used)) static int FUNC_4(u8 *VAR_0, struct net_device *VAR_1)
{
 switch (VAR_1->type) {
 case 132:
 case 131:
 case 130:
  return FUNC_1(VAR_0, VAR_1);
 case 133:
  return FUNC_0(VAR_0, VAR_1);
 case 129:
  return FUNC_2(VAR_0, VAR_1);
 case 128:
  return FUNC_3(VAR_0, VAR_1);
 }
 return -1;
}
