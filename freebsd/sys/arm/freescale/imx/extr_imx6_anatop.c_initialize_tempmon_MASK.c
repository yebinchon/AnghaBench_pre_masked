
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct imx6_anatop_softc {int temp_room_cnt; int temp_high_cnt; int temp_high_val; int temp_throttle_val; int temp_throttle_trigger_cnt; scalar_t__ temp_last_cnt; int temp_throttle_delay; int temp_throttle_callout; void* temp_throttle_reset_cnt; } ;


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
 int FUNC_0 (int *,int ,int ,char*,int,struct imx6_anatop_softc*,int ,int ,char*,char*) ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int,int ,int ,struct imx6_anatop_softc*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_6 (struct imx6_anatop_softc*,int) ;
 int FUNC_7 (struct imx6_anatop_softc*) ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_8(struct imx6_anatop_softc *VAR_14)
{
 uint32_t VAR_15;





 VAR_15 = FUNC_4(VAR_3);
 VAR_14->temp_room_cnt = (VAR_15 & 0xFFF00000) >> 20;
 VAR_14->temp_high_cnt = (VAR_15 & 0x000FFF00) >> 8;
 VAR_14->temp_high_val = (VAR_15 & 0x000000FF) * 10;





 VAR_14->temp_throttle_val = VAR_14->temp_high_val - 100;
 VAR_14->temp_throttle_trigger_cnt =
     FUNC_6(VAR_14, VAR_14->temp_throttle_val);
 VAR_14->temp_throttle_reset_cnt =
     FUNC_6(VAR_14, VAR_14->temp_throttle_val - 50);





 FUNC_5(VAR_7, 0x0800);
 FUNC_5(VAR_4,
     (VAR_14->temp_throttle_trigger_cnt <<
     VAR_5) |
     VAR_6);







 while (VAR_14->temp_last_cnt == 0)
  FUNC_7(VAR_14);
 VAR_14->temp_throttle_delay = 100 * VAR_9;
 FUNC_2(&VAR_14->temp_throttle_callout, 0);
 FUNC_3(&VAR_14->temp_throttle_callout, VAR_14->temp_throttle_delay,
     0, VAR_13, VAR_14, 0);

 FUNC_0(((void*)0), FUNC_1(VAR_10),
     VAR_8, "temperature", VAR_2 | VAR_0, VAR_14, 0,
     VAR_11, "IK", "Current die temperature");
 FUNC_0(((void*)0), FUNC_1(VAR_10),
     VAR_8, "throttle_temperature", VAR_2 | VAR_1, VAR_14,
     0, VAR_12, "IK",
     "Throttle CPU when exceeding this temperature");
}
