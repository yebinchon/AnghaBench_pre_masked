
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct am335x_lcd_softc {int sc_fb_phys; int sc_fb_size; } ;


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
 int FUNC_0 (struct am335x_lcd_softc*,int ) ;
 int FUNC_1 (struct am335x_lcd_softc*,int ,int) ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_2(void *VAR_14)
{
 struct am335x_lcd_softc *VAR_15 = VAR_14;
 uint32_t VAR_16;

 VAR_16 = FUNC_0(VAR_15, VAR_7);
 FUNC_1(VAR_15, VAR_7, VAR_16);

 VAR_16 = FUNC_0(VAR_15, VAR_7);

 if (VAR_16 & VAR_5) {
  VAR_16 = FUNC_0(VAR_15, VAR_12);
  VAR_16 &= ~VAR_13;
  FUNC_1(VAR_15, VAR_12, VAR_16);

  VAR_16 = FUNC_0(VAR_15, VAR_12);
  VAR_16 |= VAR_13;
  FUNC_1(VAR_15, VAR_12, VAR_16);
  goto done;
 }

 if (VAR_16 & VAR_4) {
  VAR_16 = FUNC_0(VAR_15, VAR_12);
  VAR_16 &= ~VAR_13;
  FUNC_1(VAR_15, VAR_12, VAR_16);

  VAR_16 = FUNC_0(VAR_15, VAR_12);
  VAR_16 |= VAR_13;
  FUNC_1(VAR_15, VAR_12, VAR_16);
  goto done;
 }

 if (VAR_16 & VAR_1) {
  FUNC_1(VAR_15, VAR_8, VAR_15->sc_fb_phys);
  FUNC_1(VAR_15, VAR_9, VAR_15->sc_fb_phys + VAR_15->sc_fb_size - 1);
  VAR_16 &= ~VAR_1;
 }

 if (VAR_16 & VAR_2) {
  FUNC_1(VAR_15, VAR_10, VAR_15->sc_fb_phys);
  FUNC_1(VAR_15, VAR_11, VAR_15->sc_fb_phys + VAR_15->sc_fb_size - 1);
  VAR_16 &= ~VAR_2;
 }

 if (VAR_16 & VAR_3) {

 }

 if (VAR_16 & VAR_0) {

 }

done:
 FUNC_1(VAR_15, VAR_6, 0);

 VAR_16 = FUNC_0(VAR_15, VAR_6);
}
