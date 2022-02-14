
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_adc_softc {int sc_xp_inp; int sc_xn_inp; int sc_yp_inp; int sc_yn_inp; int sc_dev; int sc_yn_bit; int sc_yp_bit; int sc_xn_bit; int sc_xp_bit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int
FUNC_1(struct ti_adc_softc *VAR_4, int *VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8, VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_8 = VAR_5[VAR_7] & 0xf;
  VAR_9 = (VAR_5[VAR_7] >> 4) & 0xf;
  switch (VAR_8) {
  case 130:
   VAR_4->sc_xp_bit = VAR_1;
   VAR_4->sc_xp_inp = VAR_9;
   break;
  case 131:
   VAR_4->sc_xn_bit = VAR_0;
   VAR_4->sc_xn_inp = VAR_9;
   break;
  case 128:
   VAR_4->sc_yp_bit = VAR_3;
   VAR_4->sc_yp_inp = VAR_9;
   break;
  case 129:
   VAR_4->sc_yn_bit = VAR_2;
   VAR_4->sc_yn_inp = VAR_9;
   break;
  default:
   FUNC_0(VAR_4->sc_dev, "Invalid wire config\n");
   return (-1);
  }
 }
 return (0);
}
