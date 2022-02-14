
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



__attribute__((used)) static const char *
FUNC_0(uint16_t VAR_0)
{
    switch (VAR_0) {
    case 0x0100:
        return "Linux";
    case 0x0101:
        return "Open vSwitch";
    case 0x0102:
        return "Open Virtual Networking (OVN)";
    case 0x0103:
        return "In-band Network Telemetry (INT)";
    case 0x0104:
        return "VMware";
    default:
        if (VAR_0 <= 0x00ff)
            return "Standard";
        else if (VAR_0 >= 0xfff0)
            return "Experimental";
    }

    return "Unknown";
}
