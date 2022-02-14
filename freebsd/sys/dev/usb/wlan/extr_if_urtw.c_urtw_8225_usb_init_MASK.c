
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
struct urtw_softc {int sc_mtx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct urtw_softc*,int,int*) ;
 int FUNC_1 (struct urtw_softc*,scalar_t__,int) ;
 int FUNC_2 (struct urtw_softc*,scalar_t__,int) ;
 scalar_t__ FUNC_3 (struct urtw_softc*,int,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static usb_error_t
FUNC_5(struct urtw_softc *VAR_5)
{
 uint8_t VAR_6;
 usb_error_t VAR_7;

 FUNC_2(VAR_5, VAR_4 + 1, 0);
 FUNC_2(VAR_5, VAR_0, 0);
 VAR_7 = FUNC_0(VAR_5, 0x53, &VAR_6);
 if (VAR_7)
  goto fail;
 VAR_7 = FUNC_3(VAR_5, 0x53, VAR_6 | (1 << 7));
 if (VAR_7)
  goto fail;
 FUNC_2(VAR_5, VAR_4 + 1, 4);
 FUNC_2(VAR_5, VAR_0, 0x20);
 FUNC_2(VAR_5, VAR_1, 0);

 FUNC_1(VAR_5, VAR_3, 0x80);
 FUNC_1(VAR_5, VAR_4, 0x80);
 FUNC_1(VAR_5, VAR_2, 0x80);

 FUNC_4(&VAR_5->sc_mtx, 500);
fail:
 return (VAR_7);
}
