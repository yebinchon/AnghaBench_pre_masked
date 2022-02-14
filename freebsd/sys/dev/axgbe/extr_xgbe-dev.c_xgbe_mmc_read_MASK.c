
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct xgbe_prv_data {int dummy; } ;






 int FUNC_0 (struct xgbe_prv_data*,unsigned int) ;

__attribute__((used)) static u64 FUNC_1(struct xgbe_prv_data *VAR_0, unsigned int VAR_1)
{
 bool VAR_2;
 u64 VAR_3;

 switch (VAR_1) {

 case 129:
 case 128:
 case 131:
 case 130:
  VAR_2 = 1;
  break;

 default:
  VAR_2 = 0;
 }

 VAR_3 = FUNC_0(VAR_0, VAR_1);

 if (VAR_2)
  VAR_3 |= ((u64)FUNC_0(VAR_0, VAR_1 + 4) << 32);

 return VAR_3;
}
