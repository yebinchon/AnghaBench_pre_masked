
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int core_object; int status; TYPE_1__* device; } ;
struct TYPE_7__ {TYPE_3__ parent; } ;
struct TYPE_6__ {int domain; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_2__ SCIF_SAS_IO_REQUEST_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_3__*,int ) ;

__attribute__((used)) static
void FUNC_4(
   SCI_BASE_OBJECT_T *VAR_4
)
{
   SCIF_SAS_IO_REQUEST_T * VAR_5 = (SCIF_SAS_IO_REQUEST_T *)VAR_4;

   FUNC_0((
      FUNC_2(VAR_5),
      VAR_0 | VAR_1,
      "Domain:0x%x Device:0x%x IORequest:0x%x terminating\n",
      VAR_5->parent.device->domain, VAR_5->parent.device, VAR_5
   ));

   FUNC_1(
      &VAR_5->parent,
      VAR_3,
      VAR_2
   );

   VAR_5->parent.status = FUNC_3(
                             &VAR_5->parent, VAR_5->parent.core_object
                          );
}
