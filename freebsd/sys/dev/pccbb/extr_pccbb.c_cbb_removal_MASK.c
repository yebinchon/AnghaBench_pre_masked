
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbb_softc {int flags; int cbdev; int * exca; scalar_t__ cardok; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct cbb_softc*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct cbb_softc *VAR_1)
{
 VAR_1->cardok = 0;
 if (VAR_1->flags & VAR_0) {
  FUNC_3(&VAR_1->exca[0]);
 } else {
  if (FUNC_2(VAR_1->cbdev))
   FUNC_0(VAR_1->cbdev);
 }
 FUNC_1(VAR_1);
}
