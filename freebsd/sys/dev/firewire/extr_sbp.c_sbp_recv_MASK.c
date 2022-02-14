
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbp_softc {int dummy; } ;
struct fw_xfer {scalar_t__ sc; } ;


 int FUNC_0 (struct sbp_softc*) ;
 int FUNC_1 (struct sbp_softc*) ;
 int FUNC_2 (struct fw_xfer*) ;

__attribute__((used)) static void
FUNC_3(struct fw_xfer *VAR_0)
{
 struct sbp_softc *VAR_1;

 VAR_1 = (struct sbp_softc *)VAR_0->sc;
 FUNC_0(VAR_1);
 FUNC_2(VAR_0);
 FUNC_1(VAR_1);
}
