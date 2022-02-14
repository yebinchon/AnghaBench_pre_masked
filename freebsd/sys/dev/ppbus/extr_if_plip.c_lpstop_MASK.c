
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lp_data {int sc_dev; int * sc_ifbuf; TYPE_1__* sc_ifp; } ;
typedef int device_t ;
struct TYPE_2__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(struct lp_data *VAR_3)
{
 device_t VAR_4 = FUNC_0(VAR_3->sc_dev);

 FUNC_2(VAR_4);
 FUNC_4(VAR_4, 0x00);
 VAR_3->sc_ifp->if_drv_flags &= ~(VAR_1 | VAR_0);
 FUNC_1(VAR_3->sc_ifbuf, VAR_2);
 VAR_3->sc_ifbuf = ((void*)0);


 FUNC_3(VAR_4, VAR_3->sc_dev);
}
