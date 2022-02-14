
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mgb_softc {int dev; int rx_irq; int admin_irq; } ;
typedef int irq_name ;
typedef TYPE_1__* if_softc_ctx_t ;
typedef int if_ctx_t ;
struct TYPE_3__ {int isc_nrxqsets; int isc_ntxqsets; } ;


 int FUNC_0 (struct mgb_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,int) ;
 int VAR_3 ;
 int FUNC_3 (int ,char*,...) ;
 struct mgb_softc* FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,int,int ,int ,struct mgb_softc*,int,char*) ;
 int FUNC_7 (int ,int *,int ,int *,int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_9(if_ctx_t VAR_6, int VAR_7)
{
 struct mgb_softc *VAR_8;
 if_softc_ctx_t VAR_9;
 int VAR_10, VAR_11, VAR_12;
 char VAR_13[16];

 VAR_8 = FUNC_4(VAR_6);
 VAR_9 = FUNC_5(VAR_6);

 FUNC_1(VAR_9->isc_nrxqsets == 1 && VAR_9->isc_ntxqsets == 1,
     ("num rxqsets/txqsets != 1 "));






 VAR_12 = 0;
 VAR_10 = FUNC_6(VAR_6, &VAR_8->admin_irq, VAR_12 + 1,
     VAR_0, VAR_4, VAR_8, 0, "admin");
 if (VAR_10) {
  FUNC_3(VAR_8->dev,
      "Failed to register admin interrupt handler\n");
  return (VAR_10);
 }

 for (VAR_11 = 0; VAR_11 < VAR_9->isc_nrxqsets; VAR_11++) {
  VAR_12++;
  FUNC_8(VAR_13, sizeof(VAR_13), "rxq%d", VAR_11);
  VAR_10 = FUNC_6(VAR_6, &VAR_8->rx_irq, VAR_12 + 1,
      VAR_1, VAR_5, VAR_8, VAR_11, VAR_13);
  if (VAR_10) {
   FUNC_3(VAR_8->dev,
       "Failed to register rxq %d interrupt handler\n", VAR_11);
   return (VAR_10);
  }
  FUNC_0(VAR_8, VAR_3,
      FUNC_2(VAR_12, VAR_11));
 }


 for (VAR_11 = 0; VAR_11 < VAR_9->isc_ntxqsets; VAR_11++) {
  FUNC_8(VAR_13, sizeof(VAR_13), "txq%d", VAR_11);
  FUNC_7(VAR_6, ((void*)0), VAR_2, ((void*)0), VAR_11,
      VAR_13);
 }

 return (0);
}
