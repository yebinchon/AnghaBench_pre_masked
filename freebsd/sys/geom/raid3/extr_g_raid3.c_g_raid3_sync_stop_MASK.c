
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_raid3_softc {scalar_t__ sc_state; int sc_lock; int sc_name; struct g_raid3_disk* sc_syncdisk; } ;
struct TYPE_2__ {struct g_consumer* ds_consumer; int * ds_bios; } ;
struct g_raid3_disk {scalar_t__ d_state; int d_flags; TYPE_1__ d_sync; } ;
struct g_consumer {int dummy; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct g_raid3_disk*) ;
 int FUNC_5 (struct g_raid3_softc*,struct g_consumer*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(struct g_raid3_softc *VAR_5, int VAR_6)
{
 struct g_raid3_disk *VAR_7;
 struct g_consumer *VAR_8;

 FUNC_6();
 FUNC_9(&VAR_5->sc_lock, VAR_4);

 FUNC_1(VAR_5->sc_state == VAR_0,
     ("Device not in DEGRADED state (%s, %u).", VAR_5->sc_name,
     VAR_5->sc_state));
 VAR_7 = VAR_5->sc_syncdisk;
 VAR_5->sc_syncdisk = ((void*)0);
 FUNC_1(VAR_7 != ((void*)0), ("No disk was synchronized (%s).", VAR_5->sc_name));
 FUNC_1(VAR_7->d_state == VAR_2,
     ("Wrong disk state (%s, %s).", FUNC_4(VAR_7),
     FUNC_3(VAR_7->d_state)));
 if (VAR_7->d_sync.ds_consumer == ((void*)0))
  return;

 if (VAR_6 == 0) {
  FUNC_0(0, "Device %s: rebuilding provider %s finished.",
      VAR_5->sc_name, FUNC_4(VAR_7));
 } else {
  FUNC_0(0, "Device %s: rebuilding provider %s stopped.",
      VAR_5->sc_name, FUNC_4(VAR_7));
 }
 FUNC_2(VAR_7->d_sync.ds_bios, VAR_3);
 VAR_7->d_sync.ds_bios = ((void*)0);
 VAR_8 = VAR_7->d_sync.ds_consumer;
 VAR_7->d_sync.ds_consumer = ((void*)0);
 VAR_7->d_flags &= ~VAR_1;
 FUNC_11(&VAR_5->sc_lock);
 FUNC_7();
 FUNC_5(VAR_5, VAR_8);
 FUNC_8();
 FUNC_10(&VAR_5->sc_lock);
}
