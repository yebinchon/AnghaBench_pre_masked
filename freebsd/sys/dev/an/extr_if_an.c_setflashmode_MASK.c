
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct an_softc* if_softc; } ;
struct an_softc {int mpi350; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct an_softc*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct an_softc*,int) ;
 int FUNC_5 (struct ifnet*,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(struct ifnet *VAR_3)
{
 int VAR_4;
 struct an_softc *VAR_5 = VAR_3->if_softc;

 FUNC_3(VAR_5, FUNC_1(VAR_5->mpi350), VAR_2);
 FUNC_3(VAR_5, FUNC_2(VAR_5->mpi350), VAR_2);
 FUNC_3(VAR_5, FUNC_1(VAR_5->mpi350), VAR_2);
 FUNC_3(VAR_5, FUNC_0(VAR_5->mpi350), VAR_2);





 FUNC_4(VAR_5, 500);

 if (!(VAR_4 = FUNC_5(VAR_3, VAR_0))) {
  FUNC_6("Waitbusy hang after setflash mode\n");
  return -VAR_1;
 }
 return 0;
}
