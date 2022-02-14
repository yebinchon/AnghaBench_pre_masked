
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int U16 ;
struct TYPE_2__ {int io_tag; } ;
typedef scalar_t__ SCI_IO_REQUEST_HANDLE_T ;
typedef TYPE_1__ SCIC_SDS_REQUEST_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

U16 FUNC_2(
   SCI_IO_REQUEST_HANDLE_T VAR_1
)
{
   SCIC_SDS_REQUEST_T *VAR_2;
   VAR_2 = (SCIC_SDS_REQUEST_T *)VAR_1;

   FUNC_0((
      FUNC_1(VAR_1),
      VAR_0,
      "scic_io_request_get_io_tag(0x%x) enter\n",
      VAR_1
   ));

   return VAR_2->io_tag;
}
