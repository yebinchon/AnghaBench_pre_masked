
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int core_object; int status; } ;
struct TYPE_4__ {TYPE_2__ parent; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIF_SAS_TASK_REQUEST_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_1 ;

__attribute__((used)) static
void FUNC_2(
   SCI_BASE_OBJECT_T *VAR_2
)
{
   SCIF_SAS_TASK_REQUEST_T * VAR_3 = (SCIF_SAS_TASK_REQUEST_T *)VAR_2;

   FUNC_0(
      &VAR_3->parent,
      VAR_1,
      VAR_0
   );


   VAR_3->parent.status = FUNC_1(
                               &VAR_3->parent, VAR_3->parent.core_object
                            );
}
