
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2(int VAR_1)
{
    if (FUNC_1(VAR_0))
    {
        if (VAR_1 >= 0x800 && VAR_1 < 0xd00)
        {
            int VAR_2 = ((VAR_1 & 0xff) >> 6);
            return ((VAR_2) ? (VAR_2 - 1) : ((VAR_1 & 0xff) >> 4));
        }
        else if (VAR_1 >= 0x400 && VAR_1 < 0x600)
            return (VAR_1 & 0xff);
        else if (VAR_1 >= 0x100 && VAR_1 < 0x120)
            return (VAR_1 & 0xff);
        else if (VAR_1 < 8)
            return VAR_1;
        else
            FUNC_0("cvmx_helper_get_interface_index_num: Illegal IPD port number %d\n", VAR_1);
        return -1;
    }
    if (VAR_1 < 32)
        return VAR_1 & 15;
    else if (VAR_1 < 40)
        return VAR_1 & 3;
    else if (VAR_1 < 44)
        return VAR_1 & 1;
    else if (VAR_1 < 46)
        return VAR_1 & 1;
    else
        FUNC_0("cvmx_helper_get_interface_index_num: Illegal IPD port number\n");

    return -1;
}
