
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct adc_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct adc_softc*,int ) ;
 int FUNC_1 (struct adc_softc*,int ,int) ;
 struct adc_softc* VAR_3 ;

uint32_t
FUNC_2(int VAR_4)
{
 struct adc_softc *VAR_5;
 int VAR_6;

 VAR_5 = VAR_3;
 if (VAR_5 == ((void*)0))
  return (1);

 VAR_6 = FUNC_0(VAR_5, VAR_0);
 VAR_6 &= ~(VAR_1 << VAR_2);
 VAR_6 |= (VAR_4 << VAR_2);
 FUNC_1(VAR_5, VAR_0, VAR_6);

 return (0);
}
