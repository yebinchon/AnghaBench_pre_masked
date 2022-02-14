
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ link_report_flags; } ;
struct bxe_softc {int ifp; TYPE_1__ last_reported_link; int link_cnt; } ;
struct bxe_link_report_data {int line_speed; scalar_t__ link_report_flags; } ;
typedef int cur_data ;


 int FUNC_0 (struct bxe_softc*,char*,int ,char const*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*,char*) ;
 int FUNC_3 (struct bxe_softc*,char*,int ) ;
 int FUNC_4 (struct bxe_softc*,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (struct bxe_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct bxe_softc*,struct bxe_link_report_data*) ;
 int FUNC_7 (struct bxe_softc*) ;
 scalar_t__ FUNC_8 (int ,scalar_t__*) ;
 scalar_t__ FUNC_9 (int ,scalar_t__*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct bxe_link_report_data*,TYPE_1__*,int) ;
 int FUNC_12 (TYPE_1__*,struct bxe_link_report_data*,int) ;

__attribute__((used)) static void
FUNC_13(struct bxe_softc *VAR_6)
{
    struct bxe_link_report_data VAR_7;


    if (FUNC_5(VAR_6) && !FUNC_1(VAR_6)) {
        FUNC_7(VAR_6);
    }


    FUNC_6(VAR_6, &VAR_7);


    if (!FUNC_11(&VAR_7, &VAR_6->last_reported_link, sizeof(VAR_7)) ||
        (FUNC_9(VAR_1,
                      &VAR_6->last_reported_link.link_report_flags) &&
         FUNC_9(VAR_1,
                      &VAR_7.link_report_flags))) {
        return;
    }

 FUNC_4(VAR_6, "Change in link status : cur_data = %x, last_reported_link = %x\n",
     VAR_7.link_report_flags, VAR_6->last_reported_link.link_report_flags);
    VAR_6->link_cnt++;

 FUNC_3(VAR_6, "link status change count = %x\n", VAR_6->link_cnt);

    FUNC_12(&VAR_6->last_reported_link, &VAR_7, sizeof(VAR_7));

    if (FUNC_9(VAR_1,
                     &VAR_7.link_report_flags)) {
        FUNC_10(VAR_6->ifp, VAR_4);
    } else {
        const char *VAR_8;
        const char *VAR_9;

        if (FUNC_8(VAR_0,
                                   &VAR_7.link_report_flags)) {
            VAR_8 = "full";
   FUNC_2(VAR_6, "link set to full duplex\n");
        } else {
            VAR_8 = "half";
   FUNC_2(VAR_6, "link set to half duplex\n");
        }






        if (VAR_7.link_report_flags) {
            if (FUNC_9(VAR_2,
                             &VAR_7.link_report_flags) &&
                FUNC_9(VAR_3,
                             &VAR_7.link_report_flags)) {
                VAR_9 = "ON - receive & transmit";
            } else if (FUNC_9(VAR_2,
                                    &VAR_7.link_report_flags) &&
                       !FUNC_9(VAR_3,
                                     &VAR_7.link_report_flags)) {
                VAR_9 = "ON - receive";
            } else if (!FUNC_9(VAR_2,
                                     &VAR_7.link_report_flags) &&
                       FUNC_9(VAR_3,
                                    &VAR_7.link_report_flags)) {
                VAR_9 = "ON - transmit";
            } else {
                VAR_9 = "none";
            }
        } else {
            VAR_9 = "none";
        }

        FUNC_10(VAR_6->ifp, VAR_5);
        FUNC_0(VAR_6, "NIC Link is Up, %d Mbps %s duplex, Flow control: %s\n",
              VAR_7.line_speed, VAR_8, VAR_9);
    }
}
