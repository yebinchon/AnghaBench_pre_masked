
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
char *
FUNC_0(int VAR_1)
{
    switch (VAR_1) {
    case -1: return "UNSUPPORTED";
    case 0: return "NONE";
    case 142: return "PIO0";
    case 141: return "PIO1";
    case 140: return "PIO2";
    case 139: return "PIO3";
    case 138: return "PIO4";
    case 130: return "WDMA0";
    case 129: return "WDMA1";
    case 128: return "WDMA2";
    case 137: return "UDMA0";
    case 136: return "UDMA1";
    case 135: return "UDMA2";
    case 134: return "UDMA3";
    case 133: return "UDMA4";
    case 132: return "UDMA5";
    case 131: return "UDMA6";
    default:
 if (VAR_1 & VAR_0)
     return "BIOSDMA";
 else
     return "BIOSPIO";
    }
}
