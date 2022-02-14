
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (struct bxe_softc*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (struct bxe_softc*,scalar_t__,char*,int ) ;
 scalar_t__* VAR_5 ;

__attribute__((used)) static int
FUNC_4(struct bxe_softc *VAR_6,
                           uint32_t VAR_7)
{

    if (FUNC_3(VAR_6,
                                      VAR_0,
                                      "CFC PF usage counter timed out",
                                      VAR_7)) {
        return (1);
    }


    if (FUNC_3(VAR_6,
                                      VAR_1,
                                      "DQ PF usage counter timed out",
                                      VAR_7)) {
        return (1);
    }


    if (FUNC_3(VAR_6,
                                      VAR_2 + 4*FUNC_1(VAR_6),
                                      "QM PF usage counter timed out",
                                      VAR_7)) {
        return (1);
    }


    if (FUNC_3(VAR_6,
                                      VAR_4 + 4*FUNC_2(VAR_6),
                                      "Timers VNIC usage counter timed out",
                                      VAR_7)) {
        return (1);
    }

    if (FUNC_3(VAR_6,
                                      VAR_3 + 4*FUNC_2(VAR_6),
                                      "Timers NUM_SCANS usage counter timed out",
                                      VAR_7)) {
        return (1);
    }


    if (FUNC_3(VAR_6,
                                      VAR_5[FUNC_0(VAR_6)],
                                      "DMAE dommand register timed out",
                                      VAR_7)) {
        return (1);
    }

    return (0);
}
