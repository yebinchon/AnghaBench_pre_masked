
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
typedef unsigned long long cvmx_tra_filt_t ;
struct TYPE_3__ {scalar_t__ reserved_6_7; scalar_t__ reserved_10_14; scalar_t__ reserved_27_27; scalar_t__ reserved_56_57; scalar_t__ reserved_60_61; } ;
struct TYPE_4__ {unsigned long long u64; TYPE_1__ cn63xx; } ;
typedef TYPE_2__ cvmx_tra_filt_cmd_t ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 unsigned long long VAR_8 ;
 unsigned long long VAR_9 ;
 unsigned long long VAR_10 ;
 unsigned long long VAR_11 ;
 unsigned long long VAR_12 ;
 unsigned long long VAR_13 ;
 unsigned long long VAR_14 ;
 unsigned long long VAR_15 ;
 unsigned long long VAR_16 ;
 unsigned long long VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static uint64_t FUNC_1(cvmx_tra_filt_t VAR_20)
{
    cvmx_tra_filt_cmd_t VAR_21;

    if (FUNC_0(VAR_18) || FUNC_0(VAR_19))
    {

        uint64_t VAR_22 = 0;
        if ((VAR_20 & VAR_0) == -1ull)
        {
            if (FUNC_0(VAR_19))
                VAR_22 = 0x1ffff;
            else
                VAR_22 = 0xffff;
        }
        if (VAR_20 & VAR_1)
            VAR_22 |= 1ull<<0;
        if (VAR_20 & VAR_11)
            VAR_22 |= 1ull<<1;
        if (VAR_20 & VAR_12)
            VAR_22 |= 1ull<<2;
        if (VAR_20 & VAR_8)
            VAR_22 |= 1ull<<3;
        if (VAR_20 & VAR_9)
            VAR_22 |= 1ull<<4;
        if (VAR_20 & VAR_10)
            VAR_22 |= 1ull<<5;
        if (VAR_20 & VAR_15)
            VAR_22 |= 1ull<<6;
        if (VAR_20 & VAR_14)
            VAR_22 |= 1ull<<7;
        if (VAR_20 & VAR_16)
            VAR_22 |= 1ull<<8;
        if (VAR_20 & VAR_17)
            VAR_22 |= 1ull<<9;
        if (VAR_20 & VAR_6)
            VAR_22 |= 1ull<<10;
        if (VAR_20 & VAR_3)
            VAR_22 |= 1ull<<11;
        if (VAR_20 & VAR_4)
            VAR_22 |= 1ull<<12;
        if (VAR_20 & VAR_5)
            VAR_22 |= 1ull<<13;
        if (VAR_20 & VAR_7)
            VAR_22 |= 1ull<<14;
        if (VAR_20 & VAR_2)
            VAR_22 |= 1ull<<15;
        if (FUNC_0(VAR_19) && (VAR_20 & VAR_13))
            VAR_22 |= 1ull<<16;

        VAR_21.u64 = VAR_22;
    }
    else
    {
        if ((VAR_20 & VAR_0) == -1ull)
            VAR_21.u64 = VAR_0;
        else
            VAR_21.u64 = VAR_20;

        VAR_21.cn63xx.reserved_60_61 = 0;
        VAR_21.cn63xx.reserved_56_57 = 0;
        VAR_21.cn63xx.reserved_27_27 = 0;
        VAR_21.cn63xx.reserved_10_14 = 0;
        VAR_21.cn63xx.reserved_6_7 = 0;
    }
    return VAR_21.u64;
}
