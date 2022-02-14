
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct iwm_phy_db_entry {int data; int size; } ;
struct iwm_phy_db {TYPE_1__* sc; } ;
typedef enum iwm_phy_db_section_type { ____Placeholder_iwm_phy_db_section_type } iwm_phy_db_section_type ;
struct TYPE_2__ {int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,char*,int,scalar_t__) ;
 int FUNC_1 (int ,char*,int,scalar_t__,int) ;
 struct iwm_phy_db_entry* FUNC_2 (struct iwm_phy_db*,int,scalar_t__) ;
 int FUNC_3 (struct iwm_phy_db*,int,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct iwm_phy_db *VAR_2,
       enum iwm_phy_db_section_type VAR_3,
       uint8_t VAR_4)
{
 uint16_t VAR_5;
 int VAR_6;
 struct iwm_phy_db_entry *VAR_7;


 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_7 = FUNC_2(VAR_2,
                                               VAR_3,
                                               VAR_5);
  if (!VAR_7)
   return VAR_0;

  if (!VAR_7->size)
   continue;


  VAR_6 = FUNC_3(VAR_2,
       VAR_3,
       VAR_7->size,
       VAR_7->data);
  if (VAR_6) {
   FUNC_1(VAR_2->sc->sc_dev,
    "Can't SEND phy_db section %d (%d), err %d\n",
    VAR_3, VAR_5, VAR_6);
   return VAR_6;
  }

  FUNC_0(VAR_2->sc, VAR_1,
      "Sent PHY_DB HCMD, type = %d num = %d\n", VAR_3, VAR_5);
 }

 return 0;
}
