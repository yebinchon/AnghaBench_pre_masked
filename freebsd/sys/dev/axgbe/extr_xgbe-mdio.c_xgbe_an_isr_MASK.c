
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {scalar_t__ an_int; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,scalar_t__) ;
 int FUNC_2 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_3(void *VAR_4)
{
 struct xgbe_prv_data *VAR_5 = (struct xgbe_prv_data *)VAR_4;


 FUNC_1(VAR_5, VAR_2, VAR_1, 0);


 VAR_5->an_int = FUNC_0(VAR_5, VAR_2, VAR_0);

 if (VAR_5->an_int) {

  FUNC_1(VAR_5, VAR_2, VAR_0, ~VAR_5->an_int);

  FUNC_2(VAR_5);
 } else {

  FUNC_1(VAR_5, VAR_2, VAR_1,
       VAR_3);
 }
}
