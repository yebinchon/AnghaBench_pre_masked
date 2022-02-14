
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct bwn_softc {int sc_dev; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bwn_mac*,char*) ;
 scalar_t__ FUNC_1 (struct bwn_mac*,int ,int ) ;
 int FUNC_2 (int ,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct bwn_mac *VAR_3)
{
 struct bwn_softc *VAR_4 = VAR_3->mac_sc;
 uint16_t VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_2, VAR_0);
 FUNC_2(VAR_4->sc_dev,"fw panic (%u)\n", VAR_5);

 if (VAR_5 == VAR_1)
  FUNC_0(VAR_3, "ucode panic");
}
