
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
struct urtw_softc {int sc_flags; } ;


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
 int FUNC_0 (struct urtw_softc*,int,int) ;
 int FUNC_1 (struct urtw_softc*,int ,int*) ;
 scalar_t__ FUNC_2 (struct urtw_softc*,int ) ;
 int FUNC_3 (struct urtw_softc*,int ,int ) ;
 int FUNC_4 (struct urtw_softc*,int ,int) ;

__attribute__((used)) static usb_error_t
FUNC_5(struct urtw_softc *VAR_13)
{
 uint8_t VAR_14;
 usb_error_t VAR_15;

 FUNC_0(VAR_13, 0x4, 0x1f);

 VAR_15 = FUNC_2(VAR_13, VAR_10);
 if (VAR_15)
  goto fail;

 FUNC_1(VAR_13, VAR_8, &VAR_14);
 FUNC_4(VAR_13, VAR_8, VAR_14 | VAR_9);
 if (VAR_13->sc_flags & VAR_12) {
  FUNC_3(VAR_13, VAR_6,
      VAR_0);
  FUNC_3(VAR_13, VAR_5, VAR_2);
  FUNC_3(VAR_13, VAR_7,
      VAR_1);
 } else {
  FUNC_3(VAR_13, VAR_6, VAR_3);
  FUNC_3(VAR_13, VAR_5, VAR_4);
 }

 FUNC_4(VAR_13, VAR_8, VAR_14 & ~VAR_9);
 VAR_15 = FUNC_2(VAR_13, VAR_11);
 if (VAR_15)
  goto fail;

fail:
 return (VAR_15);
}
