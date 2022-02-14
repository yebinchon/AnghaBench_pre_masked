
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ucom_softc {int sc_flag; int sc_mcr; int sc_msr; } ;
struct tty {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ucom_softc*,int ) ;
 struct ucom_softc* FUNC_1 (struct tty*) ;
 int FUNC_2 (struct ucom_softc*,int) ;
 int FUNC_3 (struct ucom_softc*,int) ;

__attribute__((used)) static int
FUNC_4(struct tty *VAR_8, int VAR_9, int VAR_10)
{
 struct ucom_softc *VAR_11 = FUNC_1(VAR_8);
 uint8_t VAR_12;

 FUNC_0(VAR_11, VAR_0);

 if (!(VAR_11->sc_flag & VAR_7)) {
  return (0);
 }
 if ((VAR_9 == 0) && (VAR_10 == 0)) {

  if (VAR_11->sc_mcr & VAR_4) {
   VAR_9 |= VAR_4;
  }
  if (VAR_11->sc_mcr & VAR_6) {
   VAR_9 |= VAR_6;
  }
  if (VAR_11->sc_msr & VAR_1) {
   VAR_9 |= VAR_1;
  }
  if (VAR_11->sc_msr & VAR_2) {
   VAR_9 |= VAR_2;
  }
  if (VAR_11->sc_msr & VAR_3) {
   VAR_9 |= VAR_3;
  }
  if (VAR_11->sc_msr & VAR_5) {
   VAR_9 |= VAR_5;
  }
  return (VAR_9);
 }
 if (VAR_9 & VAR_4) {
  VAR_11->sc_mcr |= VAR_4;
 }
 if (VAR_10 & VAR_4) {
  VAR_11->sc_mcr &= ~VAR_4;
 }
 if (VAR_9 & VAR_6) {
  VAR_11->sc_mcr |= VAR_6;
 }
 if (VAR_10 & VAR_6) {
  VAR_11->sc_mcr &= ~VAR_6;
 }
 VAR_12 = (VAR_11->sc_mcr & VAR_4) ? 1 : 0;
 FUNC_2(VAR_11, VAR_12);

 VAR_12 = (VAR_11->sc_mcr & VAR_6) ? 1 : 0;
 FUNC_3(VAR_11, VAR_12);

 return (0);
}
