
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwn_softc {int eeprom_crystal; } ;
struct iwn5000_phy_calib_crystal {int ngroups; int isvalid; int* cap_pin; int code; } ;


 int FUNC_0 (struct iwn_softc*,int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct iwn_softc*,int ,struct iwn5000_phy_calib_crystal*,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iwn5000_phy_calib_crystal*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct iwn_softc *VAR_3)
{
 struct iwn5000_phy_calib_crystal VAR_4;

 FUNC_3(&VAR_4, 0, sizeof VAR_4);
 VAR_4.code = VAR_0;
 VAR_4.ngroups = 1;
 VAR_4.isvalid = 1;
 VAR_4.cap_pin[0] = FUNC_2(VAR_3->eeprom_crystal) & 0xff;
 VAR_4.cap_pin[1] = (FUNC_2(VAR_3->eeprom_crystal) >> 16) & 0xff;
 FUNC_0(VAR_3, VAR_2, "sending crystal calibration %d, %d\n",
     VAR_4.cap_pin[0], VAR_4.cap_pin[1]);
 return FUNC_1(VAR_3, VAR_1, &VAR_4, sizeof VAR_4, 0);
}
