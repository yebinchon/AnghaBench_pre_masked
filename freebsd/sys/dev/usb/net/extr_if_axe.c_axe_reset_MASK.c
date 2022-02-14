
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
struct usb_config_descriptor {int bConfigurationValue; } ;
struct TYPE_2__ {int ue_udev; } ;
struct axe_softc {int sc_flags; TYPE_1__ sc_ue; int sc_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct axe_softc*) ;
 int FUNC_2 (struct axe_softc*) ;
 int FUNC_3 (struct axe_softc*) ;
 int FUNC_4 (struct axe_softc*) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_1__*,int) ;
 struct usb_config_descriptor* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int *,int ) ;

__attribute__((used)) static void
FUNC_8(struct axe_softc *VAR_5)
{
 struct usb_config_descriptor *VAR_6;
 usb_error_t VAR_7;

 VAR_6 = FUNC_6(VAR_5->sc_ue.ue_udev);

 VAR_7 = FUNC_7(VAR_5->sc_ue.ue_udev, &VAR_5->sc_mtx,
     VAR_6->bConfigurationValue);
 if (VAR_7)
  FUNC_0("reset failed (ignored)\n");


 FUNC_5(&VAR_5->sc_ue, VAR_4 / 100);


 if (VAR_5->sc_flags & VAR_0)
  FUNC_1(VAR_5);
 else if (VAR_5->sc_flags & VAR_1)
  FUNC_2(VAR_5);
 else if (VAR_5->sc_flags & VAR_2)
  FUNC_3(VAR_5);
 else if (VAR_5->sc_flags & VAR_3)
  FUNC_4(VAR_5);
}
