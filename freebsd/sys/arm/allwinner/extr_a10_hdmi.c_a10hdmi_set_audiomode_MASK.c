
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct videomode {int dot_clock; } ;
struct a10hdmi_softc {int has_audio; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct a10hdmi_softc*,int ) ;
 int FUNC_3 (struct a10hdmi_softc*,int ,int) ;
 struct a10hdmi_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_17, const struct videomode *VAR_18)
{
 struct a10hdmi_softc *VAR_19;
 uint32_t VAR_20;
 int VAR_21;

 VAR_19 = FUNC_4(VAR_17);


 FUNC_3(VAR_19, VAR_12, VAR_1);
 for (VAR_21 = VAR_9; VAR_21 > 0; VAR_21--) {
  VAR_20 = FUNC_2(VAR_19, VAR_12);
  if ((VAR_20 & VAR_1) == 0)
   break;
 }
 if (VAR_21 == 0) {
  FUNC_5(VAR_17, "timeout waiting for audio module\n");
  return;
 }

 if (!VAR_19->has_audio)
  return;


 FUNC_3(VAR_19, VAR_4, VAR_5);


 FUNC_3(VAR_19, VAR_14, FUNC_0(VAR_7));


 FUNC_3(VAR_19, VAR_16, VAR_6);


 FUNC_3(VAR_19, VAR_13,
     FUNC_1(VAR_18->dot_clock, VAR_8));
 FUNC_3(VAR_19, VAR_15, VAR_8);


 FUNC_3(VAR_19, VAR_10, VAR_2);
 FUNC_3(VAR_19, VAR_11, VAR_3);


 FUNC_3(VAR_19, VAR_12, VAR_0);
}
