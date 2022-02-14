
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int * mf_config; } ;
struct TYPE_6__ {TYPE_2__ mf_info; } ;
struct TYPE_4__ {int line_speed; } ;
struct bxe_softc {TYPE_3__ devinfo; TYPE_1__ link_vars; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 size_t FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*,int ) ;

__attribute__((used)) static uint16_t
FUNC_4(struct bxe_softc *VAR_0)
{
    uint16_t VAR_1 = VAR_0->link_vars.line_speed;
    if (FUNC_0(VAR_0)) {
        uint16_t VAR_2 =
            FUNC_3(VAR_0, VAR_0->devinfo.mf_info.mf_config[FUNC_2(VAR_0)]);


        if (FUNC_1(VAR_0)) {
            VAR_1 = (VAR_1 * VAR_2) / 100;
        } else {
            uint16_t VAR_3 = VAR_2 * 100;

            if (VAR_3 < VAR_1) {
                VAR_1 = VAR_3;
            }
        }
    }

    return (VAR_1);
}
