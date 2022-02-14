
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int rnc; } ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCIC_SDS_REQUEST_T ;
typedef TYPE_1__ SCIC_SDS_REMOTE_DEVICE_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_6(
   SCI_BASE_REMOTE_DEVICE_T *VAR_2,
   SCI_BASE_REQUEST_T *VAR_3
)
{
   SCI_STATUS VAR_4 = VAR_0;
   SCIC_SDS_REQUEST_T *VAR_5 = (SCIC_SDS_REQUEST_T *)VAR_3;
   SCIC_SDS_REMOTE_DEVICE_T *VAR_6 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_2;

   VAR_4 = FUNC_5(VAR_5);
   if (VAR_4 == VAR_0)
   {
      VAR_4 = FUNC_0(
                  FUNC_2(VAR_6),
                  VAR_6,
                  VAR_5
               );

      if (VAR_4 == VAR_0)
      {
         FUNC_1(VAR_6);

         if (FUNC_3(VAR_6) == 0)
         {
            FUNC_4(
               VAR_6->rnc,
               VAR_1,
               VAR_6
            );
         }
      }
   }

   return VAR_4;
}
