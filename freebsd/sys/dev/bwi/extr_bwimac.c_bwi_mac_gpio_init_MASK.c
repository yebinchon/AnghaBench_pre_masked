
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bwi_softc {scalar_t__ sc_bbp_id; int sc_card_flags; } ;
struct bwi_regwin {int dummy; } ;
struct bwi_mac {struct bwi_softc* mac_sc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bwi_regwin* FUNC_0 (struct bwi_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bwi_softc*,int ,int ) ;
 int FUNC_2 (struct bwi_softc*,int ,int,int) ;
 int FUNC_3 (struct bwi_softc*,int ,int) ;
 int FUNC_4 (struct bwi_softc*,struct bwi_regwin*,struct bwi_regwin**) ;

__attribute__((used)) static int
FUNC_5(struct bwi_mac *VAR_6)
{
 struct bwi_softc *VAR_7 = VAR_6->mac_sc;
 struct bwi_regwin *VAR_8, *VAR_9;
 uint32_t VAR_10, VAR_11;
 int VAR_12;

 FUNC_1(VAR_7, VAR_4, VAR_5);


 FUNC_3(VAR_7, VAR_3, 0xf);

 VAR_10 = 0x1f;
 VAR_11 = 0xf;
 if (VAR_7->sc_bbp_id == VAR_0) {
  VAR_10 |= 0x60;
  VAR_11 |= 0x60;
 }
 if (VAR_7->sc_card_flags & VAR_1) {
  FUNC_3(VAR_7, VAR_3, 0x200);
  VAR_10 |= 0x200;
  VAR_11 |= 0x200;
 }

 VAR_9 = FUNC_0(VAR_7);
 VAR_12 = FUNC_4(VAR_7, VAR_9, &VAR_8);
 if (VAR_12)
  return VAR_12;

 FUNC_2(VAR_7, VAR_2, VAR_10, VAR_11);

 return FUNC_4(VAR_7, VAR_8, ((void*)0));
}
