
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct bxe_softc {int sp_rtnl_task; int sp_rtnl_state; } ;
struct TYPE_4__ {TYPE_1__* port_hw_config; } ;
struct TYPE_3__ {int external_phy_config; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*,int ) ;
 int FUNC_3 (struct bxe_softc*,int ,int ) ;
 int FUNC_4 (struct bxe_softc*,char*) ;
 int FUNC_5 (int ,int *) ;
 TYPE_2__ VAR_3 ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void
FUNC_7(struct bxe_softc *VAR_4)
{
    int VAR_5 = FUNC_1(VAR_4);
    uint32_t VAR_6;


    VAR_6 =
        FUNC_2(VAR_4, VAR_3.port_hw_config[VAR_5].external_phy_config);

    VAR_6 &= ~VAR_2;
    VAR_6 |= VAR_1;
    FUNC_3(VAR_4, VAR_3.port_hw_config[VAR_5].external_phy_config,
             VAR_6);


    FUNC_0(VAR_4, "Fan Failure has caused the driver to shutdown "
              "the card to prevent permanent damage. "
              "Please contact OEM Support for assistance\n");



    FUNC_4(VAR_4, ("Schedule task to handle fan failure\n"));
}
