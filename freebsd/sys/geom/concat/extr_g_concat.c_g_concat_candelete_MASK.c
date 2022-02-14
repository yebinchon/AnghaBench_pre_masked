
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int val ;
struct g_concat_softc {int sc_ndisks; struct g_concat_disk* sc_disks; } ;
struct g_concat_disk {scalar_t__ d_candelete; int d_removed; } ;
struct bio {TYPE_2__* bio_to; } ;
struct TYPE_4__ {TYPE_1__* geom; } ;
struct TYPE_3__ {struct g_concat_softc* softc; } ;


 int FUNC_0 (struct bio*,char*,int*,int) ;

__attribute__((used)) static void
FUNC_1(struct bio *VAR_0)
{
 struct g_concat_softc *VAR_1;
 struct g_concat_disk *VAR_2;
 int VAR_3, VAR_4;

 VAR_1 = VAR_0->bio_to->geom->softc;
 for (VAR_3 = 0; VAR_3 < VAR_1->sc_ndisks; VAR_3++) {
  VAR_2 = &VAR_1->sc_disks[VAR_3];
  if (!VAR_2->d_removed && VAR_2->d_candelete)
   break;
 }
 VAR_4 = VAR_3 < VAR_1->sc_ndisks;
 FUNC_0(VAR_0, "GEOM::candelete", &VAR_4, sizeof(VAR_4));
}
