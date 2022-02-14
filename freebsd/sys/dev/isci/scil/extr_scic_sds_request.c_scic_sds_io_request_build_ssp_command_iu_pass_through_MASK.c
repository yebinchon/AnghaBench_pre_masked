
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int lun ;
typedef int U8 ;
typedef scalar_t__ U32 ;
struct TYPE_14__ {scalar_t__ command_buffer; } ;
struct TYPE_13__ {int (* scic_cb_ssp_passthru_get_task_attribute ) (TYPE_4__*) ;int (* scic_cb_ssp_passthru_get_cdb ) (TYPE_4__*,scalar_t__*,int **,scalar_t__*,int **) ;int (* scic_cb_ssp_passthru_get_lun ) (TYPE_4__*,int **) ;} ;
struct TYPE_12__ {int lun_number; } ;
struct TYPE_11__ {int task_attribute; scalar_t__ task_priority; scalar_t__ enable_first_burst; int cdb; scalar_t__ additional_cdb_length; scalar_t__ lun; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCI_SSP_COMMAND_IU_T ;
typedef TYPE_2__ SCI_SINGLE_LEVEL_LUN_T ;
typedef TYPE_3__ SCIC_SSP_PASSTHRU_REQUEST_CALLBACKS_T ;
typedef TYPE_4__ SCIC_SDS_REQUEST_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,scalar_t__) ;
 int FUNC_2 (TYPE_4__*,int **) ;
 int FUNC_3 (TYPE_4__*,scalar_t__*,int **,scalar_t__*,int **) ;
 int FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static
SCI_STATUS FUNC_5(
   SCIC_SDS_REQUEST_T *VAR_2,
   SCIC_SSP_PASSTHRU_REQUEST_CALLBACKS_T *VAR_3
)
{
   SCI_SSP_COMMAND_IU_T *VAR_4;
   U32 VAR_5 = 0, VAR_6 = 0;
   U8 *VAR_7, *VAR_8;
   U8 *VAR_9;
   SCI_STATUS VAR_10 = VAR_1;
   SCI_SINGLE_LEVEL_LUN_T VAR_11;

   VAR_4 =
      (SCI_SSP_COMMAND_IU_T *)VAR_2->command_buffer;


   VAR_3->scic_cb_ssp_passthru_get_lun (
      VAR_2,
     &VAR_9
   );
   FUNC_0(&VAR_11, 0, sizeof(VAR_11));
   VAR_11.lun_number = *VAR_9;
   FUNC_1(
       (U32 *)VAR_4->lun,
       (U32 *)&VAR_11,
       sizeof(VAR_11));

   ((U32 *)VAR_4)[2] = 0;

   VAR_3->scic_cb_ssp_passthru_get_cdb(
      VAR_2,
     &VAR_5,
     &VAR_7,
     &VAR_6,
     &VAR_8
   );

   VAR_4->additional_cdb_length = VAR_6;





   if (VAR_6 > 0)
   {
     return VAR_0;
   }


   FUNC_1(
      (U32 *)(&VAR_4->cdb),
      (U32 *)(VAR_7),
      (VAR_5 + 3) / sizeof(U32)
   );



   VAR_4->enable_first_burst = 0;
   VAR_4->task_priority = 0;


   VAR_4->task_attribute = VAR_3->scic_cb_ssp_passthru_get_task_attribute (
                                      VAR_2
                             );

   return VAR_10;
}
