
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_usb_softc {int * uc_xfer; } ;
struct rtwn_softc {int dummy; } ;


 size_t VAR_0 ;
 struct rtwn_usb_softc* FUNC_0 (struct rtwn_softc*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct rtwn_softc *VAR_1)
{
 struct rtwn_usb_softc *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2->uc_xfer[VAR_0]);
}
