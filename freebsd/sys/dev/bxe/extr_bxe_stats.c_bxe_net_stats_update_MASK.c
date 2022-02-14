
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bxe_softc {int num_queues; TYPE_2__* fp; int ifp; } ;
struct TYPE_3__ {int checksum_discard; } ;
struct TYPE_4__ {TYPE_1__ old_tclient; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct bxe_softc *VAR_1)
{

    for (int VAR_2 = 0; VAR_2 < VAR_1->num_queues; VAR_2++)
        FUNC_0(VAR_1->ifp, VAR_0,
     FUNC_1(VAR_1->fp[VAR_2].old_tclient.checksum_discard));
}
