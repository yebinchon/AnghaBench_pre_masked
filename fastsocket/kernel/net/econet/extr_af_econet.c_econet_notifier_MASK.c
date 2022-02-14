
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {struct ec_device* ec_ptr; } ;
struct ec_device {size_t net; } ;



 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_1 (struct ec_device*) ;
 struct net_device** VAR_2 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_3, unsigned long VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = (struct net_device *)VAR_5;
 struct ec_device *VAR_7;

 if (!FUNC_2(FUNC_0(VAR_6), &VAR_1))
  return VAR_0;

 switch (VAR_4) {
 case 128:

  VAR_7 = VAR_6->ec_ptr;
  if (VAR_7)
  {
   if (VAR_2[0] == VAR_6)
    VAR_2[0] = ((void*)0);
   VAR_2[VAR_7->net] = ((void*)0);
   FUNC_1(VAR_7);
   VAR_6->ec_ptr = ((void*)0);
  }
  break;
 }

 return VAR_0;
}
