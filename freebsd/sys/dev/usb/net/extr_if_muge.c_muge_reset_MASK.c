
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
struct usb_config_descriptor {int bConfigurationValue; } ;
struct TYPE_2__ {int ue_udev; } ;
struct muge_softc {TYPE_1__ sc_ue; int sc_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (struct muge_softc*) ;
 int FUNC_1 (struct muge_softc*,char*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 struct usb_config_descriptor* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *,int ) ;

__attribute__((used)) static void
FUNC_5(struct muge_softc *VAR_1)
{
 struct usb_config_descriptor *VAR_2;
 usb_error_t VAR_3;

 VAR_2 = FUNC_3(VAR_1->sc_ue.ue_udev);

 VAR_3 = FUNC_4(VAR_1->sc_ue.ue_udev, &VAR_1->sc_mtx,
     VAR_2->bConfigurationValue);
 if (VAR_3)
  FUNC_1(VAR_1, "reset failed (ignored)\n");


 FUNC_2(&VAR_1->sc_ue, VAR_0 / 100);


 FUNC_0(VAR_1);
}
