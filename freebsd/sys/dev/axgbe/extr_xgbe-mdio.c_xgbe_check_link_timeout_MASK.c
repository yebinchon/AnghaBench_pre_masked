
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned long link_check; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_1(struct xgbe_prv_data *VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = VAR_3->link_check + (VAR_0 * VAR_1);
 if ((int)(VAR_2 - VAR_4) >= 0) {
  FUNC_0(VAR_3);
 }
}
