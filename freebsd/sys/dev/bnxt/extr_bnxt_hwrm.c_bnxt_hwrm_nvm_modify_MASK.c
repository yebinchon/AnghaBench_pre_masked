
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct iflib_dma_info {int idi_paddr; int idi_map; int idi_tag; int idi_vaddr; } ;
struct hwrm_nvm_modify_input {void* len; void* offset; int dir_idx; int host_src_addr; int member_0; } ;
struct bnxt_softc {int hwrm_cmd_timeo; int ctx; } ;
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
 int FUNC_2 (struct bnxt_softc*,struct hwrm_nvm_modify_input*,int) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_nvm_modify_input*,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (void*,int ,int ) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,struct iflib_dma_info*,int ) ;
 int FUNC_10 (struct iflib_dma_info*) ;
 int FUNC_11 (int ,void*,int ) ;

int
FUNC_12(struct bnxt_softc *VAR_7, uint16_t VAR_8, uint32_t VAR_9,
    void *VAR_10, bool VAR_11, uint32_t VAR_12)
{
 struct hwrm_nvm_modify_input VAR_13 = {0};
 struct iflib_dma_info VAR_14;
 int VAR_15;
 uint32_t VAR_16;

 if (VAR_12 == 0 || !VAR_10)
  return VAR_4;
 VAR_15 = FUNC_9(VAR_7->ctx, VAR_12, &VAR_14,
     VAR_3);
 if (VAR_15)
  return VAR_5;
 if (VAR_11) {
  VAR_15 = FUNC_5(VAR_10, VAR_14.idi_vaddr, VAR_12);
  if (VAR_15)
   goto exit;
 }
 else
  FUNC_11(VAR_14.idi_vaddr, VAR_10, VAR_12);
 FUNC_4(VAR_14.idi_tag, VAR_14.idi_map,
     VAR_1 | VAR_2);

 FUNC_3(VAR_7, &VAR_13, VAR_6);
 VAR_13.host_src_addr = FUNC_8(VAR_14.idi_paddr);
 VAR_13.dir_idx = FUNC_6(VAR_8);
 VAR_13.offset = FUNC_7(VAR_9);
 VAR_13.len = FUNC_7(VAR_12);
 FUNC_0(VAR_7);
 VAR_16 = VAR_7->hwrm_cmd_timeo;
 VAR_7->hwrm_cmd_timeo = VAR_0;
 VAR_15 = FUNC_2(VAR_7, &VAR_13, sizeof(VAR_13));
 VAR_7->hwrm_cmd_timeo = VAR_16;
 FUNC_1(VAR_7);

exit:
 FUNC_10(&VAR_14);
 return VAR_15;
}
