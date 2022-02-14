
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_5__ {int ** device_table; int ** io_request_table; } ;
typedef int SCIC_SDS_REQUEST_T ;
typedef int SCIC_SDS_REMOTE_DEVICE_T ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 size_t FUNC_1 (size_t) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (size_t) ;

__attribute__((used)) static
void FUNC_6(
   SCIC_SDS_CONTROLLER_T *VAR_8,
   U32 VAR_9
)
{
   U32 VAR_10;
   SCIC_SDS_REQUEST_T *VAR_11;
   SCIC_SDS_REMOTE_DEVICE_T *VAR_12;

   VAR_10 = FUNC_1(VAR_9);

   switch (FUNC_5(VAR_9))
   {
   case 128:
   case 131:
      VAR_11 = VAR_8->io_request_table[VAR_10];
      FUNC_0(*(
         FUNC_2(VAR_8),
           VAR_0
         | VAR_1
         | VAR_3
         | VAR_5,
         "SCIC SDS Completion type SDMA %x for io request %x\n",
         VAR_9,
         VAR_11
      ));

      break;

   case 132:
   case 130:
   case 129:
      VAR_12 = VAR_8->device_table[VAR_10];
      FUNC_0(*(
         FUNC_2(VAR_8),
           VAR_0
         | VAR_4
         | VAR_2
         | VAR_6,
         "SCIC SDS Completion type SDMA %x for remote device %x\n",
         VAR_9,
         VAR_12
      ));

      break;

   default:
      FUNC_0((
         FUNC_2(VAR_8),
         VAR_0,
         "SCIC SDS Completion unknown SDMA completion type %x\n",
         VAR_9
      ));
      break;
   }



   FUNC_3(
      FUNC_4(VAR_8),
      VAR_7
   );
}
