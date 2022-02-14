
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_adc_softc {int sc_coord_readouts; int sc_x; int sc_y; int sc_dev; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ti_adc_softc*,int ) ;
 int FUNC_1 (struct ti_adc_softc*) ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int*,int,int,int *) ;
 int FUNC_4 (struct ti_adc_softc*) ;

__attribute__((used)) static void
FUNC_5(struct ti_adc_softc *VAR_5)
{
 int VAR_6;
 uint32_t VAR_7[16];
 uint32_t VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12;

 FUNC_1(VAR_5);


 VAR_6 = FUNC_0(VAR_5, VAR_0) & VAR_2;
 if (VAR_6 == 0)
  return;

 VAR_10 = 0;
 while (VAR_6 > 0) {
  VAR_7[VAR_10++] = FUNC_0(VAR_5, VAR_1) & VAR_3;
  VAR_6 = FUNC_0(VAR_5, VAR_0) & VAR_2;
 }

 if (VAR_5->sc_coord_readouts > 3) {
  VAR_11 = 1;
  VAR_12 = VAR_5->sc_coord_readouts - 1;
  FUNC_3(VAR_7, VAR_5->sc_coord_readouts,
   sizeof(VAR_7[0]), &VAR_4);
  FUNC_3(&VAR_7[VAR_5->sc_coord_readouts + 2],
   VAR_5->sc_coord_readouts,
   sizeof(VAR_7[0]), &VAR_4);
 }
 else {
  VAR_11 = 0;
  VAR_12 = VAR_5->sc_coord_readouts;
 }

 VAR_8 = VAR_9 = 0;
 for (VAR_10 = VAR_11; VAR_10 < VAR_12; VAR_10++)
  VAR_9 += VAR_7[VAR_10];
 VAR_9 /= (VAR_12 - VAR_11);

 for (VAR_10 = VAR_5->sc_coord_readouts + 2 + VAR_11; VAR_10 < VAR_5->sc_coord_readouts + 2 + VAR_12; VAR_10++)
  VAR_8 += VAR_7[VAR_10];
 VAR_8 /= (VAR_12 - VAR_11);
}
