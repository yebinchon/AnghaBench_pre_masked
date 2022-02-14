
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int state_machine; int parent; } ;
struct TYPE_11__ {TYPE_2__ parent; int command_buffer; int started_substate_machine; int has_started_substate_machine; int protocol; } ;
struct TYPE_8__ {scalar_t__ request_length; int function; } ;
struct TYPE_10__ {TYPE_1__ header; } ;
typedef TYPE_3__ SMP_REQUEST_T ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_IO_REQUEST_HANDLE_T ;
typedef TYPE_4__ SCIC_SDS_REQUEST_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;







 int VAR_5 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int ,int ) ;
 int VAR_6 ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*) ;

SCI_STATUS FUNC_6(
   SCI_IO_REQUEST_HANDLE_T VAR_7
)
{
   SMP_REQUEST_T VAR_8;

   SCIC_SDS_REQUEST_T *VAR_9 = (SCIC_SDS_REQUEST_T *) VAR_7;
   FUNC_0((
      FUNC_2(VAR_9),
      VAR_0,
      "scic_io_request_construct_smp(0x%x) enter\n",
      VAR_9
   ));

   VAR_9->protocol = VAR_2;
   VAR_9->has_started_substate_machine = VAR_5;


   FUNC_4(
      &VAR_9->started_substate_machine,
      &VAR_9->parent.parent,
      VAR_6,
      VAR_1
   );


   FUNC_1((char *)&VAR_8,
        VAR_9->command_buffer,
        sizeof(SMP_REQUEST_T));




   if( VAR_8.header.request_length == 0 )
   {
       switch( VAR_8.header.function )
       {
       case 133:
       case 130:
       case 129:
       case 128:
           VAR_8.header.request_length = 2;
           break;
       case 134:
       case 132:
       case 131:
           VAR_8.header.request_length = 9;
           break;

       }
   }

   FUNC_5(
      VAR_9,
      &VAR_8
   );

   FUNC_3(
      &VAR_9->parent.state_machine,
      VAR_3
   );

   return VAR_4;
}
