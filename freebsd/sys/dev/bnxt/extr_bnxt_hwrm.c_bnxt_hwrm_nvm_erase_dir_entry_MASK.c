
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct hwrm_nvm_erase_dir_entry_input {int dir_idx; int member_0; } ;
struct bnxt_softc {int hwrm_cmd_timeo; } ;
typedef int req ;


 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (struct bnxt_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct bnxt_softc*,struct hwrm_nvm_erase_dir_entry_input*,int) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_nvm_erase_dir_entry_input*,int ) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct bnxt_softc *VAR_2, uint16_t VAR_3)
{
 struct hwrm_nvm_erase_dir_entry_input VAR_4 = {0};
 uint32_t VAR_5;
 int VAR_6;

 FUNC_3(VAR_2, &VAR_4, VAR_1);
 VAR_4.dir_idx = FUNC_4(VAR_3);
 FUNC_0(VAR_2);
 VAR_5 = VAR_2->hwrm_cmd_timeo;
 VAR_2->hwrm_cmd_timeo = VAR_0;
 VAR_6 = FUNC_2(VAR_2, &VAR_4, sizeof(VAR_4));
 VAR_2->hwrm_cmd_timeo = VAR_5;
 FUNC_1(VAR_2);
 return VAR_6;
}
