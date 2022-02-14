
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ds_ndisks; } ;
struct g_mirror_softc {int sc_lock; TYPE_2__ sc_sync; int sc_name; } ;
struct TYPE_3__ {struct g_consumer* ds_consumer; int * ds_bios; } ;
struct g_mirror_disk {scalar_t__ d_state; int d_flags; TYPE_1__ d_sync; struct g_mirror_softc* d_softc; } ;
struct g_consumer {int dummy; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct g_mirror_disk*) ;
 int FUNC_5 (struct g_mirror_softc*,struct g_consumer*) ;
 int FUNC_6 (struct g_mirror_softc*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void
FUNC_13(struct g_mirror_disk *VAR_4, int VAR_5)
{
 struct g_mirror_softc *VAR_6;
 struct g_consumer *VAR_7;

 FUNC_7();
 VAR_6 = VAR_4->d_softc;
 FUNC_10(&VAR_6->sc_lock, VAR_3);

 FUNC_1(VAR_4->d_state == VAR_1,
     ("Wrong disk state (%s, %s).", FUNC_4(VAR_4),
     FUNC_3(VAR_4->d_state)));
 if (VAR_4->d_sync.ds_consumer == ((void*)0))
  return;

 if (VAR_5 == 0) {
  FUNC_0(0, "Device %s: rebuilding provider %s finished.",
      VAR_6->sc_name, FUNC_4(VAR_4));
 } else {
  FUNC_0(0, "Device %s: rebuilding provider %s stopped.",
      VAR_6->sc_name, FUNC_4(VAR_4));
 }
 FUNC_6(VAR_6);
 FUNC_2(VAR_4->d_sync.ds_bios, VAR_2);
 VAR_4->d_sync.ds_bios = ((void*)0);
 VAR_7 = VAR_4->d_sync.ds_consumer;
 VAR_4->d_sync.ds_consumer = ((void*)0);
 VAR_4->d_flags &= ~VAR_0;
 VAR_6->sc_sync.ds_ndisks--;
 FUNC_12(&VAR_6->sc_lock);
 FUNC_8();
 FUNC_5(VAR_6, VAR_7);
 FUNC_9();
 FUNC_11(&VAR_6->sc_lock);
}
