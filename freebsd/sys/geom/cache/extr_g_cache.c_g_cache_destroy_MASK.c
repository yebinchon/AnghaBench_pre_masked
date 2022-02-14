
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {scalar_t__ acr; scalar_t__ acw; scalar_t__ ace; int name; } ;
struct g_geom {int * softc; int name; int provider; } ;
struct g_cache_softc {int sc_zone; int sc_mtx; int * sc_desclist; int sc_callout; struct g_geom* sc_geom; } ;
struct g_cache_desc {int dummy; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ,...) ;
 void* FUNC_1 (int *) ;
 struct g_cache_desc* FUNC_2 (struct g_cache_desc*,int ) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (struct g_cache_softc*,struct g_cache_desc*) ;
 int FUNC_5 (struct g_cache_softc*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct g_geom*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(struct g_cache_softc *VAR_4, boolean_t VAR_5)
{
 struct g_geom *VAR_6;
 struct g_provider *VAR_7;
 struct g_cache_desc *VAR_8, *VAR_9;
 int VAR_10;

 FUNC_6();
 if (VAR_4 == ((void*)0))
  return (VAR_1);
 VAR_6 = VAR_4->sc_geom;
 VAR_7 = FUNC_1(&VAR_6->provider);
 if (VAR_7 != ((void*)0) && (VAR_7->acr != 0 || VAR_7->acw != 0 || VAR_7->ace != 0)) {
  if (VAR_5) {
   FUNC_0(0, "Device %s is still open, so it "
       "can't be definitely removed.", VAR_7->name);
  } else {
   FUNC_0(1, "Device %s is still open (r%dw%de%d).",
       VAR_7->name, VAR_7->acr, VAR_7->acw, VAR_7->ace);
   return (VAR_0);
  }
 } else {
  FUNC_0(0, "Device %s removed.", VAR_6->name);
 }
 FUNC_3(&VAR_4->sc_callout);
 FUNC_9(&VAR_4->sc_mtx);
 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  VAR_8 = FUNC_1(&VAR_4->sc_desclist[VAR_10]);
  while (VAR_8 != ((void*)0)) {
   VAR_9 = FUNC_2(VAR_8, VAR_3);
   FUNC_4(VAR_4, VAR_8);
   VAR_8 = VAR_9;
  }
 }
 FUNC_10(&VAR_4->sc_mtx);
 FUNC_8(&VAR_4->sc_mtx);
 FUNC_11(VAR_4->sc_zone);
 FUNC_5(VAR_4);
 VAR_6->softc = ((void*)0);
 FUNC_7(VAR_6, VAR_1);

 return (0);
}
