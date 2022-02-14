
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_3__ {int state_machine; int mdl; int parent; } ;
typedef int SCI_PHYSICAL_MEMORY_DESCRIPTOR_T ;
typedef int SCI_MEMORY_DESCRIPTOR_LIST_HANDLE_T ;
typedef int SCI_BASE_STATE_T ;
typedef int SCI_BASE_OBJECT_T ;
typedef int SCI_BASE_LOGGER_T ;
typedef TYPE_1__ SCI_BASE_CONTROLLER_T ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(
   SCI_BASE_CONTROLLER_T * VAR_1,
   SCI_BASE_LOGGER_T * VAR_2,
   SCI_BASE_STATE_T * VAR_3,
   SCI_PHYSICAL_MEMORY_DESCRIPTOR_T * VAR_4,
   U32 VAR_5,
   SCI_MEMORY_DESCRIPTOR_LIST_HANDLE_T VAR_6
)
{
   FUNC_1((SCI_BASE_OBJECT_T *)VAR_1, VAR_2);

   FUNC_2(
      &VAR_1->state_machine,
      &VAR_1->parent,
      VAR_3,
      VAR_0
   );

   FUNC_0(&VAR_1->mdl, VAR_4, VAR_5, VAR_6);

   FUNC_3(&VAR_1->state_machine);
}
