
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct usb_xfer {scalar_t__ endpointno; TYPE_1__* xroot; } ;
struct saf1761_otg_softc {int sc_intr_enable; } ;
struct TYPE_2__ {int bus; } ;


 int FUNC_0 (int,char*,scalar_t__,scalar_t__) ;
 struct saf1761_otg_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct saf1761_otg_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(struct usb_xfer *VAR_4, uint8_t VAR_5)
{
 struct saf1761_otg_softc *VAR_6 = FUNC_1(VAR_4->xroot->bus);
 uint8_t VAR_7 = (VAR_4->endpointno & VAR_2);
 uint32_t VAR_8;

 FUNC_0(15, "endpoint=%d set=%d\n", VAR_4->endpointno, VAR_5);

 if (VAR_7 == 0) {
  VAR_8 = FUNC_3(0) |
      FUNC_4(0) |
      VAR_1;
 } else if (VAR_4->endpointno & VAR_3) {
  VAR_8 = FUNC_4(VAR_7);
 } else {
  VAR_8 = FUNC_3(VAR_7);
 }

 if (VAR_5)
  VAR_6->sc_intr_enable |= VAR_8;
 else
  VAR_6->sc_intr_enable &= ~VAR_8;

 FUNC_2(VAR_6, VAR_0, VAR_6->sc_intr_enable);
}
