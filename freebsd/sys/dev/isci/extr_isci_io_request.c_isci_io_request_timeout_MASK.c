
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ISCI_REMOTE_DEVICE {TYPE_2__* domain; } ;
struct TYPE_3__ {int remote_device_handle; } ;
struct ISCI_IO_REQUEST {TYPE_1__ parent; } ;
struct ISCI_CONTROLLER {int lock; } ;
struct TYPE_4__ {struct ISCI_CONTROLLER* controller; } ;


 int FUNC_0 (struct ISCI_REMOTE_DEVICE*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

void
FUNC_4(void *VAR_0)
{
 struct ISCI_IO_REQUEST *VAR_1 = (struct ISCI_IO_REQUEST *)VAR_0;
 struct ISCI_REMOTE_DEVICE *VAR_2 = (struct ISCI_REMOTE_DEVICE *)
  FUNC_3(VAR_1->parent.remote_device_handle);
 struct ISCI_CONTROLLER *VAR_3 = VAR_2->domain->controller;

 FUNC_1(&VAR_3->lock);
 FUNC_0(VAR_2, ((void*)0));
 FUNC_2(&VAR_3->lock);
}
