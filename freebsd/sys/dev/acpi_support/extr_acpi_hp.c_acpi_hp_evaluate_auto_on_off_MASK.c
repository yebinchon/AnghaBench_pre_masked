
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_hp_softc {int was_wlan_on_air; int was_bluetooth_on_air; int was_wwan_on_air; int wmi_dev; scalar_t__ verbose; scalar_t__ wwan_enable_if_radio_on; scalar_t__ wwan_disable_if_radio_off; scalar_t__ bluetooth_enable_if_radio_on; scalar_t__ bluetooth_disable_if_radio_off; scalar_t__ wlan_enable_if_radio_on; scalar_t__ wlan_disable_if_radio_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ,int ,int,int,int*) ;
 int FUNC_2 (int ,char*,int,...) ;

__attribute__((used)) static void
FUNC_3(struct acpi_hp_softc *VAR_11)
{
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_12 = FUNC_1(VAR_11->wmi_dev,
     VAR_0, 0, 0, &VAR_13);
 if (VAR_12 != 0) {
  FUNC_2(VAR_11->wmi_dev, "Wireless command error %x\n", VAR_12);
  return;
 }
 VAR_14 = -1;
 VAR_15 = -1;
 VAR_16 = -1;

 if (VAR_11->verbose)
  FUNC_2(VAR_11->wmi_dev, "Wireless status is %x\n", VAR_13);
 if (VAR_11->wlan_disable_if_radio_off && !(VAR_13 & VAR_7)
     && (VAR_13 & VAR_5)) {
  FUNC_1(VAR_11->wmi_dev,
      VAR_0, 1, 0x100, ((void*)0));
  VAR_14 = 0;
 }
 else if (VAR_11->wlan_enable_if_radio_on && (VAR_13 & VAR_7)
  && !(VAR_13 & VAR_5)) {
  FUNC_1(VAR_11->wmi_dev,
      VAR_0, 1, 0x101, ((void*)0));
  VAR_14 = 1;
 }
 if (VAR_11->bluetooth_disable_if_radio_off &&
     !(VAR_13 & VAR_4) &&
     (VAR_13 & VAR_2)) {
  FUNC_1(VAR_11->wmi_dev,
      VAR_0, 1, 0x200, ((void*)0));
  VAR_15 = 0;
 }
 else if (VAR_11->bluetooth_enable_if_radio_on &&
  (VAR_13 & VAR_4) &&
  !(VAR_13 & VAR_2)) {
  FUNC_1(VAR_11->wmi_dev,
      VAR_0, 1, 0x202, ((void*)0));
  VAR_15 = 1;
 }
 if (VAR_11->wwan_disable_if_radio_off &&
     !(VAR_13 & VAR_10) &&
     (VAR_13 & VAR_8)) {
  FUNC_1(VAR_11->wmi_dev,
  VAR_0, 1, 0x400, ((void*)0));
  VAR_16 = 0;
 }
 else if (VAR_11->wwan_enable_if_radio_on &&
  (VAR_13 & VAR_10) &&
  !(VAR_13 & VAR_8)) {
  FUNC_1(VAR_11->wmi_dev,
      VAR_0, 1, 0x404, ((void*)0));
  VAR_16 = 1;
 }

 if (VAR_14 == -1) {
  VAR_14 = (VAR_13 & VAR_6);
  if ((VAR_14?1:0) != VAR_11->was_wlan_on_air) {
   VAR_11->was_wlan_on_air = VAR_11->was_wlan_on_air?0:1;
   if (VAR_11->verbose)
    FUNC_2(VAR_11->wmi_dev,
            "WLAN on air changed to %i "
            "(new_wlan_status is %i)\n",
            VAR_11->was_wlan_on_air, VAR_14);
   FUNC_0("HP", VAR_1,
       0xc0+VAR_11->was_wlan_on_air);
  }
 }
 if (VAR_15 == -1) {
  VAR_15 = (VAR_13 & VAR_3);
  if ((VAR_15?1:0) != VAR_11->was_bluetooth_on_air) {
   VAR_11->was_bluetooth_on_air = VAR_11->was_bluetooth_on_air?
       0:1;
   if (VAR_11->verbose)
    FUNC_2(VAR_11->wmi_dev,
        "BLUETOOTH on air changed"
        " to %i (new_bluetooth_status is %i)\n",
        VAR_11->was_bluetooth_on_air,
        VAR_15);
   FUNC_0("HP", VAR_1,
       0xd0+VAR_11->was_bluetooth_on_air);
  }
 }
 if (VAR_16 == -1) {
  VAR_16 = (VAR_13 & VAR_9);
  if ((VAR_16?1:0) != VAR_11->was_wwan_on_air) {
   VAR_11->was_wwan_on_air = VAR_11->was_wwan_on_air?0:1;
   if (VAR_11->verbose)
    FUNC_2(VAR_11->wmi_dev,
        "WWAN on air changed to %i"
            " (new_wwan_status is %i)\n",
        VAR_11->was_wwan_on_air, VAR_16);
   FUNC_0("HP", VAR_1,
       0xe0+VAR_11->was_wwan_on_air);
  }
 }
}
