
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iflib_dma_info {int idi_size; int idi_map; int idi_tag; int idi_paddr; } ;
struct hwrm_nvm_get_dir_entries_input {int host_dest_addr; int member_0; } ;
struct bnxt_softc {int hwrm_cmd_timeo; } ;
typedef int req ;


 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (struct bnxt_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct bnxt_softc*,struct hwrm_nvm_get_dir_entries_input*,int) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_nvm_get_dir_entries_input*,int ) ;
 int FUNC_4 (struct bnxt_softc*,int*,int*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;

int
FUNC_7(struct bnxt_softc *VAR_4, uint32_t *VAR_5,
    uint32_t *VAR_6, struct iflib_dma_info *VAR_7)
{
 struct hwrm_nvm_get_dir_entries_input VAR_8 = {0};
 uint32_t VAR_9;
 uint32_t VAR_10;
 int VAR_11;
 uint32_t VAR_12;

 if (!VAR_5)
  VAR_5 = &VAR_9;
 if (!VAR_6)
  VAR_6 = &VAR_10;

 VAR_11 = FUNC_4(VAR_4, VAR_5, VAR_6);
 if (VAR_11)
  goto exit;
 if (*VAR_5 * *VAR_6 > VAR_7->idi_size) {
  VAR_11 = VAR_2;
  goto exit;
 }






 FUNC_3(VAR_4, &VAR_8, VAR_3);
 VAR_8.host_dest_addr = FUNC_6(VAR_7->idi_paddr);
 FUNC_0(VAR_4);
 VAR_12 = VAR_4->hwrm_cmd_timeo;
 VAR_4->hwrm_cmd_timeo = VAR_0;
 VAR_11 = FUNC_2(VAR_4, &VAR_8, sizeof(VAR_8));
 VAR_4->hwrm_cmd_timeo = VAR_12;
 FUNC_1(VAR_4);
 if (VAR_11)
  goto exit;
 FUNC_5(VAR_7->idi_tag, VAR_7->idi_map,
     VAR_1);

exit:
 return VAR_11;
}
