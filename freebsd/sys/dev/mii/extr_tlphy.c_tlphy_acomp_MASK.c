
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlphy_softc {int sc_mii; scalar_t__ sc_need_acomp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct tlphy_softc *VAR_7)
{
 int VAR_8, VAR_9;

 VAR_7->sc_need_acomp = 0;







 VAR_8 = FUNC_0(&VAR_7->sc_mii, VAR_4);
 if (VAR_8 & VAR_1) {
  VAR_9 = FUNC_0(&VAR_7->sc_mii, VAR_5) &
      FUNC_0(&VAR_7->sc_mii, VAR_3);
  if (VAR_9 & VAR_0) {
   FUNC_1(&VAR_7->sc_mii, VAR_6, VAR_2);
   return;
  }
 }
 FUNC_1(&VAR_7->sc_mii, VAR_6, 0);
}
