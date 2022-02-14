
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_vap {int phy_ctxt; int iv_vap; } ;
struct iwm_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwm_softc*,struct iwm_vap*,int ,int ) ;
 scalar_t__ FUNC_1 (struct iwm_softc*,int *,int ) ;

int
FUNC_2(struct iwm_softc *VAR_3, struct iwm_vap *VAR_4)
{
 if (!VAR_4->phy_ctxt)
  return VAR_0;





 if (FUNC_1(VAR_3, &VAR_4->iv_vap, VAR_1))
  return VAR_0;

 return FUNC_0(VAR_3, VAR_4, VAR_4->phy_ctxt, VAR_2);
}
