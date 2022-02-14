
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct an_softc* if_softc; } ;
struct an_softc {int mpi350; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct an_softc*) ;
 int VAR_2 ;
 int FUNC_2 (struct an_softc*) ;
 int FUNC_3 (struct an_softc*,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct an_softc*,int) ;
 int FUNC_5 (struct ifnet*,int) ;
 int FUNC_6 (struct an_softc*,int ,int ) ;
 int FUNC_7 (struct an_softc*) ;
 int FUNC_8 (struct ifnet*,char*,int) ;

__attribute__((used)) static int
FUNC_9(struct ifnet *VAR_4)
{
 int VAR_5;
 struct an_softc *VAR_6 = VAR_4->if_softc;

 FUNC_1(VAR_6);
 FUNC_7(VAR_6);

 FUNC_6(VAR_6, VAR_0, 0);

 if (!(VAR_5 = FUNC_5(VAR_4, VAR_2))) {
  FUNC_8(VAR_4, "Waitbusy hang b4 RESET =%d\n", VAR_5);
  FUNC_2(VAR_6);
  return -VAR_3;
 }
 FUNC_3(VAR_6, FUNC_0(VAR_6->mpi350), VAR_1);

 FUNC_4(VAR_6, 1000);


 if (!(VAR_5 = FUNC_5(VAR_4, 100))) {
  FUNC_8(VAR_4, "Waitbusy hang AFTER RESET =%d\n", VAR_5);
  FUNC_2(VAR_6);
  return -VAR_3;
 }
 FUNC_2(VAR_6);
 return 0;
}
