
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_raid_volume {scalar_t__ v_writes; int v_last_write; int v_name; scalar_t__ v_dirty; TYPE_1__* v_provider; struct g_raid_softc* v_softc; } ;
struct g_raid_softc {int sc_lock; } ;
struct TYPE_2__ {scalar_t__ acw; } ;


 int FUNC_0 (int,struct g_raid_softc*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct g_raid_softc*,struct g_raid_volume*,int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(struct g_raid_volume *VAR_4, int VAR_5)
{
 struct g_raid_softc *VAR_6;
 int VAR_7;

 VAR_6 = VAR_4->v_softc;
 FUNC_2();
 FUNC_3(&VAR_6->sc_lock, VAR_0);



 if (!VAR_4->v_dirty)
  return;
 if (VAR_4->v_writes > 0)
  return;
 if (VAR_5 > 0 || (VAR_5 == -1 &&
     VAR_4->v_provider != ((void*)0) && VAR_4->v_provider->acw > 0)) {
  VAR_7 = VAR_1 - (VAR_3 - VAR_4->v_last_write);
  if (!VAR_2 && VAR_7 > 0)
   return;
 }
 VAR_4->v_dirty = 0;
 FUNC_0(1, VAR_6, "Volume %s marked as clean.",
     VAR_4->v_name);
 FUNC_1(VAR_6, VAR_4, ((void*)0), ((void*)0));
}
