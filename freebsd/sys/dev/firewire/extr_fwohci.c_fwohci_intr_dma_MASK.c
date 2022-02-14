
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct TYPE_4__ {int dev; } ;
struct fwohci_softc {int cycle_lost; int atrs; int atrq; int arrq; int arrs; int itstat; TYPE_2__ fc; struct fwohci_dbch* ir; int irstat; } ;
struct TYPE_3__ {int flag; } ;
struct fwohci_dbch {TYPE_1__ xferq; } ;
struct firewire_comm {int nisodma; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct fwohci_softc*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct fwohci_softc*,int ) ;
 int FUNC_4 (struct fwohci_softc*,int ) ;
 int FUNC_5 (struct fwohci_softc*,int *,int) ;
 int FUNC_6 (struct fwohci_softc*,int) ;
 int FUNC_7 (struct fwohci_softc*,int) ;
 int FUNC_8 (struct fwohci_softc*,int *) ;

__attribute__((used)) static void
FUNC_9(struct fwohci_softc *VAR_16, uint32_t VAR_17, int VAR_18)
{
 uint32_t VAR_19, VAR_20;
 u_int VAR_21;
 struct firewire_comm *VAR_22 = (struct firewire_comm *)VAR_16;

 if (VAR_17 & VAR_8) {
  VAR_19 = FUNC_1(&VAR_16->irstat);
  for (VAR_21 = 0; VAR_21 < VAR_22->nisodma; VAR_21++) {
   struct fwohci_dbch *VAR_23;

   if ((VAR_19 & (1 << VAR_21)) != 0) {
    VAR_23 = &VAR_16->ir[VAR_21];
    if ((VAR_23->xferq.flag & VAR_3) == 0) {
     FUNC_2(VAR_16->fc.dev,
      "dma(%d) not active\n", VAR_21);
     continue;
    }
    FUNC_6(VAR_16, VAR_21);
   }
  }
 }
 if (VAR_17 & VAR_9) {
  VAR_20 = FUNC_1(&VAR_16->itstat);
  for (VAR_21 = 0; VAR_21 < VAR_22->nisodma; VAR_21++) {
   if ((VAR_20 & (1 << VAR_21)) != 0) {
    FUNC_7(VAR_16, VAR_21);
   }
  }
 }
 if (VAR_17 & VAR_11) {




  FUNC_5(VAR_16, &VAR_16->arrs, VAR_18);
 }
 if (VAR_17 & VAR_10) {




  FUNC_5(VAR_16, &VAR_16->arrq, VAR_18);
 }
 if (VAR_17 & VAR_5) {
  if (VAR_16->cycle_lost >= 0)
   VAR_16->cycle_lost++;
  if (VAR_16->cycle_lost > 10) {
   VAR_16->cycle_lost = -1;



   FUNC_0(VAR_16, VAR_2, VAR_5);
   FUNC_2(VAR_22->dev, "too many cycles lost, "
    "no cycle master present?\n");
  }
 }
 if (VAR_17 & VAR_6) {
  FUNC_8(VAR_16, &(VAR_16->atrq));
 }
 if (VAR_17 & VAR_7) {
  FUNC_8(VAR_16, &(VAR_16->atrs));
 }
 if (VAR_17 & VAR_14) {
  FUNC_2(VAR_22->dev, "posted write error\n");
 }
 if (VAR_17 & VAR_12) {
  FUNC_2(VAR_22->dev, "unrecoverable error\n");
 }
 if (VAR_17 & VAR_13) {
  FUNC_2(VAR_22->dev, "phy int\n");
 }
}
