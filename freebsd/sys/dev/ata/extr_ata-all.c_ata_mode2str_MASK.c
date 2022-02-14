
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
const char *
FUNC_0(int VAR_1)
{
    switch (VAR_1) {
    case -1: return "UNSUPPORTED";
    case 145: return "PIO0";
    case 144: return "PIO1";
    case 143: return "PIO2";
    case 142: return "PIO3";
    case 141: return "PIO4";
    case 130: return "WDMA0";
    case 129: return "WDMA1";
    case 128: return "WDMA2";
    case 137: return "UDMA16";
    case 136: return "UDMA25";
    case 135: return "UDMA33";
    case 134: return "UDMA40";
    case 133: return "UDMA66";
    case 132: return "UDMA100";
    case 131: return "UDMA133";
    case 140: return "SATA150";
    case 139: return "SATA300";
    case 138: return "SATA600";
    default:
 if (VAR_1 & VAR_0)
     return "BIOSDMA";
 else
     return "BIOSPIO";
    }
}
