
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ chip_id; } ;
struct bwn_softc {TYPE_1__ sc_cid; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bwn_mac*,int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct bwn_mac *VAR_3)
{
 struct bwn_softc *VAR_4 = VAR_3->mac_sc;

 FUNC_0(VAR_3, VAR_2, 0xff);
 FUNC_1(20);
 if (VAR_4->sc_cid.chip_id == VAR_0) {
  FUNC_0(VAR_3, VAR_1, 4);
  FUNC_0(VAR_3, VAR_2, 4);
 } else {
  FUNC_0(VAR_3, VAR_2, 0);
 }
 FUNC_1(5);
}
