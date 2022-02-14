
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct hwrm_nvm_verify_update_input {void* dir_ext; void* dir_ordinal; void* dir_type; int member_0; } ;
struct bnxt_softc {int hwrm_cmd_timeo; } ;
typedef int req ;


 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (struct bnxt_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct bnxt_softc*,struct hwrm_nvm_verify_update_input*,int) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_nvm_verify_update_input*,int ) ;
 void* FUNC_4 (int ) ;

int
FUNC_5(struct bnxt_softc *VAR_2, uint16_t VAR_3,
    uint16_t VAR_4, uint16_t VAR_5)
{
 struct hwrm_nvm_verify_update_input VAR_6 = {0};
 uint32_t VAR_7;
 int VAR_8;

 FUNC_3(VAR_2, &VAR_6, VAR_1);

 VAR_6.dir_type = FUNC_4(VAR_3);
 VAR_6.dir_ordinal = FUNC_4(VAR_4);
 VAR_6.dir_ext = FUNC_4(VAR_5);

 FUNC_0(VAR_2);
 VAR_7 = VAR_2->hwrm_cmd_timeo;
 VAR_2->hwrm_cmd_timeo = VAR_0;
 VAR_8 = FUNC_2(VAR_2, &VAR_6, sizeof(VAR_6));
 VAR_2->hwrm_cmd_timeo = VAR_7;
 FUNC_1(VAR_2);
 return VAR_8;
}
