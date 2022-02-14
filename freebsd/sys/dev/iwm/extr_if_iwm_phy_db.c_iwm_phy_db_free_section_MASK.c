
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct iwm_phy_db_entry {scalar_t__ size; int * data; } ;
struct iwm_phy_db {int dummy; } ;
typedef enum iwm_phy_db_section_type { ____Placeholder_iwm_phy_db_section_type } iwm_phy_db_section_type ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct iwm_phy_db_entry* FUNC_1 (struct iwm_phy_db*,int,int ) ;

__attribute__((used)) static void
FUNC_2(struct iwm_phy_db *VAR_1,
   enum iwm_phy_db_section_type VAR_2, uint16_t VAR_3)
{
 struct iwm_phy_db_entry *VAR_4 =
    FUNC_1(VAR_1, VAR_2, VAR_3);
 if (!VAR_4)
  return;

 if (VAR_4->data != ((void*)0))
  FUNC_0(VAR_4->data, VAR_0);
 VAR_4->data = ((void*)0);
 VAR_4->size = 0;
}
