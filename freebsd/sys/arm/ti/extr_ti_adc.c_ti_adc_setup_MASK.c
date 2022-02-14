
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct ti_adc_softc {unsigned int sc_tsc_enabled; int sc_adc_nchannels; int* sc_adc_channels; } ;
struct TYPE_2__ {scalar_t__ enable; } ;


 unsigned int FUNC_0 (struct ti_adc_softc*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ti_adc_softc*,int ,unsigned int) ;
 int FUNC_2 (struct ti_adc_softc*) ;
 int FUNC_3 (struct ti_adc_softc*) ;
 int FUNC_4 (struct ti_adc_softc*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int
FUNC_5(struct ti_adc_softc *VAR_2)
{
 int VAR_3, VAR_4;
 uint32_t VAR_5;

 FUNC_2(VAR_2);


 VAR_5 = VAR_2->sc_tsc_enabled;
 for (VAR_4 = 0; VAR_4 < VAR_2->sc_adc_nchannels; VAR_4++) {
  VAR_3 = VAR_2->sc_adc_channels[VAR_4];
  if (VAR_1[VAR_3].enable)
   VAR_5 |= (1U << (VAR_3 + 1));
 }


 if (VAR_5 != 0) {
  FUNC_4(VAR_2);

  if (VAR_5 != FUNC_0(VAR_2, VAR_0))
   FUNC_1(VAR_2, VAR_0, VAR_5);
 } else
  FUNC_3(VAR_2);

 return (0);
}
