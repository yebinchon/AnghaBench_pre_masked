
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgb_softc {int * pba; int dev; int * miibus; int admin_irq; int rx_irq; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *) ;
 struct mgb_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct mgb_softc*) ;
 int FUNC_5 (struct mgb_softc*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(if_ctx_t VAR_1)
{
 struct mgb_softc *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_1);


 VAR_3 = FUNC_4(VAR_2);


 FUNC_3(VAR_1, &VAR_2->rx_irq);
 FUNC_3(VAR_1, &VAR_2->admin_irq);

 if (VAR_2->miibus != ((void*)0))
  FUNC_1(VAR_2->dev, VAR_2->miibus);

 if (VAR_2->pba != ((void*)0))
  VAR_3 = FUNC_0(VAR_2->dev, VAR_0,
      FUNC_6(VAR_2->pba), VAR_2->pba);
 VAR_2->pba = ((void*)0);

 VAR_3 = FUNC_5(VAR_2);

 return (VAR_3);
}
