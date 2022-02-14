
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {int dummy; } ;
struct iwm_phy_db {int n_group_txp; int n_group_papd; struct iwm_softc* sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iwm_phy_db* FUNC_0 (int,int ,int) ;

struct iwm_phy_db *
FUNC_1(struct iwm_softc *VAR_3)
{
 struct iwm_phy_db *VAR_4 = FUNC_0(sizeof(struct iwm_phy_db),
     VAR_0, VAR_1 | VAR_2);

 if (!VAR_4)
  return VAR_4;

 VAR_4->sc = VAR_3;

 VAR_4->n_group_txp = -1;
 VAR_4->n_group_papd = -1;


 return VAR_4;
}
