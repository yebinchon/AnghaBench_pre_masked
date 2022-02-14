
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtsec_softc {int * sc_mach; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct dtsec_softc *VAR_1)
{
 if (VAR_1->sc_mach == ((void*)0))
  return;

 FUNC_0(VAR_1->sc_mach, VAR_0);
 FUNC_1(VAR_1->sc_mach);
 VAR_1->sc_mach = ((void*)0);
}
