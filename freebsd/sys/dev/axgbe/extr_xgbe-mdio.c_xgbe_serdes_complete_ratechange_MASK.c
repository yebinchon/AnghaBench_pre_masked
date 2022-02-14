
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct xgbe_prv_data {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,int) ;
 int FUNC_2 (struct xgbe_prv_data*,int ) ;
 int FUNC_3 (struct xgbe_prv_data*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct xgbe_prv_data *VAR_8)
{
 unsigned int VAR_9;
 u16 VAR_10;


 FUNC_3(VAR_8, VAR_5, VAR_0, 0);


 VAR_9 = VAR_7;
 while (VAR_9--) {
  FUNC_0(50);

  VAR_10 = FUNC_2(VAR_8, VAR_4);
  if (FUNC_4(VAR_10, VAR_4, VAR_3) &&
      FUNC_4(VAR_10, VAR_4, VAR_6))
   goto rx_reset;
 }

rx_reset:

 FUNC_1(VAR_8, VAR_2, VAR_1, 0);
 FUNC_1(VAR_8, VAR_2, VAR_1, 1);
}
