
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlphy_softc {int sc_need_acomp; int sc_mii; } ;




 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tlphy_softc*) ;

__attribute__((used)) static int
FUNC_3(struct tlphy_softc *VAR_1)
{
 int VAR_2;

 switch ((VAR_2 = FUNC_1(&VAR_1->sc_mii))) {
 case 129:




  FUNC_0(&VAR_1->sc_mii, VAR_0, 0);
  break;

 case 128:

  VAR_1->sc_need_acomp = 1;
  break;

 default:
  FUNC_2(VAR_1);
 }

 return (VAR_2);
}
