
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2(int VAR_1)
{
    if (FUNC_1(VAR_0))
    {
        if (VAR_1 >= 0x800 && VAR_1 < 0x900)
            return 0;
        else if (VAR_1 >= 0x900 && VAR_1 < 0xa00)
            return 1;
        else if (VAR_1 >= 0xa00 && VAR_1 < 0xb00)
            return 2;
        else if (VAR_1 >= 0xb00 && VAR_1 < 0xc00)
            return 3;
        else if (VAR_1 >= 0xc00 && VAR_1 < 0xd00)
            return 4;
        else if (VAR_1 >= 0x400 && VAR_1 < 0x500)
            return 5;
        else if (VAR_1 >= 0x500 && VAR_1 < 0x600)
            return 6;
        else if (VAR_1 >= 0x100 && VAR_1 < 0x120)
            return 7;
        else if (VAR_1 < 8)
            return 8;
    } else {
 if (VAR_1 < 16)
     return 0;
 else if (VAR_1 < 32)
     return 1;
 else if (VAR_1 < 36)
     return 2;
 else if (VAR_1 < 40)
     return 3;
 else if (VAR_1 < 42)
     return 4;
 else if (VAR_1 < 44)
     return 5;
 else if (VAR_1 < 46)
     return 6;
    }
    FUNC_0("cvmx_helper_get_interface_num: Illegal IPD port number %d\n", VAR_1);
    return -1;
}
