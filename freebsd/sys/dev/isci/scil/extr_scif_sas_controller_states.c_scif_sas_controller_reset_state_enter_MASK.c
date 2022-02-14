
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t U8 ;
typedef size_t U16 ;
struct TYPE_11__ {int list_element; } ;
struct TYPE_10__ {int lock; } ;
struct TYPE_9__ {TYPE_2__ hprq; int internal_request_entries; TYPE_6__* smp_phy_array; int smp_phy_memory_list; int * domains; int remote_device_pool_elements; int free_remote_device_pool; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_6__*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_8 (int *,size_t,TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*,int ) ;

__attribute__((used)) static
void FUNC_10(
   SCI_BASE_OBJECT_T * VAR_6
)
{
   SCIF_SAS_CONTROLLER_T * VAR_7 = (SCIF_SAS_CONTROLLER_T *)VAR_6;
   U8 VAR_8;
   U16 VAR_9;

   FUNC_0(
      VAR_7,
      VAR_5,
      VAR_2
   );

   FUNC_9(
      &VAR_7->hprq, FUNC_2(VAR_7)
   );



   FUNC_1(
      &VAR_7->free_remote_device_pool,
      VAR_7->remote_device_pool_elements,
      VAR_4
   );


   for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
   {
      FUNC_8(
         &VAR_7->domains[VAR_8], VAR_8, VAR_7
      );
   }


   FUNC_4(&VAR_7->smp_phy_memory_list);

   for (VAR_9 = 0;
        VAR_9 < VAR_1;
        VAR_9++)
   {
      FUNC_3(
         &VAR_7->smp_phy_array[VAR_9],
         &(VAR_7->smp_phy_array[VAR_9].list_element)
      );


      FUNC_5(
         (&(VAR_7->smp_phy_memory_list)),
         (&(VAR_7->smp_phy_array[VAR_9].list_element))
      );
   }

   FUNC_7(VAR_7);

   VAR_7->internal_request_entries =
      VAR_0;





   FUNC_6(VAR_7, &VAR_7->hprq.lock);
}
