
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

void
FUNC_1 (int VAR_0)
{
    if (VAR_0 & 0x1)
 FUNC_0 ("Memory Range: Writeable\n");
    else
 FUNC_0 ("Memory Range: Not writeable (ROM)\n");

    if (VAR_0 & 0x2)
 FUNC_0 ("Memory Range: Read-cacheable, write-through\n");
    else
 FUNC_0 ("Memory Range: Non-cacheable\n");

    if (VAR_0 & 0x4)
 FUNC_0 ("Memory Range: Decode supports high address\n");
    else
 FUNC_0 ("Memory Range: Decode supports range length\n");

    switch ((VAR_0 & 0x18) >> 3) {
    case 0:
 FUNC_0 ("Memory Range: 8-bit memory only\n");
 break;
    case 1:
 FUNC_0 ("Memory Range: 16-bit memory only\n");
 break;
    case 2:
 FUNC_0 ("Memory Range: 8-bit and 16-bit memory supported\n");
 break;





    }

    if (VAR_0 & 0x20)
 FUNC_0 ("Memory Range: Memory is shadowable\n");
    else
 FUNC_0 ("Memory Range: Memory is not shadowable\n");

    if (VAR_0 & 0x40)
 FUNC_0 ("Memory Range: Memory is an expansion ROM\n");
    else
 FUNC_0 ("Memory Range: Memory is not an expansion ROM\n");





}
