
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
struct urtw_softc {int* sc_txpwr_cck; int* sc_txpwr_ofdm; int sc_mtx; scalar_t__ sc_txpwr_ofdm_base; scalar_t__ sc_txpwr_cck_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct urtw_softc*,int ) ;
 int FUNC_1 (struct urtw_softc*,int,int) ;
 int FUNC_2 (struct urtw_softc*,int,int) ;
 int * VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_3 (struct urtw_softc*,int ,int ) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static usb_error_t
FUNC_5(struct urtw_softc *VAR_6, int VAR_7)
{
 int VAR_8;
 uint8_t *VAR_9;
 uint8_t VAR_10 = 15, VAR_11 = 25, VAR_12 = 10;
 uint8_t VAR_13 = VAR_6->sc_txpwr_cck[VAR_7] & 0xff;
 uint8_t VAR_14 = VAR_6->sc_txpwr_ofdm[VAR_7] & 0xff;
 usb_error_t VAR_15;


 VAR_13 = (VAR_13 > VAR_10) ? VAR_10 : VAR_13;
 VAR_13 += VAR_6->sc_txpwr_cck_base;
 VAR_13 = (VAR_13 > 35) ? 35 : VAR_13;
 VAR_9 = (VAR_7 == 14) ? VAR_5 :
     VAR_4;

 for (VAR_8 = 0; VAR_8 < 8; VAR_8++)
  FUNC_1(VAR_6, 0x44 + VAR_8, VAR_9[VAR_8]);

 FUNC_3(VAR_6, VAR_1,
     VAR_3[VAR_13]);
 FUNC_4(&VAR_6->sc_mtx, 1);


 VAR_14 = (VAR_14 > (VAR_11 - VAR_12)) ?
  VAR_11 : VAR_14 + VAR_12;
 VAR_14 += VAR_6->sc_txpwr_ofdm_base;
 VAR_14 = (VAR_14 > 35) ? 35 : VAR_14;

 VAR_15 = FUNC_0(VAR_6, VAR_0);
 if (VAR_15)
  goto fail;

 FUNC_2(VAR_6, 2, 0x42);
 FUNC_2(VAR_6, 5, 0x0);
 FUNC_2(VAR_6, 6, 0x40);
 FUNC_2(VAR_6, 7, 0x0);
 FUNC_2(VAR_6, 8, 0x40);

 FUNC_3(VAR_6, VAR_2,
     VAR_3[VAR_14]);
 FUNC_4(&VAR_6->sc_mtx, 1);
fail:
 return (VAR_15);
}
