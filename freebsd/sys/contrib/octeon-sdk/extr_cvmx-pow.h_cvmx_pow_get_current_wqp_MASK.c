
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int cvmx_wqe_t ;
struct TYPE_10__ {scalar_t__ wqp; } ;
struct TYPE_8__ {scalar_t__ wqp; } ;
struct TYPE_11__ {TYPE_4__ s_sstatus4; void* u64; TYPE_2__ s_sstatus3_cn68xx; } ;
typedef TYPE_5__ cvmx_pow_tag_load_resp_t ;
struct TYPE_9__ {int is_io; int get_cur; int get_wqp; void* coreid; int did; void* mem_region; } ;
struct TYPE_7__ {int is_io; int opcode; void* coreid; int did; void* mem_region; } ;
struct TYPE_12__ {scalar_t__ u64; TYPE_3__ sstatus; TYPE_1__ sstatus_cn68xx; } ;
typedef TYPE_6__ cvmx_pow_load_addr_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 void* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static inline cvmx_wqe_t *FUNC_4(void)
{
    cvmx_pow_load_addr_t VAR_4;
    cvmx_pow_tag_load_resp_t VAR_5;

    if (FUNC_3(VAR_3)) {
        VAR_4.u64 = 0;
        VAR_4.sstatus_cn68xx.mem_region = VAR_0;
        VAR_4.sstatus_cn68xx.is_io = 1;
        VAR_4.sstatus_cn68xx.did = VAR_2;
        VAR_4.sstatus_cn68xx.coreid = FUNC_0();
        VAR_4.sstatus_cn68xx.opcode = 3;
        VAR_5.u64 = FUNC_2(VAR_4.u64);
        if (VAR_5.s_sstatus3_cn68xx.wqp)
            return (cvmx_wqe_t*)FUNC_1(VAR_5.s_sstatus3_cn68xx.wqp);
        else
            return (cvmx_wqe_t*)0;
    } else {
        VAR_4.u64 = 0;
        VAR_4.sstatus.mem_region = VAR_0;
        VAR_4.sstatus.is_io = 1;
        VAR_4.sstatus.did = VAR_1;
        VAR_4.sstatus.coreid = FUNC_0();
        VAR_4.sstatus.get_cur = 1;
        VAR_4.sstatus.get_wqp = 1;
        VAR_5.u64 = FUNC_2(VAR_4.u64);
        return (cvmx_wqe_t*)FUNC_1(VAR_5.s_sstatus4.wqp);
    }
}
