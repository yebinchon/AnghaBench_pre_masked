
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {scalar_t__ acr; scalar_t__ acw; scalar_t__ ace; int name; } ;
struct g_mountver_softc {struct g_mountver_softc* sc_provider_name; } ;
struct g_geom {struct g_mountver_softc* softc; int name; int provider; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ,...) ;
 struct g_provider* FUNC_1 (int *) ;
 int FUNC_2 (struct g_mountver_softc*) ;
 int FUNC_3 (struct g_geom*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct g_geom*,int) ;
 int FUNC_6 (struct g_provider*,int) ;

__attribute__((used)) static int
FUNC_7(struct g_geom *VAR_2, boolean_t VAR_3)
{
 struct g_mountver_softc *VAR_4;
 struct g_provider *VAR_5;

 FUNC_4();
 if (VAR_2->softc == ((void*)0))
  return (VAR_1);
 VAR_4 = VAR_2->softc;
 VAR_5 = FUNC_1(&VAR_2->provider);
 if (VAR_5 != ((void*)0) && (VAR_5->acr != 0 || VAR_5->acw != 0 || VAR_5->ace != 0)) {
  if (VAR_3) {
   FUNC_0(0, "Device %s is still open, so it "
       "can't be definitely removed.", VAR_5->name);
  } else {
   FUNC_0(1, "Device %s is still open (r%dw%de%d).",
       VAR_5->name, VAR_5->acr, VAR_5->acw, VAR_5->ace);
   return (VAR_0);
  }
 } else {
  FUNC_0(0, "Device %s removed.", VAR_2->name);
 }
 if (VAR_5 != ((void*)0))
  FUNC_6(VAR_5, VAR_1);
 FUNC_3(VAR_2);
 FUNC_2(VAR_4->sc_provider_name);
 FUNC_2(VAR_2->softc);
 VAR_2->softc = ((void*)0);
 FUNC_5(VAR_2, VAR_1);

 return (0);
}
