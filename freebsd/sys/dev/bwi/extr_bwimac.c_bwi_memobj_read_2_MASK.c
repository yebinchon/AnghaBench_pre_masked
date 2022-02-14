
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct bwi_softc {int dummy; } ;
struct bwi_mac {struct bwi_softc* mac_sc; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bwi_softc*,int ) ;
 int FUNC_2 (struct bwi_softc*,int ,int ) ;

uint16_t
FUNC_3(struct bwi_mac *VAR_3, uint16_t VAR_4, uint16_t VAR_5)
{
 struct bwi_softc *VAR_6 = VAR_3->mac_sc;
 uint32_t VAR_7;
 int VAR_8;

 VAR_7 = VAR_1;
 VAR_8 = VAR_5 / 4;

 if (VAR_5 % 4 != 0)
  VAR_7 = VAR_2;

 FUNC_2(VAR_6, VAR_0, FUNC_0(VAR_4, VAR_8));
 return FUNC_1(VAR_6, VAR_7);
}
