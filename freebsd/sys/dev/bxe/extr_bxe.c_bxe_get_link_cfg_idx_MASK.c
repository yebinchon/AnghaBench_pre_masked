
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int multi_phy_config; } ;
struct bxe_softc {TYPE_1__ link_params; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;

__attribute__((used)) static int
FUNC_2(struct bxe_softc *VAR_3)
{
    uint32_t VAR_4 = FUNC_1(VAR_3);







    if (VAR_3->link_params.multi_phy_config & VAR_2) {
        if (VAR_4 == VAR_0)
            VAR_4 = VAR_1;
        else if (VAR_4 == VAR_1)
            VAR_4 = VAR_0;
    }

    return (FUNC_0(VAR_4));
}
