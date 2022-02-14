
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_usb_softc {int * uc_xfer; } ;
struct rtwn_softc {int dummy; } ;


 int FUNC_0 (struct rtwn_softc*) ;
 int FUNC_1 (struct rtwn_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct rtwn_softc*) ;
 struct rtwn_usb_softc* FUNC_3 (struct rtwn_softc*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct rtwn_softc *VAR_1)
{
 struct rtwn_usb_softc *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 FUNC_0(VAR_1);


 FUNC_2(VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_4(VAR_2->uc_xfer[VAR_3]);
 FUNC_1(VAR_1);
}
