
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ifq_head; } ;
struct ifnet {TYPE_1__ if_snd; } ;
struct TYPE_4__ {struct ifnet* ifp; } ;
struct fwe_softc {int xferlist; TYPE_2__ eth_softc; } ;
struct fw_xfer {scalar_t__ resp; int mbuf; scalar_t__ sc; } ;


 int FUNC_0 (struct ifnet*,char*,scalar_t__) ;
 int FUNC_1 (struct fwe_softc*) ;
 int FUNC_2 (struct fwe_softc*) ;
 int VAR_0 ;
 int FUNC_3 (int *,struct fw_xfer*,int ) ;
 int FUNC_4 (struct fw_xfer*) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct ifnet*,int ,int) ;
 int VAR_1 ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10(struct fw_xfer *VAR_2)
{
 struct fwe_softc *VAR_3;
 struct ifnet *VAR_4;
 int VAR_5;

 VAR_3 = (struct fwe_softc *)VAR_2->sc;
 VAR_4 = VAR_3->eth_softc.ifp;

 FUNC_0(VAR_4, "resp = %d\n", VAR_2->resp);
 if (VAR_2->resp != 0)
  FUNC_6(VAR_4, VAR_0, 1);
 FUNC_7(VAR_2->mbuf);
 FUNC_4(VAR_2);

 VAR_5 = FUNC_8();
 FUNC_1(VAR_3);
 FUNC_3(&VAR_3->xferlist, VAR_2, VAR_1);
 FUNC_2(VAR_3);
 FUNC_9(VAR_5);


 if (VAR_4->if_snd.ifq_head != ((void*)0))
  FUNC_5(VAR_4);
}
