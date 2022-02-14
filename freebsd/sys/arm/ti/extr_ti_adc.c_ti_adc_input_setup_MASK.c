
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct ti_adc_softc {int dummy; } ;
struct ti_adc_input {size_t stepconfig; size_t samples; } ;
typedef size_t int32_t ;


 size_t FUNC_0 (struct ti_adc_softc*,size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (struct ti_adc_softc*,size_t,size_t) ;
 int FUNC_2 (struct ti_adc_softc*) ;
 struct ti_adc_input* VAR_8 ;

__attribute__((used)) static void
FUNC_3(struct ti_adc_softc *VAR_9, int32_t VAR_10)
{
 struct ti_adc_input *VAR_11;
 uint32_t VAR_12, VAR_13;

 FUNC_2(VAR_9);

 VAR_11 = &VAR_8[VAR_10];
 VAR_12 = VAR_11->stepconfig;
 VAR_13 = FUNC_0(VAR_9, VAR_12);


 VAR_13 &= ~VAR_2;


 VAR_13 &= ~VAR_6;


 VAR_13 &= ~VAR_7;


 VAR_13 &= ~VAR_0;
 VAR_13 |= VAR_11->samples << VAR_1;


 VAR_13 &= ~VAR_3;
 VAR_13 |= VAR_10 << VAR_4;


 VAR_13 &= ~VAR_5;

 FUNC_1(VAR_9, VAR_12, VAR_13);
}
