
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_adc_softc {int dummy; } ;
struct ti_adc_input {scalar_t__ enable; scalar_t__ value; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ti_adc_softc*,int ) ;
 int FUNC_1 (struct ti_adc_softc*) ;
 struct ti_adc_input* VAR_6 ;

__attribute__((used)) static void
FUNC_2(struct ti_adc_softc *VAR_7)
{
 int VAR_8, VAR_9;
 struct ti_adc_input *VAR_10;
 uint32_t VAR_11;

 FUNC_1(VAR_7);


 VAR_8 = FUNC_0(VAR_7, VAR_0) & VAR_2;
 while (VAR_8 > 0) {
  VAR_11 = FUNC_0(VAR_7, VAR_1);
  VAR_9 = (VAR_11 & VAR_4) >> VAR_5;
  VAR_10 = &VAR_6[VAR_9];
  if (VAR_10->enable == 0)
   VAR_10->value = 0;
  else
   VAR_10->value = (int32_t)(VAR_11 & VAR_3);
  VAR_8 = FUNC_0(VAR_7, VAR_0) & VAR_2;
 }
}
