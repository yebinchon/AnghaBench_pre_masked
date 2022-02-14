
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_raid_volume {scalar_t__ v_provider_open; scalar_t__ v_stopping; scalar_t__ v_read_only; } ;
struct g_raid_softc {scalar_t__ sc_stopping; int sc_lock; } ;
struct g_provider {int acw; int name; struct g_raid_volume* private; TYPE_1__* geom; } ;
struct TYPE_2__ {struct g_raid_softc* softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct g_raid_softc*,char*,int ,int,int,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct g_raid_volume*,int) ;
 int FUNC_3 (struct g_raid_volume*) ;
 int FUNC_4 (struct g_raid_softc*,int ,int ) ;
 int FUNC_5 (struct g_raid_softc*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(struct g_provider *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 struct g_raid_volume *VAR_9;
 struct g_raid_softc *VAR_10;
 int VAR_11, VAR_12, VAR_13 = 0;

 FUNC_6();
 VAR_10 = VAR_5->geom->softc;
 VAR_9 = VAR_5->private;
 FUNC_1(VAR_10 != ((void*)0), ("NULL softc (provider=%s).", VAR_5->name));
 FUNC_1(VAR_9 != ((void*)0), ("NULL volume (provider=%s).", VAR_5->name));

 FUNC_0(2, VAR_10, "Access request for %s: r%dw%de%d.", VAR_5->name,
     VAR_6, VAR_7, VAR_8);
 VAR_11 = VAR_5->acw + VAR_7;

 FUNC_8();
 FUNC_9(&VAR_10->sc_lock);

 if (VAR_10->sc_stopping != 0 && (VAR_6 > 0 || VAR_7 > 0 || VAR_8 > 0)) {
  VAR_13 = VAR_0;
  goto out;
 }

 if (VAR_9->v_read_only && VAR_7 > 0) {
  VAR_13 = VAR_1;
  goto out;
 }
 if (VAR_11 == 0)
  FUNC_2(VAR_9, VAR_11);
 VAR_9->v_provider_open += VAR_6 + VAR_7 + VAR_8;

 if (VAR_10->sc_stopping == VAR_2 &&
     VAR_9->v_provider_open == 0) {

  VAR_12 = FUNC_5(VAR_10);
  if (VAR_12 == 0) {
   VAR_10->sc_stopping = VAR_3;

   FUNC_4(VAR_10, VAR_4, 0);
  }
 }

 if (VAR_9->v_stopping && VAR_9->v_provider_open == 0)
  FUNC_3(VAR_9);
out:
 FUNC_10(&VAR_10->sc_lock);
 FUNC_7();
 return (VAR_13);
}
