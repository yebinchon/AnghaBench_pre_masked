
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int16_t ;
struct TYPE_2__ {scalar_t__ xl_tx_cnt; int * xl_tx_head; } ;
struct xl_softc {scalar_t__ xl_wdog_timer; scalar_t__ xl_type; int xl_dev; TYPE_1__ xl_cdata; struct ifnet* xl_ifp; } ;
struct ifnet {int if_snd; int if_drv_flags; } ;


 int FUNC_0 (struct xl_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct xl_softc*) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct ifnet*,int ,int) ;
 int FUNC_6 (struct xl_softc*) ;
 int FUNC_7 (struct xl_softc*) ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (struct xl_softc*) ;
 int FUNC_11 (struct xl_softc*) ;
 int FUNC_12 (struct xl_softc*) ;

__attribute__((used)) static int
FUNC_13(struct xl_softc *VAR_6)
{
 struct ifnet *VAR_7 = VAR_6->xl_ifp;
 u_int16_t VAR_8 = 0;
 int VAR_9;

 FUNC_2(VAR_6);

 if (VAR_6->xl_wdog_timer == 0 || --VAR_6->xl_wdog_timer != 0)
  return (0);

 FUNC_7(VAR_6);
 FUNC_10(VAR_6);
 VAR_9 = 0;
 if (VAR_6->xl_type == VAR_4) {
  FUNC_12(VAR_6);
  if (VAR_6->xl_cdata.xl_tx_cnt == 0)
   VAR_9++;
 } else {
  FUNC_11(VAR_6);
  if (VAR_6->xl_cdata.xl_tx_head == ((void*)0))
   VAR_9++;
 }
 if (VAR_9 != 0) {
  FUNC_4(VAR_6->xl_dev,
      "watchdog timeout (missed Tx interrupts) -- recovering\n");
  return (0);
 }

 FUNC_5(VAR_7, VAR_1, 1);
 FUNC_3(4);
 VAR_8 = FUNC_0(VAR_6, VAR_5);
 FUNC_4(VAR_6->xl_dev, "watchdog timeout\n");

 if (VAR_8 & VAR_3)
  FUNC_4(VAR_6->xl_dev,
      "no carrier - transceiver cable problem?\n");

 VAR_7->if_drv_flags &= ~VAR_2;
 FUNC_6(VAR_6);

 if (!FUNC_1(&VAR_7->if_snd)) {
  if (VAR_6->xl_type == VAR_4)
   FUNC_8(VAR_7);
  else
   FUNC_9(VAR_7);
 }

 return (VAR_0);
}
