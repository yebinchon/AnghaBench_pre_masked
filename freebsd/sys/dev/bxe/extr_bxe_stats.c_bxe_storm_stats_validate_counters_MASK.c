
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct stats_counter {int tstats_counter; int cstats_counter; int ustats_counter; int xstats_counter; } ;
struct bxe_softc {scalar_t__ stats_counter; TYPE_1__* fw_stats_data; } ;
struct TYPE_2__ {struct stats_counter storm_counters; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct bxe_softc *VAR_2)
{
    struct stats_counter *VAR_3 = &VAR_2->fw_stats_data->storm_counters;
    uint16_t VAR_4;





    FUNC_1(VAR_2);
    VAR_4 = (VAR_2->stats_counter - 1);
    FUNC_2(VAR_2);


    if (FUNC_3(VAR_3->xstats_counter) != VAR_4) {
        FUNC_0(VAR_2, VAR_0,
              "stats not updated by xstorm, "
              "counter 0x%x != stats_counter 0x%x\n",
              FUNC_3(VAR_3->xstats_counter), VAR_2->stats_counter);
        return (-VAR_1);
    }

    if (FUNC_3(VAR_3->ustats_counter) != VAR_4) {
        FUNC_0(VAR_2, VAR_0,
              "stats not updated by ustorm, "
              "counter 0x%x != stats_counter 0x%x\n",
              FUNC_3(VAR_3->ustats_counter), VAR_2->stats_counter);
        return (-VAR_1);
    }

    if (FUNC_3(VAR_3->cstats_counter) != VAR_4) {
        FUNC_0(VAR_2, VAR_0,
              "stats not updated by cstorm, "
              "counter 0x%x != stats_counter 0x%x\n",
              FUNC_3(VAR_3->cstats_counter), VAR_2->stats_counter);
        return (-VAR_1);
    }

    if (FUNC_3(VAR_3->tstats_counter) != VAR_4) {
        FUNC_0(VAR_2, VAR_0,
              "stats not updated by tstorm, "
              "counter 0x%x != stats_counter 0x%x\n",
              FUNC_3(VAR_3->tstats_counter), VAR_2->stats_counter);
        return (-VAR_1);
    }

    return (0);
}
