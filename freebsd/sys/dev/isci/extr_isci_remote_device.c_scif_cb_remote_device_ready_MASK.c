
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef size_t uint32_t ;
struct ISCI_REMOTE_DEVICE {size_t index; } ;
struct ISCI_CONTROLLER {int sim; scalar_t__ has_been_scanned; struct ISCI_REMOTE_DEVICE** remote_device; } ;
typedef int SCI_REMOTE_DEVICE_HANDLE_T ;
typedef int SCI_DOMAIN_HANDLE_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ISCI_REMOTE_DEVICE*) ;
 void* FUNC_2 (int ) ;
 union ccb* FUNC_3 () ;
 int FUNC_4 (int *,int *,int ,size_t,int ) ;
 int FUNC_5 (union ccb*) ;

void
FUNC_6(SCI_CONTROLLER_HANDLE_T VAR_1,
    SCI_DOMAIN_HANDLE_T VAR_2, SCI_REMOTE_DEVICE_HANDLE_T VAR_3)
{
 struct ISCI_REMOTE_DEVICE *VAR_4 =
     FUNC_2(VAR_3);
 struct ISCI_CONTROLLER *VAR_5 =
     FUNC_2(VAR_1);
 uint32_t VAR_6 = VAR_4->index;

 if (VAR_5->remote_device[VAR_6] == ((void*)0)) {



  VAR_5->remote_device[VAR_6] =
      VAR_4;

  if (VAR_5->has_been_scanned) {






   union ccb *VAR_7 = FUNC_3();

   FUNC_4(&VAR_7->ccb_h.path, ((void*)0),
       FUNC_0(VAR_5->sim),
       VAR_4->index, VAR_0);

   FUNC_5(VAR_7);
  }
 }

 FUNC_1(VAR_4);
}
