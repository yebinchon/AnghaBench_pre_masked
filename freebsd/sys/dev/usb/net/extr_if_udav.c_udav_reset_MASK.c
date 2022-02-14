
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udav_softc {int sc_flags; int sc_ue; } ;


 int FUNC_0 (struct udav_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct udav_softc*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct udav_softc*,int ) ;
 scalar_t__ FUNC_3 (int *,int) ;

__attribute__((used)) static void
FUNC_4(struct udav_softc *VAR_6)
{
 int VAR_7;







 FUNC_0(VAR_6, VAR_1, VAR_2);







 FUNC_1(VAR_6, VAR_1, VAR_3);

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  if (!(FUNC_2(VAR_6, VAR_1) & VAR_3))
   break;
  if (FUNC_3(&VAR_6->sc_ue, VAR_5 / 100))
   break;
 }

 FUNC_3(&VAR_6->sc_ue, VAR_5 / 100);
}
