
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {scalar_t__ acr; scalar_t__ acw; scalar_t__ ace; int name; } ;
struct g_geom {int name; int * softc; int access; int provider; } ;
struct g_eli_softc {int sc_queue_mtx; int sc_workers; int sc_flags; struct g_geom* sc_geom; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 struct g_provider* FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct g_eli_softc*,int) ;
 int FUNC_4 (struct g_eli_softc*,int ) ;
 int VAR_6 ;
 int FUNC_5 (struct g_eli_softc*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct g_geom*,int) ;
 int FUNC_8 (struct g_provider*,int) ;
 int FUNC_9 (int *,int *,int ,char*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct g_eli_softc*) ;

int
FUNC_13(struct g_eli_softc *VAR_7, boolean_t VAR_8)
{
 struct g_geom *VAR_9;
 struct g_provider *VAR_10;

 FUNC_6();

 if (VAR_7 == ((void*)0))
  return (VAR_1);

 VAR_9 = VAR_7->sc_geom;
 VAR_10 = FUNC_2(&VAR_9->provider);
 if (VAR_10 != ((void*)0) && (VAR_10->acr != 0 || VAR_10->acw != 0 || VAR_10->ace != 0)) {
  if (VAR_8) {
   FUNC_0(1, "Device %s is still open, so it "
       "cannot be definitely removed.", VAR_10->name);
   VAR_7->sc_flags |= VAR_3;
   VAR_9->access = VAR_6;
   FUNC_8(VAR_10, VAR_1);
   return (VAR_0);
  } else {
   FUNC_0(1,
       "Device %s is still open (r%dw%de%d).", VAR_10->name,
       VAR_10->acr, VAR_10->acw, VAR_10->ace);
   return (VAR_0);
  }
 }

 FUNC_11(&VAR_7->sc_queue_mtx);
 VAR_7->sc_flags |= VAR_2;
 FUNC_12(VAR_7);
 while (!FUNC_1(&VAR_7->sc_workers)) {
  FUNC_9(&VAR_7->sc_workers, &VAR_7->sc_queue_mtx, VAR_5,
      "geli:destroy", 0);
 }
 FUNC_10(&VAR_7->sc_queue_mtx);
 VAR_9->softc = ((void*)0);
 FUNC_5(VAR_7);
 FUNC_3(VAR_7, sizeof(*VAR_7));
 FUNC_4(VAR_7, VAR_4);

 if (VAR_10 == ((void*)0) || (VAR_10->acr == 0 && VAR_10->acw == 0 && VAR_10->ace == 0))
  FUNC_0(0, "Device %s destroyed.", VAR_9->name);
 FUNC_7(VAR_9, VAR_1);

 return (0);
}
