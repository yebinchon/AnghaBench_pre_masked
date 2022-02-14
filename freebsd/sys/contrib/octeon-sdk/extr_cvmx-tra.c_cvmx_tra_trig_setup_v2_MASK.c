
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int cvmx_tra_sid_t ;
typedef int cvmx_tra_filt_t ;
struct TYPE_4__ {int u64; } ;
typedef TYPE_1__ cvmx_tra_filt_sid_t ;
struct TYPE_5__ {int u64; } ;
typedef TYPE_2__ cvmx_tra_filt_did_t ;
struct TYPE_6__ {int u64; } ;
typedef TYPE_3__ cvmx_tra_filt_cmd_t ;
typedef int cvmx_tra_did_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (scalar_t__,int) ;

void FUNC_9(int VAR_5, uint64_t VAR_6, cvmx_tra_filt_t VAR_7,
                         cvmx_tra_sid_t VAR_8, cvmx_tra_did_t VAR_9,
                         uint64_t VAR_10, uint64_t VAR_11)
{
    cvmx_tra_filt_cmd_t VAR_12;
    cvmx_tra_filt_sid_t VAR_13;
    cvmx_tra_filt_did_t VAR_14;

    VAR_12.u64 = FUNC_6(VAR_7);
    VAR_13.u64 = VAR_8 & VAR_2;
    VAR_14.u64 = VAR_9 & VAR_0;



    if ((FUNC_5(VAR_3) || FUNC_5(VAR_4))
        && ((VAR_12.u64 & VAR_1) == VAR_1)
        && VAR_11 != 0)
    {
        FUNC_7("The address-based filtering does not work with IOBDMAs, disabling the filter command.\n");
        VAR_12.u64 &= ~(VAR_1);
    }

    FUNC_8(FUNC_2(VAR_5) + VAR_6 * 64, VAR_12.u64);
    FUNC_8(FUNC_4(VAR_5) + VAR_6 * 64, VAR_13.u64);
    FUNC_8(FUNC_3(VAR_5) + VAR_6 * 64, VAR_14.u64);
    FUNC_8(FUNC_0(VAR_5) + VAR_6 * 64, VAR_10);
    FUNC_8(FUNC_1(VAR_5) + VAR_6 * 64, VAR_11);
}
