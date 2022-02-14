
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ pmf; } ;
struct TYPE_3__ {int aeu_int_mask; } ;
struct bxe_softc {int sp_err_timeout_task; int link_params; TYPE_2__ port; TYPE_1__ link_vars; } ;


 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct bxe_softc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct bxe_softc*,int) ;
 int FUNC_3 (struct bxe_softc*,int,int) ;
 int FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (struct bxe_softc*) ;
 int FUNC_6 (struct bxe_softc*) ;
 int FUNC_7 (struct bxe_softc*,char*) ;
 int FUNC_8 (struct bxe_softc*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_5 ;
 int FUNC_11 (int ,int *,int) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_12(struct bxe_softc *VAR_7,
                         uint32_t VAR_8)
{
    int VAR_9 = FUNC_4(VAR_7);
    int VAR_10;
    uint32_t VAR_11;

    VAR_10 = (VAR_9) ? VAR_4 :
                          VAR_3;

    if (VAR_8 & VAR_0) {
        VAR_11 = FUNC_2(VAR_7, VAR_10);
        VAR_11 &= ~VAR_0;
        FUNC_3(VAR_7, VAR_10, VAR_11);

        FUNC_0(VAR_7, "SPIO5 hw attention\n");


        FUNC_10(&VAR_7->link_params);
        FUNC_6(VAR_7);
    }

    if ((VAR_8 & VAR_7->link_vars.aeu_int_mask) && VAR_7->port.pmf) {
 FUNC_5(VAR_7);
        FUNC_9(&VAR_7->link_params);
 FUNC_8(VAR_7);
    }

    if (VAR_8 & VAR_2) {
        VAR_11 = FUNC_2(VAR_7, VAR_10);
        VAR_11 &= ~(VAR_8 & VAR_2);
        FUNC_3(VAR_7, VAR_10, VAR_11);


        FUNC_1(VAR_7, VAR_1);
        FUNC_11(VAR_6,
           &VAR_7->sp_err_timeout_task, VAR_5/10);

        FUNC_7(VAR_7, ("FATAL HW block attention set0 0x%lx\n",
                       (VAR_8 & VAR_2)));
    }
}
