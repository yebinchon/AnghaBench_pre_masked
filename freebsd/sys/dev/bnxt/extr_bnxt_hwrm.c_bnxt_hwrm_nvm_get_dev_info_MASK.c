
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct hwrm_nvm_get_dev_info_output {int available_size; int reserved_size; int nvram_size; int sector_size; int device_id; int manufacturer_id; } ;
struct hwrm_nvm_get_dev_info_input {int member_0; } ;
struct TYPE_2__ {scalar_t__ idi_vaddr; } ;
struct bnxt_softc {int hwrm_cmd_timeo; TYPE_1__ hwrm_cmd_resp; } ;
typedef int req ;


 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (struct bnxt_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct bnxt_softc*,struct hwrm_nvm_get_dev_info_input*,int) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_nvm_get_dev_info_input*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int
FUNC_6(struct bnxt_softc *VAR_2, uint16_t *VAR_3,
    uint16_t *VAR_4, uint32_t *VAR_5, uint32_t *VAR_6,
    uint32_t *VAR_7, uint32_t *VAR_8)
{
 struct hwrm_nvm_get_dev_info_input VAR_9 = {0};
 struct hwrm_nvm_get_dev_info_output *VAR_10 =
     (void *)VAR_2->hwrm_cmd_resp.idi_vaddr;
 int VAR_11;
 uint32_t VAR_12;

 FUNC_3(VAR_2, &VAR_9, VAR_1);

 FUNC_0(VAR_2);
 VAR_12 = VAR_2->hwrm_cmd_timeo;
 VAR_2->hwrm_cmd_timeo = VAR_0;
 VAR_11 = FUNC_2(VAR_2, &VAR_9, sizeof(VAR_9));
 VAR_2->hwrm_cmd_timeo = VAR_12;
 if (VAR_11)
  goto exit;

 if (VAR_3)
  *VAR_3 = FUNC_4(VAR_10->manufacturer_id);
 if (VAR_4)
  *VAR_4 = FUNC_4(VAR_10->device_id);
 if (VAR_5)
  *VAR_5 = FUNC_5(VAR_10->sector_size);
 if (VAR_6)
  *VAR_6 = FUNC_5(VAR_10->nvram_size);
 if (VAR_7)
  *VAR_7 = FUNC_5(VAR_10->reserved_size);
 if (VAR_8)
  *VAR_8 = FUNC_5(VAR_10->available_size);

exit:
 FUNC_1(VAR_2);
 return VAR_11;
}
