
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda19988_softc {int sc_cec_addr; int sc_edid_len; int sc_edid; int sc_addr; int sc_dev; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct tda19988_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct tda19988_softc*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_4)
{
 struct tda19988_softc *VAR_5;
 phandle_t VAR_6;

 VAR_5 = FUNC_2(VAR_4);

 VAR_5->sc_dev = VAR_4;
 VAR_5->sc_addr = FUNC_4(VAR_4);
 VAR_5->sc_cec_addr = (0x34 << 1);
 VAR_5->sc_edid = FUNC_5(VAR_0, VAR_1, VAR_2 | VAR_3);
 VAR_5->sc_edid_len = VAR_0;

 FUNC_3(VAR_4, "NXP TDA19988 HDMI transmitter");

 VAR_6 = FUNC_6(VAR_4);
 FUNC_0(FUNC_1(VAR_6), VAR_4);

 FUNC_7(VAR_5);

 return (0);
}
