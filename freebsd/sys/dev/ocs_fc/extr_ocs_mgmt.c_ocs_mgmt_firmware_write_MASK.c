
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int status_str ;
struct TYPE_13__ {int hw; } ;
typedef TYPE_1__ ocs_t ;
struct TYPE_14__ {scalar_t__ actual_xfer; scalar_t__ status; scalar_t__ change_status; int semaphore; } ;
typedef TYPE_2__ ocs_mgmt_fw_write_result_t ;
struct TYPE_15__ {int virt; } ;
typedef TYPE_3__ ocs_dma_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (void*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_3__*,scalar_t__,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_4 (int *,TYPE_3__*,scalar_t__,scalar_t__,int,int ,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char*,...) ;
 int FUNC_7 (char*,int ,int) ;
 int VAR_5 ;
 int FUNC_8 (int *,int ,char*) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int FUNC_10 (char*,scalar_t__,char*,scalar_t__) ;

__attribute__((used)) static int32_t
FUNC_11(ocs_t *VAR_6, char *VAR_7, void *VAR_8, uint32_t VAR_9, void *VAR_10, uint32_t VAR_11)
{
 int VAR_12 = 0;
 uint32_t VAR_13;
 uint32_t VAR_14;
 uint32_t VAR_15;
 uint8_t *VAR_16;
 ocs_dma_t VAR_17;
 int VAR_18 = 0;
 ocs_mgmt_fw_write_result_t VAR_19;
 uint32_t VAR_20 = 0;
        char VAR_21[80];

 FUNC_8(&(VAR_19.semaphore), 0, "fw_write");

 VAR_13 = VAR_9;
 VAR_15 = 0;
 VAR_16 = (uint8_t *)VAR_8;

 if (FUNC_2(VAR_6, &VAR_17, VAR_3, 4096)) {
  FUNC_5(VAR_6, "ocs_mgmt_firmware_write: malloc failed");
  return -VAR_1;
 }

 while (VAR_13 > 0) {


  if (VAR_13 > VAR_3) {
   VAR_14 = VAR_3;
  } else {
   VAR_14 = VAR_13;
  }


  if (FUNC_0(VAR_17.virt, VAR_16, VAR_14)) {
   VAR_12 = -VAR_0;
   break;
  }


  if (VAR_13 == VAR_14) {
   VAR_18 = 1;
  }


  FUNC_4(&VAR_6->hw, &VAR_17, VAR_14, VAR_15, VAR_18, VAR_5, &VAR_19);



  if (FUNC_9(&(VAR_19.semaphore), VAR_4) != 0) {
   FUNC_5(VAR_6, "ocs_sem_p failed\n");
   VAR_12 = -VAR_2;
   break;
  }

  if (VAR_19.actual_xfer == 0) {
   FUNC_6(VAR_6, "actual_write_length is %d\n", VAR_19.actual_xfer);
   VAR_12 = -VAR_0;
   break;
  }


  if (VAR_19.status != 0) {
   FUNC_6(VAR_6, "write returned status %d\n", VAR_19.status);
   VAR_12 = -VAR_0;
   break;
  }

  if (VAR_18) {
   VAR_20 = VAR_19.change_status;
  }

  VAR_13 -= VAR_19.actual_xfer;
  VAR_15 += VAR_19.actual_xfer;
  VAR_16 += VAR_19.actual_xfer;

 }


 if ((VAR_11 > 0) && (VAR_10 != ((void*)0))) {
  if (VAR_11 > sizeof(VAR_21)) {
   VAR_11 = sizeof(VAR_21);
  }
  FUNC_7(VAR_21, 0, sizeof(VAR_21));
  FUNC_10(VAR_21, VAR_11, "%d", VAR_20);
  if (FUNC_1(VAR_10, VAR_21, VAR_11)) {
   FUNC_6(VAR_6, "copy to user failed for change_status\n");
  }
 }


 FUNC_3(VAR_6, &VAR_17);

 return VAR_12;
}
