
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct hwrm_fw_get_time_output {int zone; int millisecond; int second; int minute; int hour; int day; int month; int year; } ;
struct hwrm_fw_get_time_input {int member_0; } ;
struct TYPE_2__ {scalar_t__ idi_vaddr; } ;
struct bnxt_softc {TYPE_1__ hwrm_cmd_resp; } ;
typedef int req ;


 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (struct bnxt_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct bnxt_softc*,struct hwrm_fw_get_time_input*,int) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_fw_get_time_input*,int ) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct bnxt_softc *VAR_1, uint16_t *VAR_2, uint8_t *VAR_3,
    uint8_t *VAR_4, uint8_t *VAR_5, uint8_t *VAR_6, uint8_t *VAR_7,
    uint16_t *VAR_8, uint16_t *VAR_9)
{
 struct hwrm_fw_get_time_input VAR_10 = {0};
 struct hwrm_fw_get_time_output *VAR_11 =
     (void *)VAR_1->hwrm_cmd_resp.idi_vaddr;
 int VAR_12;

 FUNC_3(VAR_1, &VAR_10, VAR_0);

 FUNC_0(VAR_1);
 VAR_12 = FUNC_2(VAR_1, &VAR_10, sizeof(VAR_10));
 if (VAR_12)
  goto exit;

 if (VAR_2)
  *VAR_2 = FUNC_4(VAR_11->year);
 if (VAR_3)
  *VAR_3 = VAR_11->month;
 if (VAR_4)
  *VAR_4 = VAR_11->day;
 if (VAR_5)
  *VAR_5 = VAR_11->hour;
 if (VAR_6)
  *VAR_6 = VAR_11->minute;
 if (VAR_7)
  *VAR_7 = VAR_11->second;
 if (VAR_8)
  *VAR_8 = FUNC_4(VAR_11->millisecond);
 if (VAR_9)
  *VAR_9 = FUNC_4(VAR_11->zone);

exit:
 FUNC_1(VAR_1);
 return VAR_12;
}
