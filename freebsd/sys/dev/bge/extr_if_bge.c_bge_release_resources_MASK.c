
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bge_softc {int bge_mtx; int * bge_ifp; int * bge_res2; int * bge_res; int * bge_irq; int * bge_intrhand; int * bge_tq; int bge_dev; } ;
typedef int device_t ;


 int FUNC_0 (struct bge_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bge_softc*) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct bge_softc *VAR_2)
{
 device_t VAR_3;

 VAR_3 = VAR_2->bge_dev;

 if (VAR_2->bge_tq != ((void*)0))
  FUNC_8(VAR_2->bge_tq);

 if (VAR_2->bge_intrhand != ((void*)0))
  FUNC_3(VAR_3, VAR_2->bge_irq, VAR_2->bge_intrhand);

 if (VAR_2->bge_irq != ((void*)0)) {
  FUNC_2(VAR_3, VAR_0,
      FUNC_7(VAR_2->bge_irq), VAR_2->bge_irq);
  FUNC_6(VAR_3);
 }

 if (VAR_2->bge_res != ((void*)0))
  FUNC_2(VAR_3, VAR_1,
      FUNC_7(VAR_2->bge_res), VAR_2->bge_res);

 if (VAR_2->bge_res2 != ((void*)0))
  FUNC_2(VAR_3, VAR_1,
      FUNC_7(VAR_2->bge_res2), VAR_2->bge_res2);

 if (VAR_2->bge_ifp != ((void*)0))
  FUNC_4(VAR_2->bge_ifp);

 FUNC_1(VAR_2);

 if (FUNC_5(&VAR_2->bge_mtx))
  FUNC_0(VAR_2);
}
