
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phonet_net {int dummy; } ;
struct notifier_block {int dummy; } ;
struct net_device {int type; } ;


 int VAR_0 ;


 int FUNC_0 (struct net_device*) ;
 struct phonet_net* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_2, unsigned long VAR_3,
    void *VAR_4)
{
 struct net_device *VAR_5 = VAR_4;
 struct phonet_net *VAR_6 = FUNC_1(FUNC_0(VAR_5), VAR_1);

 if (!VAR_6)

  return 0;

 switch (VAR_3) {
 case 129:
  if (VAR_5->type == VAR_0)
   FUNC_2(VAR_5);
  break;
 case 128:
  FUNC_3(VAR_5);
  break;
 }
 return 0;

}
