
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct fwohci_softc {int intmask; TYPE_1__ fc; } ;
struct firewire_comm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fwohci_softc*,int ,int ) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_2(struct firewire_comm *VAR_4, int VAR_5)
{
 struct fwohci_softc *VAR_6;

 VAR_6 = (struct fwohci_softc *)VAR_4;
 if (VAR_3)
  FUNC_1(VAR_6->fc.dev, "fwohci_set_intr: %d\n", VAR_5);
 if (VAR_5) {
  VAR_6->intmask |= VAR_2;
  FUNC_0(VAR_6, VAR_0, VAR_2);
 } else {
  VAR_6->intmask &= ~VAR_2;
  FUNC_0(VAR_6, VAR_1, VAR_2);
 }
}
