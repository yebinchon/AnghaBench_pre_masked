
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bxe_softc {int stats_pending; int fw_stats_req_mapping; TYPE_1__* fw_stats_req; int stats_counter; } ;
struct TYPE_4__ {int drv_stats_counter; } ;
struct TYPE_3__ {TYPE_2__ hdr; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int ) ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct bxe_softc*) ;
 int FUNC_6 (struct bxe_softc*,int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct bxe_softc *VAR_3)
{
    int VAR_4;

    if (!VAR_3->stats_pending) {
        FUNC_1(VAR_3);

        if (VAR_3->stats_pending) {
            FUNC_2(VAR_3);
            return;
        }

        VAR_3->fw_stats_req->hdr.drv_stats_counter =
            FUNC_7(VAR_3->stats_counter++);

        FUNC_0(VAR_3, VAR_0,
              "sending statistics ramrod %d\n",
              FUNC_8(VAR_3->fw_stats_req->hdr.drv_stats_counter));




        FUNC_5(VAR_3);


        VAR_4 = FUNC_6(VAR_3, VAR_2, 0,
                         FUNC_3(VAR_3->fw_stats_req_mapping),
                         FUNC_4(VAR_3->fw_stats_req_mapping),
                         VAR_1);
        if (VAR_4 == 0) {
            VAR_3->stats_pending = 1;
        }

        FUNC_2(VAR_3);
    }
}
