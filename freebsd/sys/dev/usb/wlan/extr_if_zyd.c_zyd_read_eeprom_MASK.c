
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct zyd_softc {int* sc_pwrcal; int* sc_pwrint; int* sc_ofdm36_cal; int* sc_ofdm48_cal; int* sc_ofdm54_cal; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct zyd_softc*,scalar_t__,int*) ;

__attribute__((used)) static int
FUNC_1(struct zyd_softc *VAR_5)
{
 uint16_t VAR_6;
 int VAR_7, VAR_8;


 for (VAR_8 = 0; VAR_8 < 7; VAR_8++) {
  FUNC_0(VAR_5, VAR_3 + VAR_8, &VAR_6);
  VAR_5->sc_pwrcal[VAR_8 * 2] = VAR_6 >> 8;
  VAR_5->sc_pwrcal[VAR_8 * 2 + 1] = VAR_6 & 0xff;
  FUNC_0(VAR_5, VAR_4 + VAR_8, &VAR_6);
  VAR_5->sc_pwrint[VAR_8 * 2] = VAR_6 >> 8;
  VAR_5->sc_pwrint[VAR_8 * 2 + 1] = VAR_6 & 0xff;
  FUNC_0(VAR_5, VAR_0 + VAR_8, &VAR_6);
  VAR_5->sc_ofdm36_cal[VAR_8 * 2] = VAR_6 >> 8;
  VAR_5->sc_ofdm36_cal[VAR_8 * 2 + 1] = VAR_6 & 0xff;
  FUNC_0(VAR_5, VAR_1 + VAR_8, &VAR_6);
  VAR_5->sc_ofdm48_cal[VAR_8 * 2] = VAR_6 >> 8;
  VAR_5->sc_ofdm48_cal[VAR_8 * 2 + 1] = VAR_6 & 0xff;
  FUNC_0(VAR_5, VAR_2 + VAR_8, &VAR_6);
  VAR_5->sc_ofdm54_cal[VAR_8 * 2] = VAR_6 >> 8;
  VAR_5->sc_ofdm54_cal[VAR_8 * 2 + 1] = VAR_6 & 0xff;
 }
fail:
 return (VAR_7);
}
