
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int user_parameters; } ;
struct TYPE_6__ {int is_sata_ncq_enabled; int max_ncq_depth; int is_sata_standby_timer_enabled; int is_non_zero_buffer_offsets_enabled; scalar_t__ reset_type; int clear_affiliation_during_controller_stop; } ;
struct TYPE_7__ {TYPE_1__ sas; } ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_2__ SCIF_USER_PARAMETERS_T ;
typedef TYPE_3__ SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,TYPE_2__*,int) ;

SCI_STATUS FUNC_1(
   SCI_CONTROLLER_HANDLE_T VAR_12,
   SCIF_USER_PARAMETERS_T * VAR_13
)
{
   SCIF_SAS_CONTROLLER_T * VAR_14 = (SCIF_SAS_CONTROLLER_T*) VAR_12;



   if (VAR_13->sas.is_sata_ncq_enabled != 1 && VAR_13->sas.is_sata_ncq_enabled != 0)
      return VAR_0;

   if (VAR_13->sas.max_ncq_depth < 1 || VAR_13->sas.max_ncq_depth > 32)
      return VAR_0;

   if (VAR_13->sas.is_sata_standby_timer_enabled != 1
       && VAR_13->sas.is_sata_standby_timer_enabled != 0)
      return VAR_0;

   if (VAR_13->sas.is_non_zero_buffer_offsets_enabled != 1
       && VAR_13->sas.is_non_zero_buffer_offsets_enabled != 0)
      return VAR_0;

   if (VAR_13->sas.reset_type != VAR_1
       && VAR_13->sas.reset_type != VAR_2
       && VAR_13->sas.reset_type != VAR_4
       && VAR_13->sas.reset_type != VAR_7
       && VAR_13->sas.reset_type != VAR_6
       && VAR_13->sas.reset_type != VAR_3
       && VAR_13->sas.reset_type != VAR_9
       && VAR_13->sas.reset_type != VAR_10
       && VAR_13->sas.reset_type != VAR_8
       && VAR_13->sas.reset_type != VAR_5)
      return VAR_0;

   if (VAR_13->sas.clear_affiliation_during_controller_stop != 1
       && VAR_13->sas.clear_affiliation_during_controller_stop !=0)
       return VAR_0;

   FUNC_0((&VAR_14->user_parameters), VAR_13, sizeof(*VAR_13));




   return VAR_11;
}
