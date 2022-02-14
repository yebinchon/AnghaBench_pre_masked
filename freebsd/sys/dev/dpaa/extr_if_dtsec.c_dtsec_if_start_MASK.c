
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct dtsec_softc* if_softc; } ;
struct dtsec_softc {int (* sc_start_locked ) (struct dtsec_softc*) ;} ;


 int FUNC_0 (struct dtsec_softc*) ;
 int FUNC_1 (struct dtsec_softc*) ;
 int FUNC_2 (struct dtsec_softc*) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_0)
{
 struct dtsec_softc *VAR_1;

 VAR_1 = VAR_0->if_softc;
 FUNC_0(VAR_1);
 VAR_1->sc_start_locked(VAR_1);
 FUNC_1(VAR_1);
}
