
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_adc_softc {int sc_adc_nchannels; int* sc_adc_channels; } ;
struct ti_adc_input {int input; scalar_t__ samples; scalar_t__ enable; scalar_t__ value; struct ti_adc_softc* sc; } ;


 int FUNC_0 (struct ti_adc_softc*) ;
 int FUNC_1 (struct ti_adc_softc*) ;
 int FUNC_2 (struct ti_adc_softc*,int) ;
 struct ti_adc_input* VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct ti_adc_softc *VAR_1)
{
 int VAR_2, VAR_3;
 struct ti_adc_input *VAR_4;

 FUNC_0(VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_1->sc_adc_nchannels; VAR_3++) {
  VAR_2 = VAR_1->sc_adc_channels[VAR_3];
  VAR_4 = &VAR_0[VAR_2];
  VAR_4->sc = VAR_1;
  VAR_4->input = VAR_2;
  VAR_4->value = 0;
  VAR_4->enable = 0;
  VAR_4->samples = 0;
  FUNC_2(VAR_1, VAR_2);
 }
 FUNC_1(VAR_1);
}
