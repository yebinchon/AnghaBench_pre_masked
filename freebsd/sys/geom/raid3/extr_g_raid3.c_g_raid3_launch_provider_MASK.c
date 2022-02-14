
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_raid3_softc {int sc_ndisks; scalar_t__ sc_state; struct g_provider* sc_provider; struct g_raid3_disk* sc_disks; int sc_sectorsize; int sc_mediasize; int sc_name; int sc_geom; int sc_lock; } ;
struct g_raid3_disk {TYPE_2__* d_consumer; } ;
struct g_provider {int stripesize; int stripeoffset; int name; int sectorsize; int mediasize; } ;
struct TYPE_4__ {TYPE_1__* provider; } ;
struct TYPE_3__ {int stripesize; int stripeoffset; } ;


 int FUNC_0 (int ,char*,int ,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct g_provider*,int ) ;
 struct g_provider* FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct g_raid3_softc*,int ) ;
 int FUNC_4 (struct g_raid3_softc*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void
FUNC_8(struct g_raid3_softc *VAR_3)
{
 struct g_provider *VAR_4;
 struct g_raid3_disk *VAR_5;
 int VAR_6;

 FUNC_7(&VAR_3->sc_lock, VAR_2);

 FUNC_5();
 VAR_4 = FUNC_2(VAR_3->sc_geom, "raid3/%s", VAR_3->sc_name);
 VAR_4->mediasize = VAR_3->sc_mediasize;
 VAR_4->sectorsize = VAR_3->sc_sectorsize;
 VAR_4->stripesize = 0;
 VAR_4->stripeoffset = 0;
 for (VAR_6 = 0; VAR_6 < VAR_3->sc_ndisks; VAR_6++) {
  VAR_5 = &VAR_3->sc_disks[VAR_6];
  if (VAR_5->d_consumer && VAR_5->d_consumer->provider &&
      VAR_5->d_consumer->provider->stripesize > VAR_4->stripesize) {
   VAR_4->stripesize = VAR_5->d_consumer->provider->stripesize;
   VAR_4->stripeoffset = VAR_5->d_consumer->provider->stripeoffset;
  }
 }
 VAR_4->stripesize *= VAR_3->sc_ndisks - 1;
 VAR_4->stripeoffset *= VAR_3->sc_ndisks - 1;
 VAR_3->sc_provider = VAR_4;
 FUNC_1(VAR_4, 0);
 FUNC_6();
 FUNC_0(0, "Device %s launched (%u/%u).", VAR_4->name,
     FUNC_3(VAR_3, VAR_1), VAR_3->sc_ndisks);

 if (VAR_3->sc_state == VAR_0)
  FUNC_4(VAR_3);
}
