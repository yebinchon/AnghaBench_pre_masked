
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_vap {int iv_vap; int phy_ctxt; } ;
struct iwm_softc {int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct iwm_softc*,struct iwm_vap*,int ,int ) ;
 scalar_t__ FUNC_2 (struct iwm_softc*,int *,int ) ;

int
FUNC_3(struct iwm_softc *VAR_3, struct iwm_vap *VAR_4)
{
 int VAR_5;

 if (!VAR_4->phy_ctxt)
  return VAR_0;

 VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_4->phy_ctxt, VAR_1);

 if (!VAR_5) {
  if (FUNC_2(VAR_3, &VAR_4->iv_vap, VAR_2))
   FUNC_0(VAR_3->sc_dev,
       "Failed to update SF state\n");
 }

 return VAR_5;
}
