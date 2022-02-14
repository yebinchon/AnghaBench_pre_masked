
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct an_softc {scalar_t__ an_monitor; scalar_t__ an_was_monitor; scalar_t__ mpi350; } ;


 int VAR_0 ;
 int FUNC_0 (struct an_softc*) ;
 int FUNC_1 (struct an_softc*,int ,int) ;
 int FUNC_2 (struct an_softc*) ;
 int FUNC_3 (struct an_softc*) ;
 int FUNC_4 (struct an_softc*) ;

__attribute__((used)) static void
FUNC_5(struct an_softc *VAR_1, int VAR_2)
{
 FUNC_0(VAR_1);
 if (VAR_1->an_was_monitor) {
  FUNC_4(VAR_1);
  if (VAR_1->mpi350)
   FUNC_3(VAR_1);
 }
 if (VAR_1->an_monitor || VAR_1->an_was_monitor)
  FUNC_2(VAR_1);

 VAR_1->an_was_monitor = VAR_1->an_monitor;
 FUNC_1(VAR_1, VAR_0, VAR_2 ? 0xffff : 0);

 return;
}
