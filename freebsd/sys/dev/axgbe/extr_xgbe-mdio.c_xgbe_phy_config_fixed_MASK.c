
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speed; scalar_t__ duplex; } ;
struct xgbe_prv_data {TYPE_1__ phy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct xgbe_prv_data*) ;
 int FUNC_1 (struct xgbe_prv_data*,int ) ;

__attribute__((used)) static int FUNC_2(struct xgbe_prv_data *VAR_4)
{


 FUNC_0(VAR_4);


 switch (VAR_4->phy.speed) {
 case 129:
  FUNC_1(VAR_4, VAR_2);
  break;

 case 128:
 case 130:
  FUNC_1(VAR_4, VAR_3);
  break;

 default:
  return -VAR_1;
 }


 if (VAR_4->phy.duplex != VAR_0)
  return -VAR_1;

 return 0;
}
