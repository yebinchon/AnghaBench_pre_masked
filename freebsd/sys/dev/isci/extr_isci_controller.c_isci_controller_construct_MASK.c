
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct isci_softc {int sci_library_handle; } ;
struct ISCI_TIMER {int dummy; } ;
struct ISCI_CONTROLLER {int unmap_buffer_pool; int timer_pool; scalar_t__ timer_memory; int * domain; int lock; int pending_device_reset_list; scalar_t__ initial_discovery_mask; int * sim; void* release_queued_ccbs; void* is_frozen; void* is_started; int scif_controller_handle; struct isci_softc* isci; } ;
typedef int SCI_CONTROLLER_HANDLE_T ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,size_t,struct ISCI_CONTROLLER*) ;
 scalar_t__ FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *,char*,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,void*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int *) ;

void FUNC_9(struct ISCI_CONTROLLER *VAR_7,
    struct isci_softc *VAR_8)
{
 SCI_CONTROLLER_HANDLE_T VAR_9;

 FUNC_8(VAR_8->sci_library_handle,
     &VAR_9);

 FUNC_7(VAR_8->sci_library_handle,
     VAR_9, ((void*)0));

 VAR_7->isci = VAR_8;
 VAR_7->scif_controller_handle = VAR_9;





 FUNC_4(VAR_9, (void *)VAR_7);

 VAR_7->is_started = VAR_0;
 VAR_7->is_frozen = VAR_0;
 VAR_7->release_queued_ccbs = VAR_0;
 VAR_7->sim = ((void*)0);
 VAR_7->initial_discovery_mask = 0;

 FUNC_3(&VAR_7->pending_device_reset_list);

 FUNC_2(&VAR_7->lock, "isci", ((void*)0), VAR_1);

 uint32_t VAR_10;

 for(VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  FUNC_0( &VAR_7->domain[VAR_10],
      VAR_10, VAR_7);
 }

 VAR_7->timer_memory = FUNC_1(
     sizeof(struct ISCI_TIMER) * VAR_6, VAR_2,
     VAR_3 | VAR_4);

 FUNC_5(VAR_7->timer_pool);

 struct ISCI_TIMER *VAR_11 = (struct ISCI_TIMER *)
     VAR_7->timer_memory;

 for ( int VAR_12 = 0; VAR_12 < VAR_6; VAR_12++ ) {
  FUNC_6(VAR_7->timer_pool, VAR_11++);
 }

 FUNC_5(VAR_7->unmap_buffer_pool);
}
