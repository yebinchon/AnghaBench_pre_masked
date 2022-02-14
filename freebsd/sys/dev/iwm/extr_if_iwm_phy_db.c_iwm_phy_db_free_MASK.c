
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_phy_db {int n_group_papd; int n_group_txp; struct iwm_phy_db* calib_ch_group_txp; struct iwm_phy_db* calib_ch_group_papd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iwm_phy_db*,int ) ;
 int FUNC_1 (struct iwm_phy_db*,int ,int) ;

void
FUNC_2(struct iwm_phy_db *VAR_5)
{
 int VAR_6;

 if (!VAR_5)
  return;

 FUNC_1(VAR_5, VAR_3, 0);
 FUNC_1(VAR_5, VAR_2, 0);

 for (VAR_6 = 0; VAR_6 < VAR_5->n_group_papd; VAR_6++)
  FUNC_1(VAR_5, VAR_0, VAR_6);
 if (VAR_5->calib_ch_group_papd != ((void*)0))
  FUNC_0(VAR_5->calib_ch_group_papd, VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_5->n_group_txp; VAR_6++)
  FUNC_1(VAR_5, VAR_1, VAR_6);
 if (VAR_5->calib_ch_group_txp != ((void*)0))
  FUNC_0(VAR_5->calib_ch_group_txp, VAR_4);

 FUNC_0(VAR_5, VAR_4);
}
