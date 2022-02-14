
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
struct usb_config_descriptor {int bConfigurationValue; } ;
struct TYPE_2__ {int ue_udev; } ;
struct kue_softc {TYPE_1__ sc_ue; int sc_mtx; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 struct usb_config_descriptor* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct kue_softc *VAR_1)
{
 struct usb_config_descriptor *VAR_2;
 usb_error_t VAR_3;

 VAR_2 = FUNC_2(VAR_1->sc_ue.ue_udev);

 VAR_3 = FUNC_3(VAR_1->sc_ue.ue_udev, &VAR_1->sc_mtx,
     VAR_2->bConfigurationValue);
 if (VAR_3)
  FUNC_0("reset failed (ignored)\n");


 FUNC_1(&VAR_1->sc_ue, VAR_0 / 100);
}
