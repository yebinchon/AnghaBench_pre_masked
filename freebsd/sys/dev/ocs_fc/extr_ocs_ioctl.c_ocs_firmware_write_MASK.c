
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_12__ {int hw; } ;
typedef TYPE_1__ ocs_t ;
struct TYPE_13__ {scalar_t__ actual_xfer; scalar_t__ status; int change_status; int semaphore; } ;
typedef TYPE_2__ ocs_mgmt_fw_write_result_t ;
struct TYPE_14__ {int virt; } ;
typedef TYPE_3__ ocs_dma_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_3__*,int,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_2 (int *,TYPE_3__*,int,int,int,int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int ,int const*,int) ;
 int FUNC_5 (int *,int ,char*) ;
 scalar_t__ FUNC_6 (int *,int ) ;

int
FUNC_7(ocs_t *VAR_6, const uint8_t *VAR_7, size_t VAR_8,
      uint8_t *VAR_9)
{
        int VAR_10 = 0;
        uint32_t VAR_11;
        uint32_t VAR_12;
        uint32_t VAR_13;
        ocs_dma_t VAR_14;
        int VAR_15 = 0;
        ocs_mgmt_fw_write_result_t VAR_16;

        FUNC_5(&(VAR_16.semaphore), 0, "fw_write");

        VAR_11 = VAR_8;
        VAR_13 = 0;

        if (FUNC_0(VAR_6, &VAR_14, VAR_3, 4096)) {
                FUNC_3(VAR_6, "ocs_firmware_write: malloc failed\n");
                return -VAR_1;
        }

        while (VAR_11 > 0) {

                if (VAR_11 > VAR_3) {
                        VAR_12 = VAR_3;
                } else {
                        VAR_12 = VAR_11;
                }

                FUNC_4(VAR_14.virt, VAR_7 + VAR_13, VAR_12);

                if (VAR_11 == VAR_12) {
                        VAR_15 = 1;
                }

                FUNC_2(&VAR_6->hw, &VAR_14, VAR_12, VAR_13,
      VAR_15, VAR_5, &VAR_16);

                if (FUNC_6(&(VAR_16.semaphore), VAR_4) != 0) {
                        VAR_10 = -VAR_2;
                        break;
                }

                if (VAR_16.actual_xfer == 0 || VAR_16.status != 0) {
                        VAR_10 = -VAR_0;
                        break;
                }

                if (VAR_15) {
                        *VAR_9 = VAR_16.change_status;
                }

                VAR_11 -= VAR_16.actual_xfer;
                VAR_13 += VAR_16.actual_xfer;
        }

        FUNC_1(VAR_6, &VAR_14);
        return VAR_10;
}
