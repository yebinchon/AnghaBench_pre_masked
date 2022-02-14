
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ autoneg; int advertising; } ;
struct xgbe_prv_data {void* kx_state; void* kr_state; void* an_state; void* an_result; TYPE_1__ phy; int link_check; int dev_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,int ,int) ;
 int FUNC_1 (int ,int *) ;
 int VAR_13 ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (struct xgbe_prv_data*) ;
 int FUNC_5 (struct xgbe_prv_data*) ;
 int FUNC_6 (struct xgbe_prv_data*,int ) ;

__attribute__((used)) static int FUNC_7(struct xgbe_prv_data *VAR_14)
{
 FUNC_1(VAR_9, &VAR_14->dev_state);
 VAR_14->link_check = VAR_13;

 if (VAR_14->phy.autoneg != VAR_3)
  return FUNC_4(VAR_14);


 FUNC_0(VAR_14, VAR_7, VAR_6, 0);


 FUNC_0(VAR_14, VAR_7, VAR_5, 0);


 if (VAR_14->phy.advertising & VAR_0) {
  FUNC_6(VAR_14, VAR_10);
 } else if ((VAR_14->phy.advertising & VAR_1) ||
     (VAR_14->phy.advertising & VAR_2)) {
  FUNC_6(VAR_14, VAR_11);
 } else {
  FUNC_0(VAR_14, VAR_7, VAR_6, 0x07);
  return -VAR_4;
 }


 FUNC_3(VAR_14);


 FUNC_0(VAR_14, VAR_7, VAR_5, 0);

 VAR_14->an_result = VAR_8;
 VAR_14->an_state = VAR_8;
 VAR_14->kr_state = VAR_12;
 VAR_14->kx_state = VAR_12;


 FUNC_0(VAR_14, VAR_7, VAR_6, 0x07);


 FUNC_2(VAR_14);


 FUNC_5(VAR_14);

 return 0;
}
