
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {scalar_t__ acr; scalar_t__ acw; scalar_t__ ace; struct g_geom* geom; } ;
struct g_geom {struct g_eli_softc* softc; } ;
struct g_eli_softc {int sc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct g_geom*,int ,int *) ;

int
FUNC_1(struct g_provider *VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 struct g_eli_softc *VAR_10;
 struct g_geom *VAR_11;

 VAR_11 = VAR_6->geom;
 VAR_10 = VAR_11->softc;

 if (VAR_8 > 0) {
  if (VAR_10->sc_flags & VAR_1) {

   return (VAR_0);
  }

  VAR_10->sc_flags |= VAR_3;
  return (0);
 }

 if (VAR_6->acr + VAR_7 > 0 || VAR_6->acw + VAR_8 > 0 || VAR_6->ace + VAR_9 > 0)
  return (0);




 if ((VAR_10->sc_flags & VAR_2) ||
     (VAR_10->sc_flags & VAR_3)) {
  FUNC_0(VAR_5, VAR_11, VAR_4, ((void*)0));
 }
 return (0);
}
