
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int uint16_t ;
struct hwrm_fw_set_time_input {void* zone; void* millisecond; void* second; void* minute; void* hour; void* day; void* month; void* year; int member_0; } ;
struct bnxt_softc {int dummy; } ;
typedef int req ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt_softc*,struct hwrm_fw_set_time_input*,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct bnxt_softc*,struct hwrm_fw_set_time_input*,int) ;

int
FUNC_3(struct bnxt_softc *VAR_1, uint16_t VAR_2, uint8_t VAR_3,
    uint8_t VAR_4, uint8_t VAR_5, uint8_t VAR_6, uint8_t VAR_7,
    uint16_t VAR_8, uint16_t VAR_9)
{
 struct hwrm_fw_set_time_input VAR_10 = {0};

 FUNC_0(VAR_1, &VAR_10, VAR_0);

 VAR_10.year = FUNC_1(VAR_2);
 VAR_10.month = VAR_3;
 VAR_10.day = VAR_4;
 VAR_10.hour = VAR_5;
 VAR_10.minute = VAR_6;
 VAR_10.second = VAR_7;
 VAR_10.millisecond = FUNC_1(VAR_8);
 VAR_10.zone = FUNC_1(VAR_9);
 return FUNC_2(VAR_1, &VAR_10, sizeof(VAR_10));
}
