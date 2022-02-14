
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct an_softc* if_softc; } ;
struct an_softc {int mpi350; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct an_softc*,int ) ;
 int FUNC_2 (struct an_softc*,int ,int ) ;
 int FUNC_3 (struct an_softc*,int) ;

__attribute__((used)) static int
FUNC_4(struct ifnet *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;
 unsigned char VAR_4 = 0;
 int VAR_5 = -1;
 struct an_softc *VAR_6 = VAR_0->if_softc;


 do {
  VAR_3 = FUNC_1(VAR_6, FUNC_0(VAR_6->mpi350));

  if (VAR_2 && !(0x8000 & VAR_3)) {
   VAR_2 -= 10;
   FUNC_3(VAR_6, 10);
   continue;
  }
  VAR_4 = 0xff & VAR_3;

  if ((VAR_4 == VAR_1) && (0x8000 & VAR_3)) {
   FUNC_2(VAR_6, FUNC_0(VAR_6->mpi350), 0);
   VAR_5 = 1;
   break;
  }
  if (VAR_4 == 0x81 || VAR_4 == 0x82 || VAR_4 == 0x83 || VAR_4 == 0x1a || 0xffff == VAR_3)
   break;
  FUNC_2(VAR_6, FUNC_0(VAR_6->mpi350), 0);

 } while (VAR_2 > 0);
 return VAR_5;
}
