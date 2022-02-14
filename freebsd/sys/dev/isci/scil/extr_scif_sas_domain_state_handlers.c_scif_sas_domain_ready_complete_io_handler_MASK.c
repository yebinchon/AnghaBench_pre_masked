
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int parent; TYPE_2__* state_handlers; } ;
struct TYPE_7__ {int parent; int list_element; } ;
struct TYPE_5__ {int (* complete_io_handler ) (int *,int *) ;} ;
struct TYPE_6__ {TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCI_BASE_DOMAIN_T ;
typedef TYPE_3__ SCIF_SAS_REQUEST_T ;
typedef TYPE_4__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_4(
   SCI_BASE_DOMAIN_T * VAR_2,
   SCI_BASE_REMOTE_DEVICE_T * VAR_3,
   SCI_BASE_REQUEST_T * VAR_4
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_5 = (SCIF_SAS_REMOTE_DEVICE_T*)
                                          VAR_3;
   SCIF_SAS_REQUEST_T * VAR_6= (SCIF_SAS_REQUEST_T*) VAR_4;

   FUNC_0(*(
      FUNC_1(VAR_2),
      VAR_0 | VAR_1,
      "scif_sas_domain_ready_complete_io_handler(0x%x, 0x%x, 0x%x) enter\n",
      VAR_2, VAR_3, VAR_4
   ));


   FUNC_2(&VAR_6->list_element);

   return VAR_5->state_handlers->parent.complete_io_handler(
             &VAR_5->parent, &VAR_6->parent
          );
}
