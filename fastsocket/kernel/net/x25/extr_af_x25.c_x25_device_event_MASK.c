
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_neigh {int dummy; } ;
struct notifier_block {int dummy; } ;
struct net_device {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 struct x25_neigh* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct x25_neigh*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct x25_neigh*) ;

__attribute__((used)) static int FUNC_9(struct notifier_block *VAR_4, unsigned long VAR_5,
       void *VAR_6)
{
 struct net_device *VAR_7 = VAR_6;
 struct x25_neigh *VAR_8;

 if (!FUNC_1(FUNC_0(VAR_7), &VAR_3))
  return VAR_2;

 if (VAR_7->type == VAR_1



  ) {
  switch (VAR_5) {
   case 128:
    FUNC_5(VAR_7);
    break;
   case 129:
    VAR_8 = FUNC_2(VAR_7);
    if (VAR_8) {
     FUNC_8(VAR_8);
     FUNC_6(VAR_8);
    }
    break;
   case 130:
    FUNC_3(VAR_7);
    FUNC_7(VAR_7);
    FUNC_4(VAR_7);
    break;
  }
 }

 return VAR_2;
}
