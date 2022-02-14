
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_adc_softc {int sc_adc_nchannels; int* sc_adc_channels; } ;
struct TYPE_2__ {scalar_t__ enable; } ;


 int FUNC_0 (struct ti_adc_softc*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct ti_adc_softc *VAR_1)
{
 int VAR_2, VAR_3;

 FUNC_0(VAR_1);


 for (VAR_3 = 0; VAR_3 < VAR_1->sc_adc_nchannels; VAR_3++) {
  VAR_2 = VAR_1->sc_adc_channels[VAR_3];
  VAR_0[VAR_2].enable = 0;
 }
}
