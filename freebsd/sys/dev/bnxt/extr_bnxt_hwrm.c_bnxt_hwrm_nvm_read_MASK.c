
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct iflib_dma_info {scalar_t__ idi_size; int idi_map; int idi_tag; int idi_paddr; } ;
struct hwrm_nvm_read_input {void* len; void* offset; int dir_idx; int host_dest_addr; int member_0; } ;
struct bnxt_softc {scalar_t__ hwrm_cmd_timeo; } ;
typedef int req ;


 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (struct bnxt_softc*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct bnxt_softc*,struct hwrm_nvm_read_input*,int) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_nvm_read_input*,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;

int
FUNC_8(struct bnxt_softc *VAR_4, uint16_t VAR_5, uint32_t VAR_6,
    uint32_t VAR_7, struct iflib_dma_info *VAR_8)
{
 struct hwrm_nvm_read_input VAR_9 = {0};
 int VAR_10;
 uint32_t VAR_11;

 if (VAR_7 > VAR_8->idi_size) {
  VAR_10 = VAR_2;
  goto exit;
 }
 FUNC_3(VAR_4, &VAR_9, VAR_3);
 VAR_9.host_dest_addr = FUNC_7(VAR_8->idi_paddr);
 VAR_9.dir_idx = FUNC_5(VAR_5);
 VAR_9.offset = FUNC_6(VAR_6);
 VAR_9.len = FUNC_6(VAR_7);
 FUNC_0(VAR_4);
 VAR_11 = VAR_4->hwrm_cmd_timeo;
 VAR_4->hwrm_cmd_timeo = VAR_0;
 VAR_10 = FUNC_2(VAR_4, &VAR_9, sizeof(VAR_9));
 VAR_4->hwrm_cmd_timeo = VAR_11;
 FUNC_1(VAR_4);
 if (VAR_10)
  goto exit;
 FUNC_4(VAR_8->idi_tag, VAR_8->idi_map, VAR_1);

 goto exit;

exit:
 return VAR_10;
}
