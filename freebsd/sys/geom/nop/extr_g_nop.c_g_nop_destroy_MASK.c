
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {scalar_t__ acr; scalar_t__ acw; scalar_t__ ace; int name; } ;
struct g_nop_softc {int dummy; } ;
struct g_geom {int name; int provider; struct g_nop_softc* softc; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ,...) ;
 struct g_provider* FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct g_geom*,int) ;

__attribute__((used)) static int
FUNC_4(struct g_geom *VAR_2, boolean_t VAR_3)
{
 struct g_nop_softc *VAR_4;
 struct g_provider *VAR_5;

 FUNC_2();
 VAR_4 = VAR_2->softc;
 if (VAR_4 == ((void*)0))
  return (VAR_1);
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

 FUNC_3(VAR_2, VAR_1);

 return (0);
}
