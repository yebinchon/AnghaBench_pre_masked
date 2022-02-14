
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iop_softc {struct intr_config_hook* iop_delayed_attach; TYPE_1__* reg; } ;
struct intr_config_hook {struct iop_softc* ich_arg; int ich_func; } ;
struct TYPE_2__ {int iqueue; int oqueue_intr_mask; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct intr_config_hook*) ;
 int FUNC_2 (struct intr_config_hook*,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct iop_softc*,int) ;
 int FUNC_4 (struct iop_softc*) ;
 int FUNC_5 (struct iop_softc*) ;
 scalar_t__ FUNC_6 (int,int ,int) ;
 int FUNC_7 (char*) ;

int
FUNC_8(struct iop_softc *VAR_4)
{
    int VAR_5, VAR_6 = 10000;

    while ((VAR_5 = VAR_4->reg->iqueue) == 0xffffffff && --VAR_6)
 FUNC_0(1000);
    if (!VAR_6) {
 FUNC_7("pstiop: no free mfa\n");
 return 0;
    }
    FUNC_3(VAR_4, VAR_5);

    VAR_4->reg->oqueue_intr_mask = 0xffffffff;

    if (!FUNC_5(VAR_4)) {
 FUNC_7("pstiop: no reset response\n");
 return 0;
    }

    if (!FUNC_4(VAR_4)) {
 FUNC_7("pstiop: init outbound queue failed\n");
 return 0;
    }


    if (!(VAR_4->iop_delayed_attach = (struct intr_config_hook *)
       FUNC_6(sizeof(struct intr_config_hook),
       VAR_1, VAR_0 | VAR_2))) {
 FUNC_7("pstiop: malloc of delayed attach hook failed\n");
 return 0;
    }
    VAR_4->iop_delayed_attach->ich_func = VAR_3;
    VAR_4->iop_delayed_attach->ich_arg = VAR_4;
    if (FUNC_1(VAR_4->iop_delayed_attach)) {
 FUNC_7("pstiop: config_intrhook_establish failed\n");
 FUNC_2(VAR_4->iop_delayed_attach, VAR_1);
    }
    return 1;
}
