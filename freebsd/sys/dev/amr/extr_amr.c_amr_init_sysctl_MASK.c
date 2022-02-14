
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amr_softc {int amr_maxio; int amr_dev; int amr_busyslots; int amr_nextslot; int amr_allow_vol_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct amr_softc *VAR_3)
{

    FUNC_0(FUNC_2(VAR_3->amr_dev),
 FUNC_1(FUNC_3(VAR_3->amr_dev)),
 VAR_2, "allow_volume_configure", VAR_1, &VAR_3->amr_allow_vol_config, 0,
 "");
    FUNC_0(FUNC_2(VAR_3->amr_dev),
 FUNC_1(FUNC_3(VAR_3->amr_dev)),
 VAR_2, "nextslot", VAR_0, &VAR_3->amr_nextslot, 0,
 "");
    FUNC_0(FUNC_2(VAR_3->amr_dev),
 FUNC_1(FUNC_3(VAR_3->amr_dev)),
 VAR_2, "busyslots", VAR_0, &VAR_3->amr_busyslots, 0,
 "");
    FUNC_0(FUNC_2(VAR_3->amr_dev),
 FUNC_1(FUNC_3(VAR_3->amr_dev)),
 VAR_2, "maxio", VAR_0, &VAR_3->amr_maxio, 0,
 "");
}
