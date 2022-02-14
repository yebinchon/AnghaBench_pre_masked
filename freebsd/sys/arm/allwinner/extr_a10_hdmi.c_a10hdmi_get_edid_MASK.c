
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct a10hdmi_softc {scalar_t__ has_audio; scalar_t__ has_hdmi; int * edid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int VAR_11 ;
 int FUNC_1 (struct a10hdmi_softc*,int ) ;
 int FUNC_2 (struct a10hdmi_softc*,int ,int) ;
 int VAR_12 ;
 int FUNC_3 (struct a10hdmi_softc*,int ,int *) ;
 int FUNC_4 (struct a10hdmi_softc*,scalar_t__*,scalar_t__*) ;
 struct a10hdmi_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_13, uint8_t **VAR_14, uint32_t *VAR_15)
{
 struct a10hdmi_softc *VAR_16;
 int VAR_17, VAR_18;

 VAR_16 = FUNC_5(VAR_13);
 VAR_18 = VAR_10;

 while (--VAR_18 > 0) {

  FUNC_2(VAR_16, VAR_7, 0);
  FUNC_2(VAR_16, VAR_5, VAR_0 | VAR_1);
  FUNC_0(VAR_12);
  if (FUNC_1(VAR_16, VAR_5) & VAR_1) {
   FUNC_6(VAR_13, "DDC software reset failed\n");
   return (VAR_11);
  }


  FUNC_2(VAR_16, VAR_2, VAR_3 | VAR_4);


  FUNC_2(VAR_16, VAR_6,
      VAR_8 | VAR_9);


  VAR_17 = FUNC_3(VAR_16, 0, VAR_16->edid);
  if (VAR_17 == 0) {
   *VAR_14 = VAR_16->edid;
   *VAR_15 = sizeof(VAR_16->edid);
   break;
  }
 }

 if (VAR_17 == 0)
  FUNC_4(VAR_16, &VAR_16->has_hdmi, &VAR_16->has_audio);
 else
  VAR_16->has_hdmi = VAR_16->has_audio = 0;

 return (VAR_17);
}
