
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct xgbe_prv_data {unsigned long an_start; int kr_state; int kx_state; } ;
typedef enum xgbe_rx { ____Placeholder_xgbe_rx } xgbe_rx ;
typedef enum xgbe_an { ____Placeholder_xgbe_an } xgbe_an ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;


 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct xgbe_prv_data*,int*) ;
 int FUNC_1 (struct xgbe_prv_data*,int*) ;
 scalar_t__ FUNC_2 (struct xgbe_prv_data*) ;

__attribute__((used)) static enum xgbe_an FUNC_3(struct xgbe_prv_data *VAR_4)
{
 enum xgbe_rx *VAR_5;
 unsigned long VAR_6;
 enum xgbe_an VAR_7;

 if (!VAR_4->an_start) {
  VAR_4->an_start = VAR_3;
 } else {
  VAR_6 = VAR_4->an_start +
      ((uint64_t)VAR_1 * (uint64_t)VAR_2) / 1000ull;
  if ((int)(VAR_3 - VAR_6) > 0) {

   VAR_4->kr_state = 129;
   VAR_4->kx_state = 129;

   VAR_4->an_start = VAR_3;
  }
 }

 VAR_5 = FUNC_2(VAR_4) ? &VAR_4->kr_state
        : &VAR_4->kx_state;

 switch (*VAR_5) {
 case 129:
  VAR_7 = FUNC_0(VAR_4, VAR_5);
  break;

 case 128:
  VAR_7 = FUNC_1(VAR_4, VAR_5);
  break;

 default:
  VAR_7 = VAR_0;
 }

 return VAR_7;
}
