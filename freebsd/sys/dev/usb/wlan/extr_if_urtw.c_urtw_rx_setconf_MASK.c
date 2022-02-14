
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint32_t ;
struct ieee80211com {scalar_t__ ic_opmode; scalar_t__ ic_promisc; scalar_t__ ic_allmulti; } ;
struct urtw_softc {int sc_flags; int sc_crcmon; struct ieee80211com sc_ic; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct urtw_softc*,int ,int*) ;
 int FUNC_1 (struct urtw_softc*,int ,int) ;

__attribute__((used)) static usb_error_t
FUNC_2(struct urtw_softc *VAR_21)
{
 struct ieee80211com *VAR_22 = &VAR_21->sc_ic;
 uint32_t VAR_23;
 usb_error_t VAR_24;

 FUNC_0(VAR_21, VAR_5, &VAR_23);
 VAR_23 = VAR_23 &~ VAR_16;
 if (VAR_21->sc_flags & VAR_4) {
  VAR_23 = VAR_23 | VAR_18 | VAR_14 |
      VAR_17 | VAR_11 |
      VAR_9 |
      VAR_1 |
      VAR_6 | VAR_3;
 } else {
  VAR_23 = VAR_23 | VAR_18 | VAR_14;
  VAR_23 = VAR_23 | VAR_11 | VAR_17;

  if (VAR_22->ic_opmode == VAR_0) {
   VAR_23 = VAR_23 | VAR_15;
   VAR_23 = VAR_23 | VAR_20;
  }
  if (VAR_21->sc_crcmon == 1 && VAR_22->ic_opmode == VAR_0)
   VAR_23 = VAR_23 | VAR_12;

  VAR_23 = VAR_23 &~ VAR_8;
  VAR_23 = VAR_23 | VAR_9 |
      VAR_6;
  VAR_23 = VAR_23 &~ VAR_2;
  VAR_23 = VAR_23 | VAR_1 | VAR_3;
 }


 if (VAR_22->ic_opmode == VAR_0 ||
     VAR_22->ic_promisc > 0 || VAR_22->ic_allmulti > 0) {
  VAR_23 = VAR_23 | VAR_13;
  VAR_23 = VAR_23 | VAR_10;
 } else {
  VAR_23 = VAR_23 | VAR_19;
  VAR_23 = VAR_23 | VAR_7;
 }

 FUNC_1(VAR_21, VAR_5, VAR_23);
fail:
 return (VAR_24);
}
