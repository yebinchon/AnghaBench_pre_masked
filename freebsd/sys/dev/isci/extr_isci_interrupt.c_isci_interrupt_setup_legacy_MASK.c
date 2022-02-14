
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_softc {int num_interrupts; int device; int * handlers; struct ISCI_INTERRUPT_INFO* interrupt_info; } ;
struct ISCI_INTERRUPT_INFO {int * tag; int * res; scalar_t__ rid; void* interrupt_target_handle; int * handlers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_1 (int ,int *,int,int *,int ,struct ISCI_INTERRUPT_INFO*,int **) ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_4(struct isci_softc *VAR_7)
{
 struct ISCI_INTERRUPT_INFO *VAR_8 = &VAR_7->interrupt_info[0];

 VAR_7->num_interrupts = 1;

 FUNC_3(VAR_4,
     0, &VAR_7->handlers[0]);

 VAR_8->handlers = &VAR_7->handlers[0];
 VAR_8->rid = 0;
 VAR_8->interrupt_target_handle = (void *)VAR_7;

 VAR_8->res = FUNC_0(VAR_7->device, VAR_5,
     &VAR_8->rid, VAR_3|VAR_2);

 if (VAR_8->res == ((void*)0)) {
  FUNC_2(0, "ISCI", "bus_alloc_resource failed\n");
  return (-1);
 }

 VAR_8->tag = ((void*)0);
 if (FUNC_1(VAR_7->device, VAR_8->res,
     VAR_1 | VAR_0, ((void*)0), VAR_6,
     VAR_8, &VAR_8->tag)) {
  FUNC_2(0, "ISCI", "bus_setup_intr failed\n");
  return (-1);
 }

 return (0);
}
