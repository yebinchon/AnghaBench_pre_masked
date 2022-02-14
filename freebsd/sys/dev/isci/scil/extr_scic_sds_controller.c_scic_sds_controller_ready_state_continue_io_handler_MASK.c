
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__** io_request_table; } ;
struct TYPE_5__ {int io_tag; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCI_BASE_CONTROLLER_T ;
typedef TYPE_1__ SCIC_SDS_REQUEST_T ;
typedef TYPE_2__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   SCI_BASE_CONTROLLER_T *VAR_1,
   SCI_BASE_REMOTE_DEVICE_T *VAR_2,
   SCI_BASE_REQUEST_T *VAR_3
)
{
   SCIC_SDS_CONTROLLER_T *VAR_4;
   SCIC_SDS_REQUEST_T *VAR_5;

   VAR_5 = (SCIC_SDS_REQUEST_T *)VAR_3;
   VAR_4 = (SCIC_SDS_CONTROLLER_T *)VAR_1;

   VAR_4->io_request_table[
      FUNC_1(VAR_5->io_tag)] = VAR_5;

   FUNC_0(
      VAR_4,
      FUNC_2(VAR_5)
   );

   return VAR_0;
}
