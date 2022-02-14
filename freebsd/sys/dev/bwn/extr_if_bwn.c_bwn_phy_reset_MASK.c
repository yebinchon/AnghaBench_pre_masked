
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwn_softc {int sc_dev; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int
FUNC_2(struct bwn_mac *VAR_3)
{
 struct bwn_softc *VAR_4;
 uint16_t VAR_5, VAR_6;
 int VAR_7;

 VAR_4 = VAR_3->mac_sc;

 VAR_5 = VAR_1 | VAR_0;
 VAR_6 = VAR_5 | VAR_2;

 if ((VAR_7 = FUNC_1(VAR_4->sc_dev, VAR_5, VAR_6)))
  return (VAR_7);

 FUNC_0(1000);

 VAR_5 &= ~VAR_0;

 if ((VAR_7 = FUNC_1(VAR_4->sc_dev, VAR_5, VAR_6)))
  return (VAR_7);

 FUNC_0(1000);

 return (0);
}
