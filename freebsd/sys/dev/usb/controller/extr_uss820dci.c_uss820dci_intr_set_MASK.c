
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct uss820dci_softc {int dummy; } ;
struct TYPE_4__ {scalar_t__ control_hdr; scalar_t__ control_xfr; } ;
struct usb_xfer {int endpointno; TYPE_2__ flags_int; TYPE_1__* xroot; } ;
struct TYPE_3__ {int bus; } ;


 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct uss820dci_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct uss820dci_softc*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct uss820dci_softc*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct usb_xfer *VAR_4, uint8_t VAR_5)
{
 struct uss820dci_softc *VAR_6 = FUNC_1(VAR_4->xroot->bus);
 uint8_t VAR_7 = (VAR_4->endpointno & VAR_0);
 uint8_t VAR_8;
 uint8_t VAR_9;

 FUNC_0(15, "endpoint 0x%02x\n", VAR_4->endpointno);

 if (VAR_7 > 3) {
  VAR_8 = VAR_3;
 } else {
  VAR_8 = VAR_2;
 }

 VAR_7 &= 3;
 VAR_7 = 1 << (2 * VAR_7);

 if (VAR_4->flags_int.control_xfr) {
  if (VAR_4->flags_int.control_hdr) {
   VAR_7 <<= 1;
  } else {
   VAR_7 |= (VAR_7 << 1);
  }
 } else {
  if (!(VAR_4->endpointno & VAR_1)) {
   VAR_7 <<= 1;
  }
 }
 VAR_9 = FUNC_2(VAR_6, VAR_8);
 if (VAR_5) {
  VAR_9 |= VAR_7;
 } else {
  VAR_9 &= ~VAR_7;
 }
 FUNC_3(VAR_6, VAR_8, VAR_9);
}
