
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef int cvmx_tra_sid_t ;
typedef int cvmx_tra_filt_t ;
struct TYPE_8__ {int u64; } ;
typedef TYPE_2__ cvmx_tra_filt_sid_t ;
struct TYPE_9__ {int u64; } ;
typedef TYPE_3__ cvmx_tra_filt_did_t ;
struct TYPE_10__ {int u64; } ;
typedef TYPE_4__ cvmx_tra_filt_cmd_t ;
typedef int cvmx_tra_did_t ;
struct TYPE_7__ {int rdat_md; } ;
struct TYPE_11__ {int u64; TYPE_1__ s; } ;
typedef TYPE_5__ cvmx_tra_ctl_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int ,int) ;

void FUNC_10(int VAR_6, cvmx_tra_ctl_t VAR_7, cvmx_tra_filt_t VAR_8,
                    cvmx_tra_sid_t VAR_9, cvmx_tra_did_t VAR_10,
                    uint64_t VAR_11, uint64_t VAR_12)
{
    cvmx_tra_filt_cmd_t VAR_13;
    cvmx_tra_filt_sid_t VAR_14;
    cvmx_tra_filt_did_t VAR_15;

    if ((VAR_6 + 1) > VAR_0)
    {
        FUNC_8("cvmx_tra_setup_per_tra: Invalid tra(%d), max allowed (%d)\n", VAR_6, VAR_0 - 1);
        VAR_6 = 0;
    }

    VAR_13.u64 = FUNC_7(VAR_8);
    VAR_14.u64 = VAR_9 & VAR_3;
    VAR_15.u64 = VAR_10 & VAR_1;



    if ((FUNC_6(VAR_4) || FUNC_6(VAR_5))
        && ((VAR_13.u64 & VAR_2) == VAR_2)
        && VAR_12 != 0)
    {
        FUNC_8("The address-based filtering does not work with IOBDMAs, disabling the filter command.\n");
        VAR_13.u64 &= ~(VAR_2);
    }




    VAR_7.s.rdat_md = 1;

    FUNC_9(FUNC_0(VAR_6), VAR_7.u64);
    FUNC_9(FUNC_3(VAR_6), VAR_13.u64);
    FUNC_9(FUNC_5(VAR_6), VAR_14.u64);
    FUNC_9(FUNC_4(VAR_6), VAR_15.u64);
    FUNC_9(FUNC_1(VAR_6), VAR_11);
    FUNC_9(FUNC_2(VAR_6), VAR_12);
}
