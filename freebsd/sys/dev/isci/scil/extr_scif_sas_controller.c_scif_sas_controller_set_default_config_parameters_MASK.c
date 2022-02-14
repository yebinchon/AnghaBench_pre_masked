
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int max_ncq_depth; void* ignore_fua; void* clear_affiliation_during_controller_stop; int reset_type; void* is_non_zero_buffer_offsets_enabled; void* is_sata_standby_timer_enabled; void* is_sata_ncq_enabled; } ;
struct TYPE_6__ {TYPE_1__ sas; } ;
struct TYPE_7__ {TYPE_2__ user_parameters; } ;
typedef TYPE_2__ SCIF_USER_PARAMETERS_T ;
typedef TYPE_3__ SCIF_SAS_CONTROLLER_T ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;

void FUNC_0(
   SCIF_SAS_CONTROLLER_T * VAR_3
)
{
   SCIF_USER_PARAMETERS_T * VAR_4 = &(VAR_3->user_parameters);

   VAR_4->sas.is_sata_ncq_enabled = VAR_2;
   VAR_4->sas.max_ncq_depth = 32;
   VAR_4->sas.is_sata_standby_timer_enabled = VAR_0;
   VAR_4->sas.is_non_zero_buffer_offsets_enabled = VAR_0;
   VAR_4->sas.reset_type = VAR_1;
   VAR_4->sas.clear_affiliation_during_controller_stop = VAR_2;
   VAR_4->sas.ignore_fua = VAR_0;

}
