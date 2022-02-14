
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7418_softc {scalar_t__ sc_lastupdate; int sc_curtemp; int sc_curvolt; int sc_dev; int sc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ad7418_softc*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_3(struct ad7418_softc *VAR_7)
{
 int VAR_8;

 FUNC_2(&VAR_7->sc_lock, VAR_4);

 if (VAR_6 - VAR_7->sc_lastupdate > VAR_5) {
  FUNC_1(VAR_7, VAR_0);
  VAR_8 = FUNC_0(VAR_7->sc_dev, VAR_2);
  if (VAR_8 >= 0)
   VAR_7->sc_curtemp = VAR_8;
  FUNC_1(VAR_7, VAR_1);
  VAR_8 = FUNC_0(VAR_7->sc_dev, VAR_3);
  if (VAR_8 >= 0)
   VAR_7->sc_curvolt = VAR_8;
  VAR_7->sc_lastupdate = VAR_6;
 }
}
