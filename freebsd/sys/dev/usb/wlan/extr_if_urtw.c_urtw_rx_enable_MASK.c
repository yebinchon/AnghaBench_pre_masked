
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
struct urtw_softc {int sc_flags; int * sc_xfer; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct urtw_softc*,int ,int*) ;
 scalar_t__ FUNC_1 (struct urtw_softc*) ;
 int FUNC_2 (struct urtw_softc*,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static usb_error_t
FUNC_4(struct urtw_softc *VAR_5)
{
 uint8_t VAR_6;
 usb_error_t VAR_7;

 FUNC_3((VAR_5->sc_flags & VAR_4) ?
     VAR_5->sc_xfer[VAR_0] : VAR_5->sc_xfer[VAR_1]);

 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7 != 0)
  goto fail;

 if ((VAR_5->sc_flags & VAR_4) == 0) {
  FUNC_0(VAR_5, VAR_2, &VAR_6);
  FUNC_2(VAR_5, VAR_2, VAR_6 | VAR_3);
 }
fail:
 return (VAR_7);
}
