
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_5__ {int cmng_enables; } ;
struct cmng_init_input {TYPE_2__ flags; int port_rate; } ;
struct TYPE_4__ {scalar_t__ pmf; } ;
struct TYPE_6__ {int line_speed; } ;
struct bxe_softc {int cmng; TYPE_1__ port; TYPE_3__ link_vars; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bxe_softc*) ;
 int VAR_3 ;
 int FUNC_2 (struct bxe_softc*,int,struct cmng_init_input*) ;
 int FUNC_3 (struct bxe_softc*,struct cmng_init_input*) ;
 int FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (struct cmng_init_input*,int *) ;
 int FUNC_6 (struct cmng_init_input*,int ,int) ;

__attribute__((used)) static void
FUNC_7(struct bxe_softc *VAR_4,
                  uint8_t VAR_5,
                  uint8_t VAR_6)
{
    struct cmng_init_input VAR_7;
    int VAR_8;

    FUNC_6(&VAR_7, 0, sizeof(struct cmng_init_input));

    VAR_7.port_rate = VAR_4->link_vars.line_speed;

    if (VAR_6 == VAR_1) {

        if (VAR_5) {
            FUNC_4(VAR_4);
        }


        FUNC_3(VAR_4, &VAR_7);


        if (VAR_4->port.pmf) {
            for (VAR_8 = VAR_3; VAR_8 < FUNC_1(VAR_4); VAR_8++) {
                FUNC_2(VAR_4, VAR_8, &VAR_7);
            }
        }


        VAR_7.flags.cmng_enables |= VAR_0;

        FUNC_5(&VAR_7, &VAR_4->cmng);
        return;
    }


    FUNC_0(VAR_4, VAR_2, "rate shaping and fairness have been disabled\n");
}
