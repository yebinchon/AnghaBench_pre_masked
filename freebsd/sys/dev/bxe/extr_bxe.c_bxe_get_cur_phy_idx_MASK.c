
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int num_phys; TYPE_2__* phy; } ;
struct TYPE_4__ {int link_status; scalar_t__ link_up; } ;
struct bxe_softc {TYPE_3__ link_params; TYPE_1__ link_vars; } ;
struct TYPE_5__ {int supported; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_1(struct bxe_softc *VAR_5)
{
    uint32_t VAR_6 = 0;

    if (VAR_5->link_params.num_phys <= 1) {
        return (VAR_2);
    }

    if (VAR_5->link_vars.link_up) {
        VAR_6 = VAR_0;

        if ((VAR_5->link_vars.link_status & VAR_4) &&
            (VAR_5->link_params.phy[VAR_1].supported &
             VAR_3))
            VAR_6 = VAR_1;
    } else {
        switch (FUNC_0(&VAR_5->link_params)) {
        case 130:
        case 132:
        case 131:
               VAR_6 = VAR_0;
               break;
        case 129:
        case 128:
               VAR_6 = VAR_1;
               break;
        }
    }

    return (VAR_6);
}
