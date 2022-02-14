
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbni_softc {TYPE_1__* ifp; int wch; int * rx_buf_p; } ;
struct TYPE_2__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sbni_softc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sbni_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct sbni_softc *VAR_3)
{
 FUNC_3(VAR_3, VAR_0, 0);
 FUNC_1(VAR_3);

 if (VAR_3->rx_buf_p) {
  FUNC_2(VAR_3->rx_buf_p);
  VAR_3->rx_buf_p = ((void*)0);
 }

 FUNC_0(&VAR_3->wch);
 VAR_3->ifp->if_drv_flags &= ~(VAR_2 | VAR_1);
}
