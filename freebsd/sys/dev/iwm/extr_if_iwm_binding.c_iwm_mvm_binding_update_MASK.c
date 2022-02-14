
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iwm_vap {int color; int id; } ;
struct iwm_softc {int dummy; } ;
struct iwm_mvm_phy_ctxt {int dummy; } ;
struct iwm_mvm_iface_iterator_data {int idx; int * colors; int * ids; struct iwm_mvm_phy_ctxt* phyctxt; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwm_softc*,int ,struct iwm_mvm_iface_iterator_data*) ;

__attribute__((used)) static int
FUNC_1(struct iwm_softc *VAR_2, struct iwm_vap *VAR_3,
 struct iwm_mvm_phy_ctxt *VAR_4, boolean_t VAR_5)
{
 struct iwm_mvm_iface_iterator_data VAR_6 = {
  .phyctxt = VAR_4,
 };
 uint32_t VAR_7;

 if (VAR_5)
  VAR_7 = VAR_0;
 else
  VAR_7 = VAR_1;

 if (VAR_5) {
  VAR_6.ids[0] = VAR_3->id;
  VAR_6.colors[0] = VAR_3->color;
  VAR_6.idx++;
 }

 return FUNC_0(VAR_2, VAR_7, &VAR_6);
}
