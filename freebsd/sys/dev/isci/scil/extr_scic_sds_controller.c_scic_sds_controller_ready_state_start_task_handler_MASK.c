
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int U16 ;
struct TYPE_8__ {TYPE_1__** io_request_table; } ;
struct TYPE_7__ {int io_tag; } ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCI_BASE_CONTROLLER_T ;
typedef TYPE_1__ SCIC_SDS_REQUEST_T ;
typedef int SCIC_SDS_REMOTE_DEVICE_T ;
typedef TYPE_2__ SCIC_SDS_CONTROLLER_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static
SCI_STATUS FUNC_4(
   SCI_BASE_CONTROLLER_T *VAR_2,
   SCI_BASE_REMOTE_DEVICE_T *VAR_3,
   SCI_BASE_REQUEST_T *VAR_4,
   U16 VAR_5
)
{
   SCIC_SDS_CONTROLLER_T *VAR_6 = (SCIC_SDS_CONTROLLER_T *)
                                               VAR_2;
   SCIC_SDS_REQUEST_T *VAR_7 = (SCIC_SDS_REQUEST_T *)
                                               VAR_4;
   SCIC_SDS_REMOTE_DEVICE_T *VAR_8 = (SCIC_SDS_REMOTE_DEVICE_T *)
                                               VAR_3;
   SCI_STATUS VAR_9;

   VAR_9 = FUNC_2(
               VAR_6, VAR_8, VAR_7
            );

   if (VAR_9 == VAR_1)
   {
      VAR_6->io_request_table[
         FUNC_1(VAR_7->io_tag)] = VAR_7;

      FUNC_0(
         VAR_6,
         FUNC_3(VAR_7)
      );
   }
   else if (VAR_9 == VAR_0)
   {
      VAR_6->io_request_table[
         FUNC_1(VAR_7->io_tag)] = VAR_7;




      VAR_9 = VAR_1;
   }
   return VAR_9;
}
