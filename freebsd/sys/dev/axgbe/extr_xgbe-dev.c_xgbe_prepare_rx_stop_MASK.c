
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_1 (unsigned int,int ,int ) ;
 unsigned int FUNC_2 (struct xgbe_prv_data*,unsigned int,int ) ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_6,
     unsigned int VAR_7)
{
 unsigned int VAR_8;
 unsigned long VAR_9;





 VAR_9 = VAR_5 + (VAR_3 * VAR_4);
 while (VAR_5 < VAR_9) {
  VAR_8 = FUNC_2(VAR_6, VAR_7, VAR_0);
  if ((FUNC_1(VAR_8, VAR_0, VAR_1) == 0) &&
      (FUNC_1(VAR_8, VAR_0, VAR_2) == 0))
   break;

  FUNC_0(500);
 }
}
