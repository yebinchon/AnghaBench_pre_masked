
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int advertising; } ;
struct xgbe_prv_data {scalar_t__ kr_state; scalar_t__ kx_state; TYPE_1__ phy; } ;
typedef enum xgbe_an { ____Placeholder_xgbe_an } xgbe_an ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (struct xgbe_prv_data*) ;
 scalar_t__ FUNC_1 (struct xgbe_prv_data*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;

__attribute__((used)) static enum xgbe_an FUNC_4(struct xgbe_prv_data *VAR_7)
{

 if (FUNC_1(VAR_7)) {
  VAR_7->kr_state = VAR_6;

  if (!(VAR_7->phy.advertising & VAR_1) &&
      !(VAR_7->phy.advertising & VAR_2))
   return VAR_4;

  if (VAR_7->kx_state != VAR_5)
   return VAR_4;
 } else {
  VAR_7->kx_state = VAR_6;

  if (!(VAR_7->phy.advertising & VAR_0))
   return VAR_4;

  if (VAR_7->kr_state != VAR_5)
   return VAR_4;
 }

 FUNC_0(VAR_7);

 FUNC_3(VAR_7);

 FUNC_2(VAR_7);

 return VAR_3;
}
