
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_sched_softc {int sc_flags; int sc_mtx; struct g_gsched* sc_gsched; int sc_data; int * sc_hash; int sc_mask; } ;
struct g_provider {scalar_t__ acr; scalar_t__ acw; scalar_t__ ace; int name; } ;
struct g_gsched {int (* gs_fini ) (int ) ;} ;
struct g_geom {struct g_sched_softc* softc; int name; int provider; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_2 ;
 struct g_provider* FUNC_1 (int *) ;
 int FUNC_2 (struct g_geom*,struct g_provider*) ;
 struct g_provider* FUNC_3 (struct g_geom*) ;
 int FUNC_4 (struct g_sched_softc*) ;
 int FUNC_5 (struct g_gsched*) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct g_geom*) ;
 int FUNC_8 (struct g_geom*,int *,int ,struct g_gsched*,int ) ;
 int FUNC_9 (struct g_geom*) ;
 int VAR_4 ;
 int FUNC_10 (struct g_geom*) ;
 int FUNC_11 (struct g_geom*) ;
 int FUNC_12 () ;
 int FUNC_13 (struct g_geom*,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int
FUNC_16(struct g_geom *VAR_5, boolean_t VAR_6)
{
 struct g_provider *VAR_7, *VAR_8 = ((void*)0);
 struct g_sched_softc *VAR_9;
 struct g_gsched *VAR_10;
 int VAR_11;

 FUNC_12();
 VAR_9 = VAR_5->softc;
 if (VAR_9 == ((void*)0))
  return (VAR_1);
 if (!(VAR_9->sc_flags & VAR_2)) {
  VAR_7 = FUNC_1(&VAR_5->provider);
  if (VAR_7 && (VAR_7->acr != 0 || VAR_7->acw != 0 || VAR_7->ace != 0)) {
   const char *VAR_12 = VAR_6 ?
    "but we force removal" : "cannot remove";

   FUNC_0(!VAR_6,
       "Device %s is still open (r%dw%de%d), %s.",
       VAR_7->name, VAR_7->acr, VAR_7->acw, VAR_7->ace, VAR_12);
   if (!VAR_6)
    return (VAR_0);
  } else {
   FUNC_0(0, "Device %s removed.", VAR_5->name);
  }
 } else
  VAR_8 = FUNC_3(VAR_5);

 VAR_10 = VAR_9->sc_gsched;
 if (VAR_10) {





  FUNC_9(VAR_5);







  FUNC_7(VAR_5);
  VAR_11 = FUNC_11(VAR_5);

  if (VAR_11) {
   if ((VAR_9->sc_flags & VAR_2) && VAR_8) {
    FUNC_6(VAR_6 ?
        VAR_3 : VAR_4);
   }
   if (VAR_6) {
    FUNC_0(0, "Pending requests while "
        " destroying geom, some memory leaked.");
   }

   return (VAR_11);
  }

  FUNC_10(VAR_5);
  FUNC_8(VAR_5, VAR_9->sc_hash, VAR_9->sc_mask,
      VAR_10, VAR_9->sc_data);
  VAR_9->sc_hash = ((void*)0);
  VAR_10->gs_fini(VAR_9->sc_data);
  FUNC_5(VAR_10);
  VAR_9->sc_gsched = ((void*)0);
 } else
  VAR_11 = 0;

 if ((VAR_9->sc_flags & VAR_2) && VAR_8) {
  VAR_11 = FUNC_2(VAR_5, VAR_8);

  if (VAR_11) {
   if (VAR_6) {
    FUNC_0(0, "Unrecoverable error while "
        "destroying a proxy geom, leaking some "
        " memory.");
   }

   return (VAR_11);
  }
 }

 FUNC_14(&VAR_9->sc_mtx);

 FUNC_4(VAR_5->softc);
 VAR_5->softc = ((void*)0);
 FUNC_13(VAR_5, VAR_1);

 return (VAR_11);
}
