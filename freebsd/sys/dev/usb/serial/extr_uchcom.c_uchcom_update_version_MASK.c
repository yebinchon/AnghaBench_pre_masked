
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uchcom_softc {int sc_version; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct uchcom_softc*,int *) ;

__attribute__((used)) static void
FUNC_2(struct uchcom_softc *VAR_0)
{
 FUNC_1(VAR_0, &VAR_0->sc_version);
 FUNC_0("Chip version: 0x%02x\n", VAR_0->sc_version);
}
