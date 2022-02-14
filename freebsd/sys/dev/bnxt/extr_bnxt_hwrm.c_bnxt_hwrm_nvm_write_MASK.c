
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct iflib_dma_info {scalar_t__ idi_paddr; int idi_map; int idi_tag; int idi_vaddr; } ;
struct hwrm_nvm_write_output {int dir_idx; int dir_item_length; } ;
struct hwrm_nvm_write_input {void* dir_item_length; void* flags; void* option; void* dir_data_length; void* dir_attr; void* dir_ext; void* dir_ordinal; void* dir_type; int host_src_addr; int member_0; } ;
struct TYPE_2__ {scalar_t__ idi_vaddr; } ;
struct bnxt_softc {int hwrm_cmd_timeo; int ctx; TYPE_1__ hwrm_cmd_resp; } ;
typedef int req ;


 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (struct bnxt_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct bnxt_softc*,struct hwrm_nvm_write_input*,int) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_nvm_write_input*,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (void*,int ,int ) ;
 void* FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,int ,struct iflib_dma_info*,int ) ;
 int FUNC_10 (struct iflib_dma_info*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,void*,int ) ;

int
FUNC_14(struct bnxt_softc *VAR_7, void *VAR_8, bool VAR_9,
    uint16_t VAR_10, uint16_t VAR_11, uint16_t VAR_12, uint16_t VAR_13,
    uint16_t VAR_14, uint32_t VAR_15, bool VAR_16, uint32_t *VAR_17,
    uint16_t *VAR_18)
{
 struct hwrm_nvm_write_input VAR_19 = {0};
 struct hwrm_nvm_write_output *VAR_20 =
     (void *)VAR_7->hwrm_cmd_resp.idi_vaddr;
 struct iflib_dma_info VAR_21;
 int VAR_22;
 uint32_t VAR_23;

 if (VAR_15) {
  VAR_22 = FUNC_9(VAR_7->ctx, VAR_15, &VAR_21,
      VAR_3);
  if (VAR_22)
   return VAR_4;
  if (VAR_9) {
   VAR_22 = FUNC_5(VAR_8, VAR_21.idi_vaddr, VAR_15);
   if (VAR_22)
    goto early_exit;
  }
  else
   FUNC_13(VAR_21.idi_vaddr, VAR_8, VAR_15);
  FUNC_4(VAR_21.idi_tag, VAR_21.idi_map,
      VAR_1 | VAR_2);
 }
 else
  VAR_21.idi_paddr = 0;

 FUNC_3(VAR_7, &VAR_19, VAR_5);

 VAR_19.host_src_addr = FUNC_8(VAR_21.idi_paddr);
 VAR_19.dir_type = FUNC_6(VAR_10);
 VAR_19.dir_ordinal = FUNC_6(VAR_11);
 VAR_19.dir_ext = FUNC_6(VAR_12);
 VAR_19.dir_attr = FUNC_6(VAR_13);
 VAR_19.dir_data_length = FUNC_7(VAR_15);
 VAR_19.option = FUNC_6(VAR_14);
 if (VAR_16) {
  VAR_19.flags =
      FUNC_6(VAR_6);
 }
 if (VAR_17)
  VAR_19.dir_item_length = FUNC_7(*VAR_17);

 FUNC_0(VAR_7);
 VAR_23 = VAR_7->hwrm_cmd_timeo;
 VAR_7->hwrm_cmd_timeo = VAR_0;
 VAR_22 = FUNC_2(VAR_7, &VAR_19, sizeof(VAR_19));
 VAR_7->hwrm_cmd_timeo = VAR_23;
 if (VAR_22)
  goto exit;
 if (VAR_17)
  *VAR_17 = FUNC_12(VAR_20->dir_item_length);
 if (VAR_18)
  *VAR_18 = FUNC_11(VAR_20->dir_idx);

exit:
 FUNC_1(VAR_7);
early_exit:
 if (VAR_15)
  FUNC_10(&VAR_21);
 return VAR_22;
}
