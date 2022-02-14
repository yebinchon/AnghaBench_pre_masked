
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ISCI_REMOTE_DEVICE {struct ISCI_DOMAIN* domain; int sci_object; } ;
struct ISCI_DOMAIN {struct ISCI_REMOTE_DEVICE* da_remote_device; } ;
typedef int SCI_SAS_IDENTIFY_ADDRESS_FRAME_PROTOCOLS_T ;
typedef int SCI_SAS_ADDRESS_T ;
typedef int SCI_DOMAIN_HANDLE_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ISCI_REMOTE_DEVICE*) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ,int *,int *) ;

void
FUNC_4(SCI_CONTROLLER_HANDLE_T VAR_0,
    SCI_DOMAIN_HANDLE_T VAR_1, SCI_SAS_ADDRESS_T *VAR_2,
    SCI_SAS_IDENTIFY_ADDRESS_FRAME_PROTOCOLS_T *VAR_3)
{
 struct ISCI_REMOTE_DEVICE *VAR_4;
 struct ISCI_DOMAIN *VAR_5 =
     (struct ISCI_DOMAIN *)FUNC_0(VAR_1);







 VAR_4 = VAR_5->da_remote_device;

 FUNC_2(VAR_1,
     (uint8_t*)VAR_4 + sizeof(struct ISCI_REMOTE_DEVICE),
     &(VAR_4->sci_object));

 FUNC_1(VAR_4->sci_object, VAR_4);

 FUNC_3(VAR_4->sci_object, VAR_2,
     VAR_3);






 VAR_4->domain = VAR_5;
}
