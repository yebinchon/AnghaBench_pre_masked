
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ISCI_REMOTE_DEVICE {struct ISCI_DOMAIN* domain; int sci_object; } ;
struct ISCI_DOMAIN {int dummy; } ;
struct ISCI_CONTROLLER {int remote_device_pool; } ;
typedef int SMP_RESPONSE_DISCOVER_T ;
typedef int SCI_REMOTE_DEVICE_HANDLE_T ;
typedef int SCI_DOMAIN_HANDLE_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ISCI_REMOTE_DEVICE*) ;
 int FUNC_2 (int ,struct ISCI_REMOTE_DEVICE*) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ,int ,int *) ;

void
FUNC_5(SCI_CONTROLLER_HANDLE_T VAR_0,
    SCI_DOMAIN_HANDLE_T VAR_1, SCI_REMOTE_DEVICE_HANDLE_T VAR_2,
    SMP_RESPONSE_DISCOVER_T *VAR_3)
{
 struct ISCI_REMOTE_DEVICE *VAR_4;
 struct ISCI_DOMAIN *VAR_5 =
  (struct ISCI_DOMAIN *)FUNC_0(VAR_1);
 struct ISCI_CONTROLLER *VAR_6 =
  (struct ISCI_CONTROLLER *)FUNC_0(VAR_0);

 FUNC_2(VAR_6->remote_device_pool, VAR_4);

 FUNC_3( VAR_1,
     (uint8_t*)VAR_4 + sizeof(struct ISCI_REMOTE_DEVICE),
     &(VAR_4->sci_object));

 FUNC_1(VAR_4->sci_object, VAR_4);

 FUNC_4(VAR_4->sci_object,
     VAR_2, VAR_3);





 VAR_4->domain = VAR_5;
}
