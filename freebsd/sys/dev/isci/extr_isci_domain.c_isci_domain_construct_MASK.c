
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ISCI_DOMAIN {int sci_object; struct ISCI_CONTROLLER* controller; int index; } ;
struct ISCI_CONTROLLER {int scif_controller_handle; } ;


 int FUNC_0 (int ,void*) ;
 int FUNC_1 (int ,int ,int *) ;

void
FUNC_2(struct ISCI_DOMAIN *VAR_0, uint32_t VAR_1,
    struct ISCI_CONTROLLER *VAR_2)
{

 FUNC_1( VAR_2->scif_controller_handle,
     VAR_1, &VAR_0->sci_object);

 VAR_0->index = VAR_1;
 VAR_0->controller = VAR_2;
 FUNC_0(VAR_0->sci_object, (void *)VAR_0);
}
