
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp_data {int res_irq; int sc_intr_cookie; int sc_ifp; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 struct lp_data* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct lp_data*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_1)
{
 struct lp_data *VAR_2 = FUNC_4(VAR_1);
 device_t VAR_3 = FUNC_3(VAR_1);

 FUNC_7(VAR_3);
 FUNC_6(VAR_2);
 FUNC_8(VAR_3);
 FUNC_0(VAR_2->sc_ifp);
 FUNC_5(VAR_2->sc_ifp);
 FUNC_2(VAR_1, VAR_2->res_irq, VAR_2->sc_intr_cookie);
 FUNC_1(VAR_1, VAR_0, 0, VAR_2->res_irq);
 return (0);
}
