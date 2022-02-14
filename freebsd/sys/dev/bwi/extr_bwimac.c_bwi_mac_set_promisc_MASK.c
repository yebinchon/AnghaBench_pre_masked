
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_softc {int dummy; } ;
struct bwi_mac {int mac_rev; struct bwi_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bwi_softc*,int ,int ) ;
 int FUNC_1 (struct bwi_softc*,int ,int ) ;

void
FUNC_2(struct bwi_mac *VAR_2, int VAR_3)
{
 struct bwi_softc *VAR_4 = VAR_2->mac_sc;

 if (VAR_2->mac_rev < 5)
  return;

 if (VAR_3)
  FUNC_1(VAR_4, VAR_0, VAR_1);
 else
  FUNC_0(VAR_4, VAR_0, VAR_1);
}
