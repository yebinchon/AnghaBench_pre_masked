
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct net_device*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_5, unsigned long VAR_6, void *VAR_7)
{
 struct net_device *VAR_8 = VAR_7;

 switch (VAR_6) {
 case 129:
  FUNC_0(VAR_3, VAR_8, ~0U);
  break;
 case 128:
 case 135:
  FUNC_0(VAR_4, VAR_8, VAR_1|VAR_0);
  break;
 case 132:
 case 131:
 case 136:
 case 134:
 case 130:
 case 133:
  break;
 default:
  FUNC_0(VAR_4, VAR_8, 0);
  break;
 }
 return VAR_2;
}
