
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bxe_softc {int stats_state; int panic; } ;
typedef enum bxe_stats_state { ____Placeholder_bxe_stats_state } bxe_stats_state ;
typedef enum bxe_stats_event { ____Placeholder_bxe_stats_event } bxe_stats_event ;
struct TYPE_2__ {int next_state; int (* action ) (struct bxe_softc*) ;} ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int,int,int) ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__** VAR_2 ;
 int FUNC_4 (struct bxe_softc*) ;

void FUNC_5(struct bxe_softc *VAR_3,
                      enum bxe_stats_event VAR_4)
{
    enum bxe_stats_state VAR_5;

    if (FUNC_3(VAR_3->panic)) {
        return;
    }

    FUNC_1(VAR_3);
    VAR_5 = VAR_3->stats_state;
    VAR_3->stats_state = VAR_2[VAR_5][VAR_4].next_state;
    FUNC_2(VAR_3);

    VAR_2[VAR_5][VAR_4].action(VAR_3);

    if (VAR_4 != VAR_1) {
        FUNC_0(VAR_3, VAR_0,
              "state %d -> event %d -> state %d\n",
              VAR_5, VAR_4, VAR_3->stats_state);
    }
}
