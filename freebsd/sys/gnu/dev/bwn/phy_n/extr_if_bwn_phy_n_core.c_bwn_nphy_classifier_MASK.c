
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
 int VAR_3 ;
 int FUNC_0 (struct bwn_mac*,int ) ;
 int FUNC_1 (struct bwn_mac*,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bwn_mac*) ;
 int FUNC_4 (struct bwn_mac*) ;

__attribute__((used)) static uint16_t FUNC_5(struct bwn_mac *VAR_4, uint16_t VAR_5, uint16_t VAR_6)
{
 struct bwn_softc *VAR_7 = VAR_4->mac_sc;
 uint16_t VAR_8;

 if (FUNC_2(VAR_7->sc_dev) == 16)
  FUNC_4(VAR_4);

 VAR_8 = FUNC_0(VAR_4, VAR_0);
 VAR_8 &= (VAR_1 | VAR_2 |
  VAR_3);
 VAR_8 &= ~VAR_5;
 VAR_8 |= (VAR_6 & VAR_5);
 FUNC_1(VAR_4, VAR_0, 0xFFF8, VAR_8);

 if (FUNC_2(VAR_7->sc_dev) == 16)
  FUNC_3(VAR_4);

 return VAR_8;
}
