
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mst_rxbuf_failed; } ;
struct mwl_softc {TYPE_1__ sc_stats; } ;
struct mwl_rxdesc {int RxControl; int pPhysBuffData; scalar_t__ SQ2; int PktLen; scalar_t__ Channel; int Status; scalar_t__ RSSI; scalar_t__ QosCtrl; } ;
struct mwl_rxbuf {int * bf_data; struct mwl_rxdesc* bf_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mwl_softc*,int *) ;
 int FUNC_1 (struct mwl_softc*,struct mwl_rxdesc*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (struct mwl_softc*) ;

__attribute__((used)) static int
FUNC_5(struct mwl_softc *VAR_7, struct mwl_rxbuf *VAR_8)
{
 struct mwl_rxdesc *VAR_9;

 VAR_9 = VAR_8->bf_desc;
 if (VAR_8->bf_data == ((void*)0)) {
  VAR_8->bf_data = FUNC_4(VAR_7);
  if (VAR_8->bf_data == ((void*)0)) {

   VAR_9->RxControl = VAR_3;

   FUNC_1(VAR_7, VAR_9, VAR_1);
   VAR_7->sc_stats.mst_rxbuf_failed++;
   return VAR_5;
  }
 }
 VAR_9->QosCtrl = 0;
 VAR_9->RSSI = 0;
 VAR_9->Status = VAR_4;
 VAR_9->Channel = 0;
 VAR_9->PktLen = FUNC_2(VAR_6);
 VAR_9->SQ2 = 0;
 VAR_9->pPhysBuffData = FUNC_3(FUNC_0(VAR_7, VAR_8->bf_data));

 VAR_9->RxControl = VAR_2;
 FUNC_1(VAR_7, VAR_9, VAR_0 | VAR_1);

 return 0;
}
