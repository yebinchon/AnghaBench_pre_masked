
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ target_id_t ;
struct mpt_softc {TYPE_1__* tmf_req; scalar_t__ is_fc; } ;
typedef scalar_t__ lun_id_t ;
struct TYPE_2__ {int ResponseCode; int state; int IOCStatus; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mpt_softc*,char*,...) ;
 int FUNC_2 (struct mpt_softc*,int ) ;
 int FUNC_3 (struct mpt_softc*,int ,int ,int ,scalar_t__,scalar_t__,int ,int) ;
 int FUNC_4 (struct mpt_softc*,TYPE_1__*,int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_5(struct mpt_softc *VAR_14, target_id_t VAR_15, lun_id_t VAR_16,
    int VAR_17)
{
 int VAR_18;
 uint16_t VAR_19;
 uint8_t VAR_20;

 VAR_18 = FUNC_3(VAR_14,
     (VAR_15 != VAR_1 || VAR_16 != VAR_0) ?
     VAR_10 :
     VAR_9,
     VAR_14->is_fc ? VAR_6 : 0,
     0,
     VAR_15 != VAR_1 ? VAR_15 : 0,
     VAR_16 != VAR_0 ? VAR_16 : 0,
     0, VAR_17);

 if (VAR_18 != 0) {




  FUNC_1(VAR_14,
      "mpt_bus_reset: mpt_scsi_send_tmf returned %d\n", VAR_18);
  return (VAR_2);
 }


 VAR_18 = FUNC_4(VAR_14, VAR_14->tmf_req, VAR_11,
     VAR_11, VAR_17, 5000);

 VAR_19 = FUNC_0(VAR_14->tmf_req->IOCStatus);
 VAR_20 = VAR_14->tmf_req->ResponseCode;
 VAR_14->tmf_req->state = VAR_12;

 if (VAR_18) {
  FUNC_1(VAR_14, "mpt_bus_reset: Reset timed-out. "
      "Resetting controller.\n");
  FUNC_2(VAR_14, VAR_13);
  return (VAR_3);
 }

 if ((VAR_19 & VAR_4) != VAR_5) {
  FUNC_1(VAR_14, "mpt_bus_reset: TMF IOC Status 0x%x. "
      "Resetting controller.\n", VAR_19);
  FUNC_2(VAR_14, VAR_13);
  return (VAR_2);
 }

 if (VAR_20 != VAR_8 &&
     VAR_20 != VAR_7) {
  FUNC_1(VAR_14, "mpt_bus_reset: TMF Response 0x%x. "
      "Resetting controller.\n", VAR_20);
  FUNC_2(VAR_14, VAR_13);
  return (VAR_2);
 }
 return (0);
}
