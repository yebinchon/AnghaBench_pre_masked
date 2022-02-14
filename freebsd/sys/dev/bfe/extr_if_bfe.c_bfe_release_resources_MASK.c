
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfe_softc {int * bfe_ifp; int * bfe_res; int bfe_dev; int * bfe_irq; int * bfe_intrhand; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct bfe_softc *VAR_2)
{

 if (VAR_2->bfe_intrhand != ((void*)0))
  FUNC_2(VAR_2->bfe_dev, VAR_2->bfe_irq, VAR_2->bfe_intrhand);

 if (VAR_2->bfe_irq != ((void*)0))
  FUNC_1(VAR_2->bfe_dev, VAR_0, 0, VAR_2->bfe_irq);

 if (VAR_2->bfe_res != ((void*)0))
  FUNC_1(VAR_2->bfe_dev, VAR_1, FUNC_0(0),
      VAR_2->bfe_res);

 if (VAR_2->bfe_ifp != ((void*)0))
  FUNC_3(VAR_2->bfe_ifp);
}
