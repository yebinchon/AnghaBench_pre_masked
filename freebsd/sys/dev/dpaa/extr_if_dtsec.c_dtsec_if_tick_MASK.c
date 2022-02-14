
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtsec_softc {int sc_tick_callout; int sc_mii; } ;


 int FUNC_0 (struct dtsec_softc*) ;
 int FUNC_1 (struct dtsec_softc*) ;
 int FUNC_2 (int *,int ,void (*) (void*),struct dtsec_softc*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct dtsec_softc *VAR_2;

 VAR_2 = VAR_1;


 FUNC_0(VAR_2);

 FUNC_3(VAR_2->sc_mii);
 FUNC_2(&VAR_2->sc_tick_callout, VAR_0, FUNC_4, VAR_2);

 FUNC_1(VAR_2);
}
