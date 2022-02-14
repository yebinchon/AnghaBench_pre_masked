
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct rtwn_usb_softc {int ntx; } ;
struct rtwn_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rtwn_usb_softc* FUNC_0 (struct rtwn_softc*) ;

uint16_t
FUNC_1(struct rtwn_softc *VAR_3)
{
 struct rtwn_usb_softc *VAR_4 = FUNC_0(VAR_3);

 switch (VAR_4->ntx) {
 case 1:
  return (VAR_1);
 case 2:
  return (VAR_2);
 default:
  return (VAR_0);
 }
}
