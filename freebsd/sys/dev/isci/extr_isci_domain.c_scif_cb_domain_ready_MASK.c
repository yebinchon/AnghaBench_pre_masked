
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct ISCI_REMOTE_DEVICE {struct ISCI_DOMAIN* domain; } ;
struct ISCI_DOMAIN {int dummy; } ;
struct ISCI_CONTROLLER {struct ISCI_REMOTE_DEVICE** remote_device; } ;
typedef int SCI_DOMAIN_HANDLE_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;


 size_t VAR_0 ;
 int FUNC_0 (struct ISCI_REMOTE_DEVICE*) ;
 void* FUNC_1 (int ) ;

void
FUNC_2(SCI_CONTROLLER_HANDLE_T VAR_1,
    SCI_DOMAIN_HANDLE_T VAR_2)
{
 uint32_t VAR_3;
 struct ISCI_DOMAIN *VAR_4 = FUNC_1(VAR_2);
 struct ISCI_CONTROLLER *VAR_5 =
     FUNC_1(VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct ISCI_REMOTE_DEVICE *VAR_6 =
      VAR_5->remote_device[VAR_3];

  if (VAR_6 != ((void*)0) &&
      VAR_6->domain == VAR_4)
   FUNC_0(VAR_6);
 }
}
