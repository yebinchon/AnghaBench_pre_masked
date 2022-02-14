
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwn_softc {scalar_t__ eeprom_temp; scalar_t__ eeprom_temp_high; scalar_t__ eeprom_voltage; } ;
struct iwn5000_phy_calib_temp_offsetv2 {int ngroups; int isvalid; void* burnt_voltage_ref; void* offset_high; void* offset_low; int code; } ;


 int FUNC_0 (struct iwn_softc*,int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct iwn_softc*,int ,struct iwn5000_phy_calib_temp_offsetv2*,int,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct iwn5000_phy_calib_temp_offsetv2*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct iwn_softc *VAR_4)
{
 struct iwn5000_phy_calib_temp_offsetv2 VAR_5;

 FUNC_4(&VAR_5, 0, sizeof VAR_5);
 VAR_5.code = VAR_0;
 VAR_5.ngroups = 1;
 VAR_5.isvalid = 1;
 if (VAR_4->eeprom_temp != 0) {
  VAR_5.offset_low = FUNC_1(VAR_4->eeprom_temp);
  VAR_5.offset_high = FUNC_1(VAR_4->eeprom_temp_high);
 } else {
  VAR_5.offset_low = FUNC_1(VAR_3);
  VAR_5.offset_high = FUNC_1(VAR_3);
 }
 VAR_5.burnt_voltage_ref = FUNC_1(VAR_4->eeprom_voltage);

 FUNC_0(VAR_4, VAR_2,
     "setting radio sensor low offset to %d, high offset to %d, voltage to %d\n",
     FUNC_3(VAR_5.offset_low),
     FUNC_3(VAR_5.offset_high),
     FUNC_3(VAR_5.burnt_voltage_ref));

 return FUNC_2(VAR_4, VAR_1, &VAR_5, sizeof VAR_5, 0);
}
