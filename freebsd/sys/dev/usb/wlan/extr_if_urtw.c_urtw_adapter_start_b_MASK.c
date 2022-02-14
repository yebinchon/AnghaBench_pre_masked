
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
struct urtw_softc {scalar_t__ (* sc_rf_init ) (struct urtw_softc*) ;} ;


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
 scalar_t__ FUNC_0 (struct urtw_softc*) ;
 scalar_t__ FUNC_1 (struct urtw_softc*) ;
 scalar_t__ FUNC_2 (struct urtw_softc*) ;
 int FUNC_3 (struct urtw_softc*,int,int*) ;
 scalar_t__ FUNC_4 (struct urtw_softc*,int ) ;
 int FUNC_5 (struct urtw_softc*,int,int) ;
 int FUNC_6 (struct urtw_softc*,int ,int) ;
 int FUNC_7 (struct urtw_softc*,int,int) ;
 scalar_t__ FUNC_8 (struct urtw_softc*,int,int) ;

__attribute__((used)) static usb_error_t
FUNC_9(struct urtw_softc *VAR_15)
{
 uint8_t VAR_16;
 usb_error_t VAR_17;

 VAR_17 = FUNC_4(VAR_15, VAR_12);
 if (VAR_17)
  goto fail;

 FUNC_3(VAR_15, VAR_9, &VAR_16);
 FUNC_7(VAR_15, VAR_9,
     VAR_16 | VAR_10 | VAR_11);
 FUNC_6(VAR_15, VAR_4, VAR_0);
 FUNC_6(VAR_15, VAR_3, VAR_2);
 FUNC_7(VAR_15, VAR_5, VAR_1);

 FUNC_7(VAR_15, 0x61, 0x10);
 FUNC_3(VAR_15, 0x62, &VAR_16);
 FUNC_7(VAR_15, 0x62, VAR_16 & ~(1 << 5));
 FUNC_7(VAR_15, 0x62, VAR_16 | (1 << 5));

 FUNC_3(VAR_15, VAR_9, &VAR_16);
 VAR_16 &= ~VAR_10;
 FUNC_7(VAR_15, VAR_9, VAR_16);

 VAR_17 = FUNC_4(VAR_15, VAR_13);
 if (VAR_17)
  goto fail;

 VAR_17 = FUNC_1(VAR_15);
 if (VAR_17)
  goto fail;

 VAR_17 = VAR_15->sc_rf_init(VAR_15);
 if (VAR_17 != 0)
  goto fail;
 FUNC_7(VAR_15, VAR_6, VAR_7 | VAR_8);


 VAR_17 = FUNC_2(VAR_15);
 if (VAR_17)
  goto fail;

 VAR_17 = FUNC_8(VAR_15, 0x41, 0xf4);
 if (VAR_17)
  goto fail;
 VAR_17 = FUNC_8(VAR_15, 0x40, 0x00);
 if (VAR_17)
  goto fail;
 VAR_17 = FUNC_8(VAR_15, 0x42, 0x00);
 if (VAR_17)
  goto fail;
 VAR_17 = FUNC_8(VAR_15, 0x42, 0x01);
 if (VAR_17)
  goto fail;
 VAR_17 = FUNC_8(VAR_15, 0x40, 0x0f);
 if (VAR_17)
  goto fail;
 VAR_17 = FUNC_8(VAR_15, 0x42, 0x00);
 if (VAR_17)
  goto fail;
 VAR_17 = FUNC_8(VAR_15, 0x42, 0x01);
 if (VAR_17)
  goto fail;

 FUNC_3(VAR_15, 0xdb, &VAR_16);
 FUNC_7(VAR_15, 0xdb, VAR_16 | (1 << 2));
 FUNC_5(VAR_15, 0x372, 0x59fa);
 FUNC_5(VAR_15, 0x374, 0x59d2);
 FUNC_5(VAR_15, 0x376, 0x59d2);
 FUNC_5(VAR_15, 0x378, 0x19fa);
 FUNC_5(VAR_15, 0x37a, 0x19fa);
 FUNC_5(VAR_15, 0x37c, 0x00d0);
 FUNC_7(VAR_15, 0x61, 0);

 FUNC_7(VAR_15, 0x180, 0x0f);
 FUNC_7(VAR_15, 0x183, 0x03);
 FUNC_7(VAR_15, 0xda, 0x10);
 FUNC_7(VAR_15, 0x24d, 0x08);
 FUNC_6(VAR_15, VAR_14, 0x0600321b);

 FUNC_5(VAR_15, 0x1ec, 0x800);
fail:
 return (VAR_17);
}
