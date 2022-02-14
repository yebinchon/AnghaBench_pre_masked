
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint32_t ;
struct urtw_softc {int sc_txpwr_cck_base; int sc_txpwr_ofdm_base; int* sc_txpwr_cck; int* sc_txpwr_ofdm; int sc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct urtw_softc*,int,int*) ;

__attribute__((used)) static usb_error_t
FUNC_1(struct urtw_softc *VAR_5)
{
 int VAR_6, VAR_7;
 uint32_t VAR_8;
 usb_error_t VAR_9;

 VAR_9 = FUNC_0(VAR_5, VAR_3, &VAR_8);
 if (VAR_9 != 0)
  goto fail;
 VAR_5->sc_txpwr_cck_base = VAR_8 & 0xf;
 VAR_5->sc_txpwr_ofdm_base = (VAR_8 >> 4) & 0xf;

 for (VAR_6 = 1, VAR_7 = 0; VAR_6 < 6; VAR_6 += 2, VAR_7++) {
  VAR_9 = FUNC_0(VAR_5, VAR_0 + VAR_7, &VAR_8);
  if (VAR_9 != 0)
   goto fail;
  VAR_5->sc_txpwr_cck[VAR_6] = VAR_8 & 0xf;
  VAR_5->sc_txpwr_cck[VAR_6 + 1] = (VAR_8 & 0xf00) >> 8;
  VAR_5->sc_txpwr_ofdm[VAR_6] = (VAR_8 & 0xf0) >> 4;
  VAR_5->sc_txpwr_ofdm[VAR_6 + 1] = (VAR_8 & 0xf000) >> 12;
 }
 for (VAR_6 = 1, VAR_7 = 0; VAR_6 < 4; VAR_6 += 2, VAR_7++) {
  VAR_9 = FUNC_0(VAR_5, VAR_1 + VAR_7, &VAR_8);
  if (VAR_9 != 0)
   goto fail;
  VAR_5->sc_txpwr_cck[VAR_6 + 6] = VAR_8 & 0xf;
  VAR_5->sc_txpwr_cck[VAR_6 + 6 + 1] = (VAR_8 & 0xf00) >> 8;
  VAR_5->sc_txpwr_ofdm[VAR_6 + 6] = (VAR_8 & 0xf0) >> 4;
  VAR_5->sc_txpwr_ofdm[VAR_6 + 6 + 1] = (VAR_8 & 0xf000) >> 12;
 }
 if (VAR_5->sc_flags & VAR_4) {
  VAR_9 = FUNC_0(VAR_5, VAR_2, &VAR_8);
  if (VAR_9 != 0)
   goto fail;
  VAR_5->sc_txpwr_cck[1 + 6 + 4] = VAR_8 & 0xf;
  VAR_5->sc_txpwr_ofdm[1 + 6 + 4] = (VAR_8 & 0xf0) >> 4;
  VAR_9 = FUNC_0(VAR_5, 0x0a, &VAR_8);
  if (VAR_9 != 0)
   goto fail;
  VAR_5->sc_txpwr_cck[2 + 6 + 4] = VAR_8 & 0xf;
  VAR_5->sc_txpwr_ofdm[2 + 6 + 4] = (VAR_8 & 0xf0) >> 4;
  VAR_9 = FUNC_0(VAR_5, 0x1c, &VAR_8);
  if (VAR_9 != 0)
   goto fail;
  VAR_5->sc_txpwr_cck[3 + 6 + 4] = VAR_8 & 0xf;
  VAR_5->sc_txpwr_cck[3 + 6 + 4 + 1] = (VAR_8 & 0xf00) >> 8;
  VAR_5->sc_txpwr_ofdm[3 + 6 + 4] = (VAR_8 & 0xf0) >> 4;
  VAR_5->sc_txpwr_ofdm[3 + 6 + 4 + 1] = (VAR_8 & 0xf000) >> 12;
 } else {
  for (VAR_6 = 1, VAR_7 = 0; VAR_6 < 4; VAR_6 += 2, VAR_7++) {
   VAR_9 = FUNC_0(VAR_5, VAR_2 + VAR_7,
       &VAR_8);
   if (VAR_9 != 0)
    goto fail;
   VAR_5->sc_txpwr_cck[VAR_6 + 6 + 4] = VAR_8 & 0xf;
   VAR_5->sc_txpwr_cck[VAR_6 + 6 + 4 + 1] = (VAR_8 & 0xf00) >> 8;
   VAR_5->sc_txpwr_ofdm[VAR_6 + 6 + 4] = (VAR_8 & 0xf0) >> 4;
   VAR_5->sc_txpwr_ofdm[VAR_6 + 6 + 4 + 1] = (VAR_8 & 0xf000) >> 12;
  }
 }
fail:
 return (VAR_9);
}
