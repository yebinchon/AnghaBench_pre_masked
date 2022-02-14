
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int domain; } ;
struct TYPE_6__ {int state_machine; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef TYPE_1__ SCI_BASE_DOMAIN_T ;
typedef int SCIF_SAS_TASK_REQUEST_T ;
typedef TYPE_2__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_6(
   SCI_BASE_DOMAIN_T * VAR_3,
   SCI_BASE_REMOTE_DEVICE_T * VAR_4,
   SCI_BASE_REQUEST_T * VAR_5
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_6 = (SCIF_SAS_REMOTE_DEVICE_T*)
                                          VAR_4;
   SCIF_SAS_TASK_REQUEST_T * VAR_7 = (SCIF_SAS_TASK_REQUEST_T*)VAR_5;


   if (FUNC_5(VAR_7)
             == VAR_2)
   {


      FUNC_3(VAR_6->domain);

      return FUNC_4(VAR_3, VAR_4, VAR_5);
   }
   else{
      FUNC_0((
         FUNC_1(VAR_3),
         VAR_0,
         "Domain:0x%x Device:0x%x State:0x%x start task message invalid\n",
         VAR_3, VAR_4,
         FUNC_2(&VAR_3->state_machine)
      ));

      return VAR_1;
   }
}
