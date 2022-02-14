
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int maxdram; int disable; } ;
struct TYPE_4__ {scalar_t__ u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_l2c_big_ctl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,unsigned long long,...) ;
 int FUNC_2 (int ,scalar_t__) ;

void FUNC_3(uint64_t VAR_5, int VAR_6)
{
    if ((FUNC_0(VAR_3) || FUNC_0(VAR_4))
         && !FUNC_0(VAR_2))
    {
        cvmx_l2c_big_ctl_t VAR_7;
        int VAR_8 = 0, VAR_9 = 0;
        uint64_t VAR_10;

        if (VAR_5 > (VAR_1 * 1024))
        {
            FUNC_1("WARNING: Invalid memory size(%lld) requested, should be <= %lld\n",
                (unsigned long long)VAR_5, (unsigned long long)VAR_1 * 1024);
            VAR_5 = VAR_1 * 1024;
        }

        VAR_10 = VAR_5;
        while (VAR_10)
        {
            if ((VAR_10 & 1) == 0)
                VAR_9++;
            VAR_8++;
            VAR_10 >>= 1;
        }

        if ((VAR_8 - VAR_9) != 1 || (VAR_8 - 9) <= 0)
        {
            FUNC_1("ERROR: Invalid DRAM size (%lld) requested, refer to L2C_BIG_CTL[maxdram] for valid options.\n", (unsigned long long)VAR_5);
            return;
        }

        VAR_7.u64 = 0;
        VAR_7.s.maxdram = VAR_8 - 9;
        VAR_7.s.disable = VAR_6;
        FUNC_2(VAR_0, VAR_7.u64);
    }
}
