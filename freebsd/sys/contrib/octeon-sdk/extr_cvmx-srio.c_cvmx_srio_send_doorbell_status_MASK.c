
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ pending; } ;
struct TYPE_11__ {TYPE_1__ s; void* u64; } ;
typedef TYPE_4__ cvmx_sriox_tx_bell_t ;
struct TYPE_9__ {scalar_t__ retry; scalar_t__ error; scalar_t__ timeout; } ;
struct TYPE_12__ {TYPE_2__ s; void* u64; } ;
typedef TYPE_5__ cvmx_sriox_tx_bell_info_t ;
struct TYPE_10__ {scalar_t__ txbell; scalar_t__ bell_err; } ;
struct TYPE_13__ {TYPE_3__ s; void* u64; } ;
typedef TYPE_6__ cvmx_sriox_int_reg_t ;
typedef int cvmx_srio_doorbell_status_t ;
struct TYPE_14__ {int flags; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_7__* VAR_7 ;
 int FUNC_3 (char*,int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,void*) ;

cvmx_srio_doorbell_status_t FUNC_6(int VAR_8)
{
    cvmx_sriox_tx_bell_t VAR_9;
    cvmx_sriox_tx_bell_info_t VAR_10;
    cvmx_sriox_int_reg_t VAR_11;
    cvmx_sriox_int_reg_t VAR_12;


    VAR_9.u64 = FUNC_4(FUNC_1(VAR_8));
    if (VAR_9.s.pending)
        return VAR_0;


    VAR_11.u64 = FUNC_4(FUNC_0(VAR_8));
    VAR_12.u64 = 0;
    VAR_12.s.bell_err = VAR_11.s.bell_err;
    VAR_12.s.txbell = VAR_11.s.txbell;
    FUNC_5(FUNC_0(VAR_8), VAR_12.u64);


    if (VAR_11.s.bell_err)
    {
        if (VAR_7[VAR_8].flags & VAR_6)
            FUNC_3("SRIO%d: Send doorbell failed\n", VAR_8);
        VAR_10.u64 = FUNC_4(FUNC_2(VAR_8));
        if (VAR_10.s.timeout)
            return VAR_5;
        if (VAR_10.s.error)
            return VAR_2;
        if (VAR_10.s.retry)
            return VAR_4;
    }


    if (VAR_11.s.txbell)
        return VAR_1;


    return VAR_3;
}
