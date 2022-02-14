
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct cmng_init_input {int* vnic_max_rate; } ;
struct TYPE_4__ {int line_speed; } ;
struct TYPE_5__ {int* mf_config; } ;
struct TYPE_6__ {TYPE_2__ mf_info; } ;
struct bxe_softc {TYPE_1__ link_vars; TYPE_3__ devinfo; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*,int) ;

__attribute__((used)) static void
FUNC_3(struct bxe_softc *VAR_2,
                int VAR_3,
                struct cmng_init_input *VAR_4)
{
    uint16_t VAR_5;
    uint32_t VAR_6 = VAR_2->devinfo.mf_info.mf_config[VAR_3];
    uint32_t VAR_7;

    if (VAR_6 & VAR_1) {
        VAR_5 = 0;
    } else {
        VAR_7 = FUNC_2(VAR_2, VAR_6);

        if (FUNC_1(VAR_2)) {

            VAR_5 = ((VAR_2->link_vars.line_speed * VAR_7) / 100);
        } else {

            VAR_5 = (VAR_7 * 100);
        }
    }

    FUNC_0(VAR_2, VAR_0, "vn %d: vn_max_rate %d\n", VAR_3, VAR_5);

    VAR_4->vnic_max_rate[VAR_3] = VAR_5;
}
