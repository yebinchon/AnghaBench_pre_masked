
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
struct urtw_softc {int* sc_txpwr_cck; int* sc_txpwr_ofdm; int sc_flags; int sc_mtx; scalar_t__ sc_txpwr_ofdm_base; scalar_t__ sc_txpwr_cck_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct urtw_softc*,int,int) ;
 int FUNC_1 (struct urtw_softc*,int,int) ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_2 (struct urtw_softc*,int ,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static usb_error_t
FUNC_4(struct urtw_softc *VAR_6, int VAR_7)
{
 int VAR_8;
 uint8_t *VAR_9;
 uint8_t VAR_10 = 15;
 uint8_t VAR_11 = VAR_6->sc_txpwr_cck[VAR_7] & 0xff;
 uint8_t VAR_12 = VAR_6->sc_txpwr_ofdm[VAR_7] & 0xff;
 usb_error_t VAR_13;


 VAR_11 = (VAR_11 > VAR_10) ?
     ((VAR_6->sc_flags & VAR_0) ? VAR_10 : 22) :
     (VAR_11 + ((VAR_6->sc_flags & VAR_0) ? 0 : 7));
 VAR_11 += VAR_6->sc_txpwr_cck_base;
 VAR_11 = (VAR_11 > 35) ? 35 : VAR_11;
 VAR_9 = (VAR_7 == 14) ? VAR_5 :
     VAR_4;

 if (VAR_6->sc_flags & VAR_0)
  VAR_9 += (VAR_11 <= 6) ? 0 :
      ((VAR_11 <= 11) ? 8 : 16);
 else
  VAR_9 += (VAR_11 <= 5) ? 0 :
      ((VAR_11 <= 11) ? 8 : ((VAR_11 <= 17) ? 16 : 24));

 for (VAR_8 = 0; VAR_8 < 8; VAR_8++)
  FUNC_0(VAR_6, 0x44 + VAR_8, VAR_9[VAR_8]);

 FUNC_2(VAR_6, VAR_1,
     VAR_3[VAR_11] << 1);
 FUNC_3(&VAR_6->sc_mtx, 1);


 VAR_12 = (VAR_12 > 15) ?
     ((VAR_6->sc_flags & VAR_0) ? 17 : 25) :
     (VAR_12 + ((VAR_6->sc_flags & VAR_0) ? 2 : 10));
 VAR_12 += VAR_6->sc_txpwr_ofdm_base;
 VAR_12 = (VAR_12 > 35) ? 35 : VAR_12;

 FUNC_2(VAR_6, VAR_2,
     VAR_3[VAR_12] << 1);

 if (VAR_6->sc_flags & VAR_0) {
  if (VAR_12 <= 11) {
   FUNC_1(VAR_6, 0x87, 0x60);
   FUNC_1(VAR_6, 0x89, 0x60);
  } else {
   FUNC_1(VAR_6, 0x87, 0x5c);
   FUNC_1(VAR_6, 0x89, 0x5c);
  }
 } else {
  if (VAR_12 <= 11) {
   FUNC_1(VAR_6, 0x87, 0x5c);
   FUNC_1(VAR_6, 0x89, 0x5c);
  } else if (VAR_12 <= 17) {
   FUNC_1(VAR_6, 0x87, 0x54);
   FUNC_1(VAR_6, 0x89, 0x54);
  } else {
   FUNC_1(VAR_6, 0x87, 0x50);
   FUNC_1(VAR_6, 0x89, 0x50);
  }
 }
 FUNC_3(&VAR_6->sc_mtx, 1);
fail:
 return (VAR_13);
}
