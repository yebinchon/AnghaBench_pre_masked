
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rl_softc {int suspended; int rl_mtx; scalar_t__ rl_res; int rl_res_id; int rl_res_type; scalar_t__* rl_irq; scalar_t__* rl_intrhand; scalar_t__ rl_miibus; int rl_stat_callout; struct ifnet* rl_ifp; } ;
struct ifnet {int if_capenable; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct rl_softc*) ;
 int FUNC_2 (struct rl_softc*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,scalar_t__) ;
 struct rl_softc* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct ifnet*) ;
 int FUNC_11 (struct ifnet*) ;
 int FUNC_12 (struct ifnet*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct rl_softc*) ;
 int FUNC_16 (struct rl_softc*) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_2)
{
 struct rl_softc *VAR_3;
 struct ifnet *VAR_4;

 VAR_3 = FUNC_8(VAR_2);
 VAR_4 = VAR_3->rl_ifp;

 FUNC_0(FUNC_14(&VAR_3->rl_mtx), ("rl mutex not initialized"));






 if (FUNC_9(VAR_2)) {
  FUNC_1(VAR_3);
  FUNC_16(VAR_3);
  FUNC_2(VAR_3);
  FUNC_6(&VAR_3->rl_stat_callout);
  FUNC_10(VAR_4);
 }



 if (VAR_3->rl_miibus)
  FUNC_7(VAR_2, VAR_3->rl_miibus);
 FUNC_3(VAR_2);

 if (VAR_3->rl_intrhand[0])
  FUNC_5(VAR_2, VAR_3->rl_irq[0], VAR_3->rl_intrhand[0]);
 if (VAR_3->rl_irq[0])
  FUNC_4(VAR_2, VAR_1, 0, VAR_3->rl_irq[0]);
 if (VAR_3->rl_res)
  FUNC_4(VAR_2, VAR_3->rl_res_type, VAR_3->rl_res_id,
      VAR_3->rl_res);

 if (VAR_4)
  FUNC_12(VAR_4);

 FUNC_15(VAR_3);

 FUNC_13(&VAR_3->rl_mtx);

 return (0);
}
