
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ U8 ;
struct TYPE_17__ {int domain; int core_object; } ;
struct TYPE_16__ {int io_tag_to_manage; } ;
struct TYPE_13__ {scalar_t__ attached_stp_target; scalar_t__ attached_ssp_target; } ;
struct TYPE_14__ {TYPE_1__ bits; } ;
struct TYPE_15__ {TYPE_2__ u; } ;
typedef TYPE_3__ SMP_DISCOVER_RESPONSE_PROTOCOLS_T ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef TYPE_4__ SCIF_SAS_TASK_REQUEST_T ;
typedef int SCIF_SAS_REQUEST_T ;
typedef TYPE_5__ SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,TYPE_5__*,int *,TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static
SCI_STATUS FUNC_8(
   SCI_BASE_REMOTE_DEVICE_T * VAR_16,
   SCI_BASE_REQUEST_T * VAR_17
)
{
   SCI_STATUS VAR_18 = VAR_2;
   SCIF_SAS_REMOTE_DEVICE_T * VAR_19 = (SCIF_SAS_REMOTE_DEVICE_T*)
                                           VAR_16;
   SCIF_SAS_TASK_REQUEST_T * VAR_20 = (SCIF_SAS_TASK_REQUEST_T*)
                                           VAR_17;
   U8 VAR_21 =
         FUNC_7(VAR_20);

   SMP_DISCOVER_RESPONSE_PROTOCOLS_T VAR_22;

   FUNC_3(VAR_19->core_object, &VAR_22);
   if ( VAR_22.u.bits.attached_ssp_target
       || VAR_22.u.bits.attached_stp_target)
   {


      if ( (VAR_21 == VAR_6)
         || (VAR_21 == VAR_8)
         || (VAR_21 == VAR_11)
         || (VAR_21 == VAR_10)
         || (VAR_21 == VAR_9) )
      {

         FUNC_5(
            VAR_19->domain, VAR_19, ((void*)0), VAR_20
         );

         VAR_18 = FUNC_6(VAR_19, VAR_20);
      }
      else if ( (VAR_21 == VAR_7)
              || (VAR_21 == VAR_13)
              || (VAR_21 == VAR_14)
              || (VAR_21 == VAR_12) )
      {
       FUNC_0(!VAR_22.u.bits.attached_stp_target);
         VAR_18 = FUNC_6(VAR_19, VAR_20);
      }
      else if (VAR_21 == VAR_5)
      {
         SCIF_SAS_REQUEST_T * VAR_23
            = FUNC_4(
                 VAR_19->domain, VAR_20->io_tag_to_manage
              );


         if (VAR_23 != ((void*)0))
         {
            FUNC_5(
               VAR_19->domain, VAR_19, VAR_23, VAR_20
            );

            VAR_18 = FUNC_6(
                        VAR_19, VAR_20
                     );
         }
         else
            VAR_18 = VAR_3;
      }
   }
   else
      VAR_18 = VAR_4;

   if (VAR_18 != VAR_15)
   {
      FUNC_1((
         FUNC_2(VAR_19),
         VAR_0 | VAR_1,
         "Controller:0x%x TaskRequest:0x%x Status:0x%x start task failure\n",
         VAR_19, VAR_20, VAR_18
      ));
   }

   return VAR_18;
}
