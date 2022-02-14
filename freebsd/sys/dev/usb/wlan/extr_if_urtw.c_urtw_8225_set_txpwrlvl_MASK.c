
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
struct urtw_softc {int* sc_txpwr_cck; int* sc_txpwr_ofdm; int sc_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct urtw_softc*,int ) ;
 int FUNC_1 (struct urtw_softc*,int,int) ;
 int FUNC_2 (struct urtw_softc*,int,int) ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int FUNC_3 (struct urtw_softc*,int ,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static usb_error_t
FUNC_5(struct urtw_softc *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 uint8_t *VAR_12;
 uint8_t VAR_13, VAR_14, VAR_15;
 uint8_t VAR_16 = VAR_7->sc_txpwr_cck[VAR_8] & 0xff;
 uint8_t VAR_17 = VAR_7->sc_txpwr_ofdm[VAR_8] & 0xff;
 usb_error_t VAR_18;

 VAR_13 = 11;
 VAR_15 = 25;
 VAR_14 = 10;


 VAR_16 = (VAR_16 > VAR_13) ? VAR_13 : VAR_16;
 VAR_10 = VAR_16 % 6;
 VAR_11 = VAR_16 / 6;
 VAR_12 = (VAR_8 == 14) ? VAR_5 :
     VAR_4;

 FUNC_3(VAR_7, VAR_1,
     VAR_3[VAR_11] >> 1);
 for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {
  FUNC_1(VAR_7, 0x44 + VAR_9,
      VAR_12[VAR_10 * 8 + VAR_9]);
 }
 FUNC_4(&VAR_7->sc_mtx, 1);


 VAR_17 = (VAR_17 > (VAR_15 - VAR_14)) ?
     VAR_15 : VAR_17 + VAR_14;
 VAR_17 = (VAR_17 > 35) ? 35 : VAR_17;

 VAR_10 = VAR_17 % 6;
 VAR_11 = VAR_17 / 6;

 VAR_18 = FUNC_0(VAR_7, VAR_0);
 if (VAR_18)
  goto fail;
 FUNC_2(VAR_7, 2, 0x42);
 FUNC_2(VAR_7, 6, 0);
 FUNC_2(VAR_7, 8, 0);

 FUNC_3(VAR_7, VAR_2,
     VAR_3[VAR_11] >> 1);
 FUNC_2(VAR_7, 0x5, VAR_6[VAR_10]);
 FUNC_2(VAR_7, 0x7, VAR_6[VAR_10]);
 FUNC_4(&VAR_7->sc_mtx, 1);
fail:
 return (VAR_18);
}
