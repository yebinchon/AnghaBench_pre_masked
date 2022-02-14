
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t U16 ;
struct TYPE_6__ {int * io_request_table; } ;
struct TYPE_5__ {int io_tag; } ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCI_BASE_CONTROLLER_T ;
typedef TYPE_1__ SCIC_SDS_REQUEST_T ;
typedef int SCIC_SDS_REMOTE_DEVICE_T ;
typedef TYPE_2__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,TYPE_1__*) ;

__attribute__((used)) static
SCI_STATUS FUNC_2(
   SCI_BASE_CONTROLLER_T *VAR_2,
   SCI_BASE_REMOTE_DEVICE_T *VAR_3,
   SCI_BASE_REQUEST_T *VAR_4
)
{
   U16 VAR_5;
   SCI_STATUS VAR_6;
   SCIC_SDS_CONTROLLER_T *VAR_7;
   SCIC_SDS_REQUEST_T *VAR_8;
   SCIC_SDS_REMOTE_DEVICE_T *VAR_9;

   VAR_7 = (SCIC_SDS_CONTROLLER_T *)VAR_2;
   VAR_8 = (SCIC_SDS_REQUEST_T *)VAR_4;
   VAR_9 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_3;

   VAR_6 = FUNC_1(
                  VAR_7, VAR_9, VAR_8);

   if (VAR_6 == VAR_1)
   {
      VAR_5 = FUNC_0(VAR_8->io_tag);
      VAR_7->io_request_table[VAR_5] = VAR_0;
   }

   return VAR_6;
}
