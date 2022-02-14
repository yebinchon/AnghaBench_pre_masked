
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct dtsec_softc* t_Handle ;
struct dtsec_softc {int sc_dev; } ;
typedef int e_FmMacExceptions ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(t_Handle VAR_0,
    e_FmMacExceptions VAR_1)
{
 struct dtsec_softc *VAR_2;

 VAR_2 = VAR_0;
 FUNC_0(VAR_2->sc_dev, "MDIO event %i: %s.\n", VAR_1,
     FUNC_1(VAR_1));
}
