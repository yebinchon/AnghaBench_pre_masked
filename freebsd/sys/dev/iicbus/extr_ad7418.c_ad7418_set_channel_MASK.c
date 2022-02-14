
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7418_softc {int sc_curchan; int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_2 (struct ad7418_softc*,int ,char*,int) ;

__attribute__((used)) static void
FUNC_3(struct ad7418_softc *VAR_3, int VAR_4)
{
 if (VAR_3->sc_curchan == VAR_4)
  return;
 FUNC_1(VAR_3->sc_dev, VAR_0,
     (FUNC_0(VAR_3->sc_dev, VAR_0) &~ VAR_1)|VAR_4);
 VAR_3->sc_curchan = VAR_4;
}
