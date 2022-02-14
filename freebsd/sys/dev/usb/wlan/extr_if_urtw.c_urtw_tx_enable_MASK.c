
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct urtw_softc {int sc_flags; int sc_tx_retry; int sc_rts_retry; } ;


 int VAR_0 ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct urtw_softc*,int ,int*) ;
 int FUNC_1 (struct urtw_softc*,int ,int*) ;
 int FUNC_2 (struct urtw_softc*,int ,int) ;
 int FUNC_3 (struct urtw_softc*,int ,int) ;

__attribute__((used)) static usb_error_t
FUNC_4(struct urtw_softc *VAR_28)
{
 uint8_t VAR_29;
 uint32_t VAR_30;
 usb_error_t VAR_31;

 if (VAR_28->sc_flags & VAR_7) {
  FUNC_0(VAR_28, VAR_12, &VAR_30);
  VAR_30 &= ~VAR_19;
  VAR_30 &= ~(VAR_16 | VAR_25);
  VAR_30 &= ~(VAR_23 | VAR_22);
  VAR_30 &= ~VAR_27;
  VAR_30 |= VAR_18 | VAR_15 |
      (7 << 8) |
      (7 << 0) |
      (7 << 21);
  FUNC_2(VAR_28, VAR_12, VAR_30);

  FUNC_1(VAR_28, VAR_5, &VAR_29);
  VAR_29 |= VAR_6;
  FUNC_3(VAR_28, VAR_5, VAR_29);
  return (VAR_31);
 }

 FUNC_1(VAR_28, VAR_2, &VAR_29);
 VAR_29 &= ~(VAR_3 | VAR_4);
 FUNC_3(VAR_28, VAR_2, VAR_29);

 FUNC_1(VAR_28, VAR_8, &VAR_29);
 VAR_29 &= ~VAR_11;
 VAR_29 &= ~VAR_10;
 VAR_29 &= ~VAR_9;
 FUNC_3(VAR_28, VAR_8, VAR_29);

 FUNC_0(VAR_28, VAR_12, &VAR_30);
 VAR_30 &= ~VAR_19;
 VAR_30 |= VAR_20;
 VAR_30 &= ~(VAR_16 | VAR_25);
 VAR_30 |= VAR_28->sc_tx_retry << VAR_17;
 VAR_30 |= VAR_28->sc_rts_retry << VAR_26;
 VAR_30 &= ~(VAR_23 | VAR_22);
 VAR_30 |= VAR_21 | VAR_13 | VAR_14;
 VAR_30 &= ~VAR_27;
 VAR_30 |= VAR_24;
 FUNC_2(VAR_28, VAR_12, VAR_30);

 FUNC_1(VAR_28, VAR_0, &VAR_29);
 FUNC_3(VAR_28, VAR_0, VAR_29 | VAR_1);
fail:
 return (VAR_31);
}
