
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int controller; } ;
struct TYPE_6__ {TYPE_2__* domain; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_2__*,TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static
void FUNC_4(
   SCI_BASE_OBJECT_T *VAR_4
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_5 = (SCIF_SAS_REMOTE_DEVICE_T *)VAR_4;

   FUNC_1(
      VAR_5,
      VAR_3,
      VAR_2
   );

   FUNC_0((
      FUNC_2(VAR_5),
      VAR_0 | VAR_1,
      "Domain:0x%x Device:0x%x device ready\n",
      VAR_5->domain, VAR_5
   ));


   FUNC_3(
      VAR_5->domain->controller, VAR_5->domain, VAR_5
   );
}
