
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t uint32_t ;
struct isci_softc {size_t controller_count; int device; int * controllers; int * handlers; struct ISCI_INTERRUPT_INFO* interrupt_info; } ;
struct ISCI_INTERRUPT_INFO {size_t rid; int * tag; int * res; int * interrupt_target_handle; int * handlers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ,int ,size_t*,int ) ;
 scalar_t__ FUNC_1 (int ,int *,int,int *,int ,struct ISCI_INTERRUPT_INFO*,int **) ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int ,size_t,int *) ;

__attribute__((used)) static int
FUNC_4(struct isci_softc *VAR_7)
{
 uint32_t VAR_8;

 FUNC_3(VAR_3,
     VAR_4, &VAR_7->handlers[0]);

 for (VAR_8 = 0; VAR_8 < VAR_7->controller_count;
     VAR_8++) {
  uint32_t VAR_9;
  uint8_t VAR_10 = VAR_8 *
      VAR_4;

  for (VAR_9 = 0; VAR_9 < VAR_4;
      VAR_9++) {
   struct ISCI_INTERRUPT_INFO *VAR_11 =
       &VAR_7->interrupt_info[VAR_10+VAR_9];

   VAR_11->handlers = &VAR_7->handlers[VAR_9];
   VAR_11->interrupt_target_handle =
       &VAR_7->controllers[VAR_8];

   VAR_11->rid = VAR_10+VAR_9+1;

   VAR_11->res = FUNC_0(VAR_7->device,
       VAR_5, &VAR_11->rid, VAR_2);
   if (VAR_11->res == ((void*)0)) {
    FUNC_2(0, "ISCI",
        "bus_alloc_resource failed\n");
    return (-1);
   }

   VAR_11->tag = ((void*)0);
   if (FUNC_1(VAR_7->device, VAR_11->res,
       VAR_1 | VAR_0, ((void*)0),
       VAR_6, VAR_11, &VAR_11->tag)) {
    FUNC_2(0, "ISCI",
        "bus_setup_intr failed\n");
    return (-1);
   }
  }
 }

 return (0);
}
