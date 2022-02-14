
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct TYPE_4__ {TYPE_3__* ifp; int * tx_free_queue; scalar_t__ fau; int link_task; scalar_t__ need_link_update; } ;
typedef TYPE_1__ cvm_oct_private_t ;
struct TYPE_6__ {int if_drv_flags; } ;
struct TYPE_5__ {scalar_t__ if_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct mbuf*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int,void (*) (void*),int *) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_2__** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int) ;
 int VAR_5 ;
 int FUNC_8 (struct mbuf*) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(void *VAR_6)
{
 static int VAR_7;
 static int VAR_8;
 if (VAR_7 < VAR_0) {
  if (VAR_2[VAR_7]) {
   int VAR_9;
   int VAR_10;
   cvm_oct_private_t *VAR_11 = (cvm_oct_private_t *)VAR_2[VAR_7]->if_softc;

   FUNC_5(VAR_11->ifp);
   if (VAR_11->need_link_update) {
    VAR_8++;
    FUNC_9(VAR_3, &VAR_11->link_task);
   }

   VAR_9 = FUNC_7(VAR_7);

   for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
    if (FUNC_3(&VAR_11->tx_free_queue[VAR_10]) > 0) {
     FUNC_0(&VAR_11->tx_free_queue[VAR_10]);
     while (FUNC_3(&VAR_11->tx_free_queue[VAR_10]) > FUNC_6(VAR_11->fau+VAR_10*4, 0)) {
      struct mbuf *VAR_12;

      FUNC_2(&VAR_11->tx_free_queue[VAR_10], VAR_12);
      FUNC_8(VAR_12);
     }
     FUNC_1(&VAR_11->tx_free_queue[VAR_10]);




     VAR_11->ifp->if_drv_flags &= ~VAR_1;
    }
   }
  }
  VAR_7++;


  FUNC_4(&VAR_4, VAR_5 / 50, FUNC_10, ((void*)0));
 } else {
  VAR_7 = 0;





  if (VAR_8 > 0) {
   VAR_8 = 0;
   FUNC_4(&VAR_4, VAR_5 / 50, FUNC_10, ((void*)0));
  } else {


   FUNC_4(&VAR_4, VAR_5, FUNC_10, ((void*)0));
  }
 }
}
