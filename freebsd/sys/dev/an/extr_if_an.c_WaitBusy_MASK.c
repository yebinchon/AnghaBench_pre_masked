
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct an_softc* if_softc; } ;
struct an_softc {int mpi350; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct an_softc*,int ) ;
 int FUNC_2 (struct an_softc*,int) ;
 int FUNC_3 (struct ifnet*) ;

__attribute__((used)) static int
FUNC_4(struct ifnet *VAR_1, int VAR_2)
{
 int VAR_3 = 0xffff;
 int VAR_4 = 0;
 struct an_softc *VAR_5 = VAR_1->if_softc;

 while ((VAR_3 & VAR_0) && VAR_4 <= (1000 * 100)) {
  FUNC_2(VAR_5, 10);
  VAR_4 += 10;
  VAR_3 = FUNC_1(VAR_5, FUNC_0(VAR_5->mpi350));

  if ((VAR_0 & VAR_3) && (VAR_4 % 200)) {
   FUNC_3(VAR_1);
  }
 }

 return 0 == (VAR_0 & VAR_3);
}
