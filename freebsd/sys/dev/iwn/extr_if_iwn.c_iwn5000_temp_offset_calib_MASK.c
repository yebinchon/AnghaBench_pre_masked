
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwn_softc {scalar_t__ eeprom_temp; } ;
struct iwn5000_phy_calib_temp_offset {int ngroups; int isvalid; void* offset; int code; } ;


 int FUNC_0 (struct iwn_softc*,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct iwn_softc*,int ,struct iwn5000_phy_calib_temp_offset*,int,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct iwn5000_phy_calib_temp_offset*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct iwn_softc *VAR_4)
{
 struct iwn5000_phy_calib_temp_offset VAR_5;

 FUNC_4(&VAR_5, 0, sizeof VAR_5);
 VAR_5.code = VAR_0;
 VAR_5.ngroups = 1;
 VAR_5.isvalid = 1;
 if (VAR_4->eeprom_temp != 0)
  VAR_5.offset = FUNC_1(VAR_4->eeprom_temp);
 else
  VAR_5.offset = FUNC_1(VAR_3);
 FUNC_0(VAR_4, VAR_2, "setting radio sensor offset to %d\n",
     FUNC_3(VAR_5.offset));
 return FUNC_2(VAR_4, VAR_1, &VAR_5, sizeof VAR_5, 0);
}
