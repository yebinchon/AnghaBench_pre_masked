
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint32_t ;
struct urtw_softc {scalar_t__ sc_epromtype; } ;
typedef int int16_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct urtw_softc*) ;
 scalar_t__ FUNC_2 (struct urtw_softc*,int ) ;
 scalar_t__ FUNC_3 (struct urtw_softc*,int*) ;
 scalar_t__ FUNC_4 (struct urtw_softc*,int*,int) ;
 scalar_t__ FUNC_5 (struct urtw_softc*,int ) ;
 int FUNC_6 (struct urtw_softc*,int ,int ) ;

__attribute__((used)) static usb_error_t
FUNC_7(struct urtw_softc *VAR_8, uint32_t VAR_9, uint32_t *VAR_10)
{

 int VAR_11, VAR_12;
 int16_t VAR_13[8], VAR_14, VAR_15[] = { 1, 1, 0 };
 usb_error_t VAR_16;


 *VAR_10 = 0;


 FUNC_6(VAR_8, VAR_1, VAR_3);
 FUNC_0(VAR_4);

 VAR_16 = FUNC_2(VAR_8, VAR_6);
 if (VAR_16 != 0)
  goto fail;
 VAR_16 = FUNC_1(VAR_8);
 if (VAR_16 != 0)
  goto fail;
 VAR_16 = FUNC_4(VAR_8, VAR_15, 3);
 if (VAR_16 != 0)
  goto fail;
 if (VAR_8->sc_epromtype == VAR_0) {
  VAR_11 = 8;
  VAR_13[0] = VAR_9 & (1 << 7);
  VAR_13[1] = VAR_9 & (1 << 6);
  VAR_13[2] = VAR_9 & (1 << 5);
  VAR_13[3] = VAR_9 & (1 << 4);
  VAR_13[4] = VAR_9 & (1 << 3);
  VAR_13[5] = VAR_9 & (1 << 2);
  VAR_13[6] = VAR_9 & (1 << 1);
  VAR_13[7] = VAR_9 & (1 << 0);
 } else {
  VAR_11=6;
  VAR_13[0] = VAR_9 & (1 << 5);
  VAR_13[1] = VAR_9 & (1 << 4);
  VAR_13[2] = VAR_9 & (1 << 3);
  VAR_13[3] = VAR_9 & (1 << 2);
  VAR_13[4] = VAR_9 & (1 << 1);
  VAR_13[5] = VAR_9 & (1 << 0);
 }
 VAR_16 = FUNC_4(VAR_8, VAR_13, VAR_11);
 if (VAR_16 != 0)
  goto fail;

 VAR_16 = FUNC_5(VAR_8, 0);
 if (VAR_16 != 0)
  goto fail;

 for (VAR_12 = 0; VAR_12 < 16; VAR_12++) {
  VAR_16 = FUNC_1(VAR_8);
  if (VAR_16 != 0)
   goto fail;
  VAR_16 = FUNC_3(VAR_8, &VAR_14);
  if (VAR_16 != 0)
   goto fail;

  (*VAR_10) |= (VAR_14 << (15 - VAR_12));
 }

 VAR_16 = FUNC_2(VAR_8, VAR_5);
 if (VAR_16 != 0)
  goto fail;
 VAR_16 = FUNC_1(VAR_8);
 if (VAR_16 != 0)
  goto fail;


 FUNC_6(VAR_8, VAR_1, VAR_2);
fail:
 return (VAR_16);

}
