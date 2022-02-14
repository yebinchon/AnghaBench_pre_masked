
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtbe_softc {int opened; int pio_recv; } ;


 int FUNC_0 (int ,int ,struct vtbe_softc*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(struct vtbe_softc *VAR_1, int VAR_2)
{





 if (VAR_2) {
  if (VAR_1->opened == 0) {
   VAR_1->opened = 1;
   FUNC_0(VAR_1->pio_recv, VAR_0, VAR_1);
  }
 } else {
  if (VAR_1->opened == 1) {
   FUNC_1(VAR_1->pio_recv);
   VAR_1->opened = 0;
  }
 }

 return (0);
}
