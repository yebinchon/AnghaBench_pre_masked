
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ U8 ;
typedef int U32 ;
struct TYPE_13__ {int state_machine; int parent; } ;
struct TYPE_16__ {TYPE_3__ parent; int started_substate_machine; int has_started_substate_machine; int protocol; } ;
struct TYPE_15__ {int (* scic_cb_smp_passthru_get_request ) (void*,scalar_t__**) ;int (* scic_cb_smp_passthru_get_allocated_response_length ) (void*) ;int (* scic_cb_smp_passthru_get_function ) (void*) ;int (* scic_cb_smp_passthru_get_frame_type ) (void*) ;} ;
struct TYPE_12__ {int allocated_response_length; int function; int smp_frame_type; scalar_t__ request_length; } ;
struct TYPE_11__ {int vendor_specific_request; } ;
struct TYPE_14__ {TYPE_2__ header; TYPE_1__ request; } ;
typedef TYPE_4__ SMP_REQUEST_T ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_IO_REQUEST_HANDLE_T ;
typedef TYPE_5__ SCIC_SMP_PASSTHRU_REQUEST_CALLBACKS_T ;
typedef TYPE_6__ SCIC_SDS_REQUEST_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,scalar_t__*,int) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int ,int ) ;
 int VAR_6 ;
 int FUNC_5 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_6 (void*,scalar_t__**) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;

SCI_STATUS FUNC_10(
   SCI_IO_REQUEST_HANDLE_T VAR_7,
   SCIC_SMP_PASSTHRU_REQUEST_CALLBACKS_T *VAR_8
)
{
   SMP_REQUEST_T VAR_9;
   U8 * VAR_10;
   U32 VAR_11;

   SCIC_SDS_REQUEST_T *VAR_12 = (SCIC_SDS_REQUEST_T *) VAR_7;
   FUNC_0((
      FUNC_2(VAR_12),
      VAR_0,
      "scic_io_request_construct_smp_pass_through(0x%x) enter\n",
      VAR_12
   ));

   VAR_12->protocol = VAR_2;
   VAR_12->has_started_substate_machine = VAR_5;


   VAR_11 = VAR_8->scic_cb_smp_passthru_get_request (
                                       (void *)VAR_12,
                                       &VAR_10
                                    );


   FUNC_1((char *)&VAR_9.request.vendor_specific_request,
        VAR_10,
        VAR_11);




   VAR_9.header.request_length = (U8) (VAR_11 / sizeof (U32));


   VAR_9.header.smp_frame_type = VAR_8->scic_cb_smp_passthru_get_frame_type ((void *)VAR_12);
   VAR_9.header.function = VAR_8->scic_cb_smp_passthru_get_function ((void *)VAR_12);
   VAR_9.header.allocated_response_length = VAR_8->scic_cb_smp_passthru_get_allocated_response_length((void *)VAR_12);


   FUNC_4(
      &VAR_12->started_substate_machine,
      &VAR_12->parent.parent,
      VAR_6,
      VAR_1
   );


   FUNC_5 (VAR_12, &VAR_9);

   FUNC_3(
      &VAR_12->parent.state_machine,
      VAR_3
   );

   return VAR_4;
}
