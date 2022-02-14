
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tsec_softc {struct ifnet* tsec_ifp; } ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct tsec_softc*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct tsec_softc*,int ,int) ;
 int FUNC_3 (struct ifnet*,int ,int**) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct tsec_softc *VAR_2)
{
 uint32_t VAR_3[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
 struct ifnet *VAR_4 = VAR_2->tsec_ifp;
 int VAR_5;

 FUNC_0(VAR_2);

 if (VAR_4->if_flags & VAR_0) {
  for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
   FUNC_2(VAR_2, FUNC_1(VAR_5), 0xFFFFFFFF);

  return;
 }

 FUNC_3(VAR_4, VAR_1, &VAR_3);

 for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
  FUNC_2(VAR_2, FUNC_1(VAR_5), VAR_3[VAR_5]);
}
