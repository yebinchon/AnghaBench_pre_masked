
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int revision; scalar_t__ vendor_specific; scalar_t__ reason_code_explanation; scalar_t__ reason_code; scalar_t__ fragment_id; void* max_residual_size; void* cmd_rsp_code; scalar_t__ resv1; scalar_t__ options; int gs_subtype; int gs_type; scalar_t__ in_id; } ;
typedef TYPE_1__ fcct_iu_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(fcct_iu_header_t *VAR_2, uint16_t VAR_3, uint16_t VAR_4)
{

 VAR_2->revision = 1;
 VAR_2->in_id = 0;
 VAR_2->gs_type = VAR_1;
 VAR_2->gs_subtype = VAR_0;
 VAR_2->options = 0;
 VAR_2->resv1 = 0;
 VAR_2->cmd_rsp_code = FUNC_0(VAR_3);
 VAR_2->max_residual_size = FUNC_0(VAR_4/(sizeof(uint32_t)));
 VAR_2->fragment_id = 0;
 VAR_2->reason_code = 0;
 VAR_2->reason_code_explanation = 0;
 VAR_2->vendor_specific = 0;
}
