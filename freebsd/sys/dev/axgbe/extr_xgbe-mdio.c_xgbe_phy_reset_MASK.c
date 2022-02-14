
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_1 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_2 (struct xgbe_prv_data*,int ,int ,unsigned int) ;
 int FUNC_3 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_4(struct xgbe_prv_data *VAR_6)
{
 unsigned int VAR_7, VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_5, VAR_2);
 VAR_8 |= VAR_3;
 FUNC_2(VAR_6, VAR_5, VAR_2, VAR_8);

 VAR_7 = 50;
 do {
  FUNC_0(20);
  VAR_8 = FUNC_1(VAR_6, VAR_5, VAR_2);
 } while ((VAR_8 & VAR_3) && --VAR_7);

 if (VAR_8 & VAR_3)
  return -VAR_0;


 FUNC_3(VAR_6);


 FUNC_2(VAR_6, VAR_4, VAR_1, 0);

 return 0;
}
