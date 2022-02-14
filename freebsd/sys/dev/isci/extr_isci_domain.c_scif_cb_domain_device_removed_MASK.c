
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int uint32_t ;
struct ISCI_REMOTE_DEVICE {size_t index; } ;
struct ISCI_DOMAIN {struct ISCI_REMOTE_DEVICE* da_remote_device; } ;
struct ISCI_CONTROLLER {int remote_device_pool; int ** remote_device; int sim; } ;
typedef int SCI_REMOTE_DEVICE_HANDLE_T ;
typedef int SCI_DOMAIN_HANDLE_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,struct ISCI_REMOTE_DEVICE*) ;
 int FUNC_3 (int ) ;
 union ccb* FUNC_4 () ;
 int FUNC_5 (int *,int *,int ,size_t,int ) ;
 int FUNC_6 (union ccb*) ;

void
FUNC_7(SCI_CONTROLLER_HANDLE_T VAR_1,
    SCI_DOMAIN_HANDLE_T VAR_2, SCI_REMOTE_DEVICE_HANDLE_T VAR_3)
{
 struct ISCI_REMOTE_DEVICE *VAR_4 =
     (struct ISCI_REMOTE_DEVICE *)FUNC_1(VAR_3);
 struct ISCI_DOMAIN *VAR_5 =
     (struct ISCI_DOMAIN *)FUNC_1(VAR_2);
 struct ISCI_CONTROLLER *VAR_6 =
     (struct ISCI_CONTROLLER *)FUNC_1(VAR_1);
 uint32_t VAR_7 = FUNC_0(VAR_6->sim);
 union ccb *VAR_8 = FUNC_4();

 VAR_6->remote_device[VAR_4->index] = ((void*)0);

 FUNC_5(&VAR_8->ccb_h.path, ((void*)0), VAR_7,
     VAR_4->index, VAR_0);

 FUNC_6(VAR_8);

 FUNC_3(VAR_3);





 if (VAR_4 != VAR_5->da_remote_device)
  FUNC_2(VAR_6->remote_device_pool,
      VAR_4);
}
