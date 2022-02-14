
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {int name; } ;




 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_2,
          unsigned long VAR_3, void *VAR_4)
{
 struct net_device *VAR_5 = VAR_4;

 if (!FUNC_1(FUNC_0(VAR_5), &VAR_1))
  return VAR_0;





 switch (VAR_3) {
 case 129:
  FUNC_2(VAR_5);
  break;

 case 128:
  FUNC_3(VAR_5->name);
  break;
 }

 return VAR_0;
}
