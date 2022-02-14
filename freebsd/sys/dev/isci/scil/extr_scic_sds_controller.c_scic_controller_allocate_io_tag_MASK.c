
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t U16 ;
struct TYPE_2__ {size_t* io_request_sequence; int tci_pool; } ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,size_t) ;
 size_t FUNC_4 (size_t,size_t) ;

U16 FUNC_5(
   SCI_CONTROLLER_HANDLE_T VAR_2
)
{
   U16 VAR_3;
   U16 VAR_4;
   SCIC_SDS_CONTROLLER_T *VAR_5;
   VAR_5 = (SCIC_SDS_CONTROLLER_T *)VAR_2;

   FUNC_0((
      FUNC_1(VAR_2),
      VAR_0,
      "scic_controller_allocate_io_tag(0x%x) enter\n",
      VAR_2
   ));

   if (!FUNC_2(VAR_5->tci_pool))
   {
      FUNC_3(VAR_5->tci_pool, VAR_3);

      VAR_4 = VAR_5->io_request_sequence[VAR_3];

      return FUNC_4(VAR_4, VAR_3);
   }

   return VAR_1;
}
