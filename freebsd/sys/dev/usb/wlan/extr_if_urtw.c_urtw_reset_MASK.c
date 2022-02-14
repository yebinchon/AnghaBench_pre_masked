
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
struct urtw_softc {int sc_mtx; int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct urtw_softc*,int ) ;
 scalar_t__ FUNC_2 (struct urtw_softc*,int ) ;
 scalar_t__ FUNC_3 (struct urtw_softc*) ;
 int FUNC_4 (struct urtw_softc*,int ,int*) ;
 scalar_t__ FUNC_5 (struct urtw_softc*,int ) ;
 int FUNC_6 (struct urtw_softc*,int ,int) ;
 scalar_t__ FUNC_7 (struct urtw_softc*,int,int) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static usb_error_t
FUNC_9(struct urtw_softc *VAR_5)
{
 uint8_t VAR_6;
 usb_error_t VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_1);
 if (VAR_7)
  goto fail;
 VAR_7 = FUNC_2(VAR_5, VAR_0);
 if (VAR_7)
  goto fail;

 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7)
  goto fail;
 FUNC_8(&VAR_5->sc_mtx, 100);

 VAR_7 = FUNC_7(VAR_5, 0x18, 0x10);
 if (VAR_7 != 0)
  goto fail;
 VAR_7 = FUNC_7(VAR_5, 0x18, 0x11);
 if (VAR_7 != 0)
  goto fail;
 VAR_7 = FUNC_7(VAR_5, 0x18, 0x00);
 if (VAR_7 != 0)
  goto fail;
 FUNC_8(&VAR_5->sc_mtx, 100);

 FUNC_4(VAR_5, VAR_2, &VAR_6);
 VAR_6 = (VAR_6 & 0x2) | VAR_3;
 FUNC_6(VAR_5, VAR_2, VAR_6);
 FUNC_8(&VAR_5->sc_mtx, 100);

 FUNC_4(VAR_5, VAR_2, &VAR_6);
 if (VAR_6 & VAR_3) {
  FUNC_0(VAR_5->sc_dev, "reset timeout\n");
  goto fail;
 }

 VAR_7 = FUNC_5(VAR_5, VAR_4);
 if (VAR_7)
  goto fail;
 FUNC_8(&VAR_5->sc_mtx, 100);

 VAR_7 = FUNC_1(VAR_5, VAR_1);
 if (VAR_7)
  goto fail;
 VAR_7 = FUNC_2(VAR_5, VAR_0);
 if (VAR_7)
  goto fail;
fail:
 return (VAR_7);
}
