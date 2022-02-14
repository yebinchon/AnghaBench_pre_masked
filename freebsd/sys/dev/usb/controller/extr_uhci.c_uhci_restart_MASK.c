
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int bus_mtx; } ;
struct TYPE_8__ {int pframes_pc; } ;
struct TYPE_9__ {TYPE_5__ sc_bus; TYPE_1__ sc_hw; } ;
typedef TYPE_2__ uhci_softc_t ;
struct usb_page_search {int physaddr; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int VAR_7 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ,struct usb_page_search*) ;

__attribute__((used)) static uint8_t
FUNC_7(uhci_softc_t *VAR_8)
{
 struct usb_page_search VAR_9;

 FUNC_3(&VAR_8->sc_bus, VAR_0);

   if (FUNC_2(VAR_8, VAR_1) & VAR_3) {
  FUNC_0(2, "Already started\n");
  return (0);
 }

 FUNC_0(2, "Restarting\n");

 FUNC_6(&VAR_8->sc_hw.pframes_pc, 0, &VAR_9);


 FUNC_4(VAR_8, VAR_4, VAR_9.physaddr);




 FUNC_1(VAR_8, (VAR_2 | VAR_3));



 FUNC_5(&VAR_8->sc_bus.bus_mtx, VAR_7 / 100);



 if (FUNC_2(VAR_8, VAR_5) & VAR_6) {
  FUNC_0(2, "Failed\n");
  return (1);
 }
 return (0);
}
