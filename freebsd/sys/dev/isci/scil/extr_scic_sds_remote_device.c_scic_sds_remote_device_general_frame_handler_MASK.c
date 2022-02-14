
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_13__ {int uf_control; } ;
struct TYPE_12__ {TYPE_1__* state_handlers; int * target_device; } ;
struct TYPE_11__ {int tag; } ;
struct TYPE_10__ {scalar_t__ (* frame_handler ) (TYPE_3__*,int ) ;} ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_2__ SCI_SSP_FRAME_HEADER_T ;
typedef TYPE_3__ SCIC_SDS_REQUEST_T ;
typedef int SCIC_SDS_REMOTE_DEVICE_T ;


 TYPE_3__* VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 TYPE_5__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,void**) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ) ;

SCI_STATUS FUNC_5(
   SCIC_SDS_REMOTE_DEVICE_T *VAR_2,
   U32 VAR_3
)
{
   SCI_STATUS VAR_4;
   SCI_SSP_FRAME_HEADER_T *VAR_5;
   SCIC_SDS_REQUEST_T *VAR_6;

   VAR_4 = FUNC_3(
      &(FUNC_2(VAR_2)->uf_control),
      VAR_3,
      (void **)&VAR_5
   );

   if (VAR_1 == VAR_4)
   {
      VAR_6 = FUNC_0(
         FUNC_2(VAR_2), VAR_5->tag);

      if ( (VAR_6 == VAR_0)
         || (VAR_6->target_device != VAR_2) )
      {


         FUNC_1(
            FUNC_2(VAR_2), VAR_3
         );
      }
      else
      {

         VAR_4 = VAR_6->state_handlers->frame_handler(
                                                    VAR_6, VAR_3);
      }
   }

   return VAR_4;
}
