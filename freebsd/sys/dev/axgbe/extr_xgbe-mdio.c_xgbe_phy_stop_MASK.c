
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ link; } ;
struct xgbe_prv_data {TYPE_1__ phy; int an_irq_tag; int an_irq_res; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_4(struct xgbe_prv_data *VAR_2)
{


 FUNC_2(VAR_2);


 FUNC_0(VAR_2, VAR_1, VAR_0, 0);

 FUNC_1(VAR_2->dev, VAR_2->an_irq_res, VAR_2->an_irq_tag);

 VAR_2->phy.link = 0;

 FUNC_3(VAR_2);
}
