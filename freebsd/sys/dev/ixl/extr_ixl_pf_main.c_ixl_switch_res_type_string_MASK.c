
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



char *
FUNC_0(u8 VAR_0)
{

 char * VAR_1[0x14] = {
  "VEB",
  "VSI",
  "Perfect Match MAC address",
  "S-tag",
  "(Reserved)",
  "Multicast hash entry",
  "Unicast hash entry",
  "VLAN",
  "VSI List entry",
  "(Reserved)",
  "VLAN Statistic Pool",
  "Mirror Rule",
  "Queue Set",
  "Inner VLAN Forward filter",
  "(Reserved)",
  "Inner MAC",
  "IP",
  "GRE/VN1 Key",
  "VN2 Key",
  "Tunneling Port"
 };

 if (VAR_0 < 0x14)
  return VAR_1[VAR_0];
 else
  return "(Reserved)";
}
