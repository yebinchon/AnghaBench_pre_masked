
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bwi_softc {int dummy; } ;
struct bwi_mac {int mac_flags; struct bwi_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bwi_softc*,int ,int ) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct bwi_mac *VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 struct bwi_softc *VAR_6 = VAR_3->mac_sc;

 if (VAR_3->mac_flags & VAR_0)
  VAR_5 = FUNC_1(VAR_5);

 FUNC_0(VAR_6, VAR_1, VAR_4);
 FUNC_0(VAR_6, VAR_2, VAR_5);
}
