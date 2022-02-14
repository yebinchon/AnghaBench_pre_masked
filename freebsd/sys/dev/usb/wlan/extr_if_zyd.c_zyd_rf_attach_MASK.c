
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct zyd_rf {int update_pwr; int width; int set_channel; int switch_radio; int init; int bandedge6; struct zyd_softc* rf_sc; } ;
struct zyd_softc {int sc_dev; int sc_macrev; struct zyd_rf sc_rf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static int
FUNC_2(struct zyd_softc *VAR_23, uint8_t VAR_24)
{
 struct zyd_rf *VAR_25 = &VAR_23->sc_rf;

 VAR_25->rf_sc = VAR_23;
 VAR_25->update_pwr = 1;

 switch (VAR_24) {
 case 128:
  VAR_25->init = VAR_20;
  VAR_25->switch_radio = VAR_22;
  VAR_25->set_channel = VAR_21;
  VAR_25->width = 24;
  break;
 case 134:
 case 133:
  if (VAR_23->sc_macrev == VAR_1) {
   VAR_25->init = VAR_7;
   VAR_25->set_channel = VAR_9;
  } else {
   VAR_25->init = VAR_6;
   VAR_25->set_channel = VAR_8;
  }
  VAR_25->switch_radio = VAR_10;
  VAR_25->bandedge6 = VAR_5;
  VAR_25->width = 24;
  break;
 case 132:
  VAR_25->init = VAR_11;
  VAR_25->switch_radio = VAR_13;
  VAR_25->set_channel = VAR_12;
  VAR_25->width = 24;
  break;
 case 135:
  VAR_25->init = VAR_2;
  VAR_25->switch_radio = VAR_4;
  VAR_25->set_channel = VAR_3;
  VAR_25->width = 24;
  break;
 case 130:
 case 131:
  VAR_25->init = VAR_14;
  VAR_25->switch_radio = VAR_16;
  VAR_25->set_channel = VAR_15;
  VAR_25->width = 24;
  VAR_25->update_pwr = 0;
  break;
 case 129:
  VAR_25->init = VAR_17;
  VAR_25->switch_radio = VAR_19;
  VAR_25->set_channel = VAR_18;
  VAR_25->width = 18;
  break;
 default:
  FUNC_0(VAR_23->sc_dev,
      "sorry, radio \"%s\" is not supported yet\n",
      FUNC_1(VAR_24));
  return (VAR_0);
 }
 return (0);
}
