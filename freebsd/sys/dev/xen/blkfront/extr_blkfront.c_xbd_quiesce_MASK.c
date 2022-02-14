
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbd_softc {int xbd_ring; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int FUNC_2 (struct xbd_softc*) ;
 scalar_t__ FUNC_3 (struct xbd_softc*,int ) ;

__attribute__((used)) static void
FUNC_4(struct xbd_softc *VAR_1)
{
 int VAR_2;


 while (FUNC_3(VAR_1, VAR_0) != 0) {
  FUNC_1(&VAR_1->xbd_ring, VAR_2);
  if (VAR_2) {

   FUNC_2(VAR_1);
  }
  if (FUNC_3(VAR_1, VAR_0) != 0) {




   FUNC_0();
  }
 }
}
