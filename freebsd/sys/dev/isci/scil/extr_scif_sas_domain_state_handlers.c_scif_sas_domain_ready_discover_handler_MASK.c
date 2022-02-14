
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* U32 ;
struct TYPE_4__ {int status; void* timeout; int timer; void* device_timeout; } ;
struct TYPE_5__ {TYPE_1__ operation; int controller; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_DOMAIN_T ;
typedef TYPE_2__ SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,void*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static
SCI_STATUS FUNC_4(
   SCI_BASE_DOMAIN_T * VAR_3,
   U32 VAR_4,
   U32 VAR_5
)
{
   SCIF_SAS_DOMAIN_T * VAR_6 = (SCIF_SAS_DOMAIN_T *)VAR_3;

   FUNC_0((
      FUNC_1(VAR_3),
      VAR_0 | VAR_1,
      "scif_sas_domain_ready_discover_handler(0x%x, 0x%x, 0x%x) enter\n",
      VAR_3, VAR_4, VAR_5
   ));

   VAR_6->operation.timeout = VAR_4;
   VAR_6->operation.device_timeout = VAR_5;
   VAR_6->operation.status = VAR_2;

   FUNC_2(
      VAR_6->controller,
      VAR_6->operation.timer,
      VAR_6->operation.timeout
   );

   FUNC_3(VAR_6);

   return VAR_6->operation.status;
}
