
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct iwm_phy_db_entry {int dummy; } ;
struct iwm_phy_db {size_t n_group_papd; size_t n_group_txp; struct iwm_phy_db_entry* calib_ch_group_txp; struct iwm_phy_db_entry* calib_ch_group_papd; struct iwm_phy_db_entry calib_nch; struct iwm_phy_db_entry cfg; } ;
typedef enum iwm_phy_db_section_type { ____Placeholder_iwm_phy_db_section_type } iwm_phy_db_section_type ;






 int VAR_0 ;

__attribute__((used)) static struct iwm_phy_db_entry *
FUNC_0(struct iwm_phy_db *VAR_1,
         enum iwm_phy_db_section_type VAR_2,
         uint16_t VAR_3)
{
 if (!VAR_1 || VAR_2 >= VAR_0)
  return ((void*)0);

 switch (VAR_2) {
 case 128:
  return &VAR_1->cfg;
 case 129:
  return &VAR_1->calib_nch;
 case 131:
  if (VAR_3 >= VAR_1->n_group_papd)
   return ((void*)0);
  return &VAR_1->calib_ch_group_papd[VAR_3];
 case 130:
  if (VAR_3 >= VAR_1->n_group_txp)
   return ((void*)0);
  return &VAR_1->calib_ch_group_txp[VAR_3];
 default:
  return ((void*)0);
 }
 return ((void*)0);
}
