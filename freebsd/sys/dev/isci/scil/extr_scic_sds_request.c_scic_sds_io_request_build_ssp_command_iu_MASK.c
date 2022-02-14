
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int lun ;
typedef int U32 ;
struct TYPE_8__ {scalar_t__ command_buffer; } ;
struct TYPE_7__ {int lun_number; } ;
struct TYPE_6__ {int additional_cdb_length; int task_attribute; int task_priority; scalar_t__ enable_first_burst; int cdb; scalar_t__ lun; } ;
typedef TYPE_1__ SCI_SSP_COMMAND_IU_T ;
typedef TYPE_2__ SCI_SINGLE_LEVEL_LUN_T ;
typedef TYPE_3__ SCIC_SDS_REQUEST_T ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int*,int*,int) ;

__attribute__((used)) static
void FUNC_7(
   SCIC_SDS_REQUEST_T *VAR_0
)
{
   SCI_SINGLE_LEVEL_LUN_T VAR_1;
   SCI_SSP_COMMAND_IU_T *VAR_2;
   void *VAR_3;
   U32 VAR_4;
   U32 *VAR_5;

   VAR_2 =
      (SCI_SSP_COMMAND_IU_T *)VAR_0->command_buffer;

   VAR_3 = FUNC_5(VAR_0);

   ((U32 *)&VAR_1)[0] = 0;
   ((U32 *)&VAR_1)[1] = 0;
   VAR_1.lun_number = FUNC_3(VAR_3) &0xff;

   FUNC_6(
       (U32 *)VAR_2->lun,
       (U32 *)&VAR_1,
       sizeof(VAR_1));

   ((U32 *)VAR_2)[2] = 0;

   VAR_4 = FUNC_1(VAR_3);
   VAR_5 = (U32 *)FUNC_0(VAR_3);

   if (VAR_4 > 16)
   {
      VAR_2->additional_cdb_length = VAR_4 - 16;
   }


   FUNC_6(
      (U32 *)(&VAR_2->cdb),
      (U32 *)(VAR_5),
      (VAR_4 + 3) / sizeof(U32)
   );

   VAR_2->enable_first_burst = 0;
   VAR_2->task_priority =
      FUNC_2(VAR_3);
   VAR_2->task_attribute =
      FUNC_4(VAR_3);
}
