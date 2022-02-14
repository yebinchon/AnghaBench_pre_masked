
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct ifnet {int if_drv_flags; } ;
struct cpswp_softc {int unit; int vlan; int mii_callout; int mii; TYPE_3__* swsc; int init_uptime; struct ifnet* ifp; } ;
struct TYPE_13__ {int vid; } ;
struct TYPE_11__ {int running; } ;
struct TYPE_10__ {int running; } ;
struct TYPE_12__ {scalar_t__ dualemac; TYPE_2__ tx; TYPE_1__ rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (struct cpswp_softc*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int *,int ,int ,struct cpswp_softc*) ;
 int FUNC_9 (TYPE_3__*,int,int,int,int,int ) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (TYPE_3__*) ;
 TYPE_4__* VAR_6 ;
 int FUNC_13 (TYPE_3__*,int ,int) ;
 int FUNC_14 (struct cpswp_softc*,int) ;
 int VAR_7 ;
 int FUNC_15 (int *) ;
 int VAR_8 ;
 int FUNC_16 (int ) ;

__attribute__((used)) static void
FUNC_17(void *VAR_9)
{



 struct cpswp_softc *VAR_10 = VAR_9;
 struct ifnet *VAR_11;
 uint32_t VAR_12;

 FUNC_1(VAR_10->swsc, (""));
 FUNC_2(VAR_10);
 VAR_11 = VAR_10->ifp;
 if ((VAR_11->if_drv_flags & VAR_5) != 0)
  return;

 FUNC_15(&VAR_10->init_uptime);

 if (!VAR_10->swsc->rx.running && !VAR_10->swsc->tx.running) {

  FUNC_12(VAR_10->swsc);
  FUNC_10(VAR_10->swsc);
 }


 FUNC_13(VAR_10->swsc, FUNC_7(VAR_10->unit), 0x76543210);
 FUNC_13(VAR_10->swsc, FUNC_3(VAR_10->unit + 1),
     0x33221100);
 FUNC_13(VAR_10->swsc, FUNC_6(VAR_10->unit), 0x5f2);



 VAR_12 = FUNC_11(VAR_10->swsc, FUNC_5(VAR_10->unit));
 VAR_12 |= VAR_2;
 FUNC_13(VAR_10->swsc, FUNC_5(VAR_10->unit), VAR_12);


 FUNC_13(VAR_10->swsc, FUNC_0(VAR_10->unit + 1),
     VAR_1 | VAR_0);
 FUNC_14(VAR_10, 1);

 if (VAR_10->swsc->dualemac) {

  FUNC_13(VAR_10->swsc, FUNC_4(VAR_10->unit + 1),
      VAR_10->vlan & 0xfff);
  FUNC_9(VAR_10->swsc, VAR_10->vlan,
      (1 << (VAR_10->unit + 1)) | (1 << 0),
      (1 << (VAR_10->unit + 1)) | (1 << 0),
      (1 << (VAR_10->unit + 1)) | (1 << 0), 0);
 }

 FUNC_16(VAR_10->mii);
 FUNC_8(&VAR_10->mii_callout, VAR_8, VAR_7, VAR_10);
 VAR_11->if_drv_flags |= VAR_5;
 VAR_11->if_drv_flags &= ~VAR_4;
}
