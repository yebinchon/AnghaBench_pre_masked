
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int an_irq_tag; int an_irq_res; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,int ,int) ;
 int FUNC_1 (int ,int ,int,int *,int ,struct xgbe_prv_data*,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int VAR_5 ;
 int FUNC_4 (struct xgbe_prv_data*) ;
 int FUNC_5 (struct xgbe_prv_data*) ;
 int FUNC_6 (struct xgbe_prv_data*) ;
 scalar_t__ FUNC_7 (struct xgbe_prv_data*) ;
 scalar_t__ FUNC_8 (struct xgbe_prv_data*) ;
 scalar_t__ FUNC_9 (struct xgbe_prv_data*) ;
 int FUNC_10 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_11(struct xgbe_prv_data *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(VAR_6->dev, VAR_6->an_irq_res,
     VAR_1 | VAR_2, ((void*)0), VAR_5, VAR_6,
     &VAR_6->an_irq_tag);
 if (VAR_7) {
  return -VAR_7;
 }




 if (FUNC_9(VAR_6)) {
  FUNC_10(VAR_6);
 } else if (FUNC_8(VAR_6)) {
  FUNC_5(VAR_6);
 } else if (FUNC_7(VAR_6)) {
  FUNC_4(VAR_6);
 } else {
  VAR_7 = -VAR_0;
  goto err_irq;
 }


 FUNC_3(VAR_6);


 FUNC_0(VAR_6, VAR_4, VAR_3, 0x07);

 return FUNC_6(VAR_6);

err_irq:
 FUNC_2(VAR_6->dev, VAR_6->an_irq_res, VAR_6->an_irq_tag);

 return VAR_7;
}
