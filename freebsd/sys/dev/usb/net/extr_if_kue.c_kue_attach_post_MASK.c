
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_ether {int ue_eaddr; } ;
struct TYPE_4__ {int kue_macaddr; } ;
struct TYPE_3__ {int ue_dev; } ;
struct kue_softc {TYPE_2__ sc_desc; TYPE_1__ sc_ue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct kue_softc*,int ,int ,int ,TYPE_2__*,int) ;
 int FUNC_2 (struct kue_softc*) ;
 int FUNC_3 (struct kue_softc*) ;
 int FUNC_4 (int ,int ,int) ;
 struct kue_softc* FUNC_5 (struct usb_ether*) ;

__attribute__((used)) static void
FUNC_6(struct usb_ether *VAR_2)
{
 struct kue_softc *VAR_3 = FUNC_5(VAR_2);
 int VAR_4;


 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_3->sc_ue.ue_dev, "could not load firmware\n");

 }


 FUNC_3(VAR_3);


 FUNC_1(VAR_3, VAR_1, VAR_0,
     0, &VAR_3->sc_desc, sizeof(VAR_3->sc_desc));


 FUNC_4(VAR_2->ue_eaddr, VAR_3->sc_desc.kue_macaddr, sizeof(VAR_2->ue_eaddr));
}
