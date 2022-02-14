
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malo_softc {int dummy; } ;
struct malo_rxdesc {int rxcontrol; int physbuffdata; scalar_t__ nf; int pktlen; scalar_t__ channel; int status; scalar_t__ snr; scalar_t__ qosctrl; } ;
struct malo_rxbuf {int bf_data; int * bf_m; struct malo_rxdesc* bf_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct malo_softc*,struct malo_rxdesc*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (struct malo_softc*,struct malo_rxbuf*) ;

__attribute__((used)) static int
FUNC_4(struct malo_softc *VAR_7, struct malo_rxbuf *VAR_8)
{
 struct malo_rxdesc *VAR_9;

 VAR_9 = VAR_8->bf_desc;
 if (VAR_8->bf_m == ((void*)0)) {
  VAR_8->bf_m = FUNC_3(VAR_7, VAR_8);
  if (VAR_8->bf_m == ((void*)0)) {

   VAR_9->rxcontrol = VAR_4;

   FUNC_0(VAR_7, VAR_9, VAR_1);
   return VAR_2;
  }
 }




 VAR_9->qosctrl = 0;
 VAR_9->snr = 0;
 VAR_9->status = VAR_5;
 VAR_9->channel = 0;
 VAR_9->pktlen = FUNC_1(VAR_6);
 VAR_9->nf = 0;
 VAR_9->physbuffdata = FUNC_2(VAR_8->bf_data);

 VAR_9->rxcontrol = VAR_3;
 FUNC_0(VAR_7, VAR_9, VAR_0 | VAR_1);

 return 0;
}
