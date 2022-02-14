
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int scsi_ios; int ioctls; int num_intrs; int reqs_errored; int reqs_out; int reqs_in; } ;
struct tws_softc {int stats_timer; TYPE_1__ stats; } ;


 int FUNC_0 (struct tws_softc*,char*,int ,int ) ;
 int FUNC_1 (int *,int,void (*) (void*),struct tws_softc*) ;
 int VAR_0 ;

void
FUNC_2(void *VAR_1)
{

    struct tws_softc *VAR_2 = (struct tws_softc *)VAR_1;

    FUNC_0(VAR_2, "reqs(in, out)", VAR_2->stats.reqs_in, VAR_2->stats.reqs_out);
    FUNC_0(VAR_2, "reqs(err, intrs)", VAR_2->stats.reqs_errored
                                      , VAR_2->stats.num_intrs);
    FUNC_0(VAR_2, "reqs(ioctls, scsi)", VAR_2->stats.ioctls
                                      , VAR_2->stats.scsi_ios);
    FUNC_1(&VAR_2->stats_timer, 300 * VAR_0, FUNC_2, VAR_2);
}
