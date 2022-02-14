
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct an_softc* if_softc; } ;
struct an_softc {int mpi350; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct an_softc*,int ) ;
 int FUNC_3 (struct an_softc*,int ,int) ;
 int FUNC_4 (struct an_softc*,int) ;
 int FUNC_5 (struct ifnet*,char*) ;

__attribute__((used)) static int
FUNC_6(struct ifnet *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4, VAR_5;
 struct an_softc *VAR_6 = VAR_0->if_softc;

 VAR_1 |= 0x8000;

 if (VAR_2 == 0)
  VAR_2 = 200;

 VAR_5 = VAR_2;




 do {
  VAR_4 = FUNC_2(VAR_6, FUNC_0(VAR_6->mpi350));

  if (VAR_4 & 0x8000) {
   FUNC_4(VAR_6, 50);
   VAR_5 -= 50;
   continue;
  } else
   break;
 }
 while (VAR_5 >= 0);



 if (VAR_5 <= 0) {
  FUNC_5(VAR_0, "flash putchar busywait timeout!\n");
  return -1;
 }



 do {
  FUNC_3(VAR_6, FUNC_0(VAR_6->mpi350), VAR_1);
  FUNC_4(VAR_6, 50);
  VAR_2 -= 50;
  VAR_3 = FUNC_2(VAR_6, FUNC_1(VAR_6->mpi350));
 } while (VAR_2 >= 0 && VAR_3 != VAR_1);


 FUNC_3(VAR_6, FUNC_1(VAR_6->mpi350), 0);

 return VAR_3 == VAR_1;
}
