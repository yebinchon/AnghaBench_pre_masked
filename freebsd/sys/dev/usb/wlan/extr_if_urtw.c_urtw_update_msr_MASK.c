
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
struct ieee80211com {int ic_opmode; } ;
struct urtw_softc {scalar_t__ sc_state; int sc_flags; struct ieee80211com sc_ic; } ;


 int FUNC_0 (struct urtw_softc*,int ,char*,int) ;




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
 int FUNC_1 (struct urtw_softc*,int ,int *) ;
 int FUNC_2 (struct urtw_softc*,int ,int ) ;

__attribute__((used)) static usb_error_t
FUNC_3(struct urtw_softc *VAR_11)
{
 struct ieee80211com *VAR_12 = &VAR_11->sc_ic;
 uint8_t VAR_13;
 usb_error_t VAR_14;

 FUNC_1(VAR_11, VAR_2, &VAR_13);
 VAR_13 &= ~VAR_6;

 if (VAR_11->sc_state == VAR_0) {
  switch (VAR_12->ic_opmode) {
  case 128:
  case 129:
   VAR_13 |= VAR_8;
   if (VAR_11->sc_flags & VAR_9)
    VAR_13 |= VAR_4;
   break;
  case 130:
   VAR_13 |= VAR_3;
   break;
  case 131:
   VAR_13 |= VAR_5;
   break;
  default:
   FUNC_0(VAR_11, VAR_1,
       "unsupported operation mode 0x%x\n",
       VAR_12->ic_opmode);
   VAR_14 = VAR_10;
   goto fail;
  }
 } else
  VAR_13 |= VAR_7;

 FUNC_2(VAR_11, VAR_2, VAR_13);
fail:
 return (VAR_14);
}
