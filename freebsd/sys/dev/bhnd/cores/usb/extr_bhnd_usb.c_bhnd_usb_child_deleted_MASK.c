
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_usb_devinfo {int sdi_rl; int sdi_irq; scalar_t__ sdi_irq_mapped; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct bhnd_usb_devinfo* FUNC_1 (int ) ;
 int FUNC_2 (struct bhnd_usb_devinfo*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_1, device_t VAR_2)
{
 struct bhnd_usb_devinfo *VAR_3;

 if ((VAR_3 = FUNC_1(VAR_2)) == ((void*)0))
  return;

 if (VAR_3->sdi_irq_mapped)
  FUNC_0(VAR_1, VAR_3->sdi_irq);

 FUNC_3(&VAR_3->sdi_rl);
 FUNC_2(VAR_3, VAR_0);
}
