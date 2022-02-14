
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int tag; int tag_type; int index; int grp; } ;
struct TYPE_14__ {TYPE_4__ s_sstatus2; void* u64; } ;
typedef TYPE_5__ cvmx_pow_tag_load_resp_t ;
struct TYPE_15__ {int tag; int tag_type; int index; int grp; } ;
typedef TYPE_6__ cvmx_pow_tag_info_t ;
struct TYPE_11__ {int tag; int tag_type; int index; int grp; } ;
struct TYPE_16__ {TYPE_2__ s; void* u64; } ;
typedef TYPE_7__ cvmx_pow_sl_tag_resp_t ;
struct TYPE_12__ {int is_io; int get_cur; void* coreid; int did; void* mem_region; } ;
struct TYPE_10__ {int is_io; int opcode; void* coreid; int did; void* mem_region; } ;
struct TYPE_17__ {scalar_t__ u64; TYPE_3__ sstatus; TYPE_1__ sstatus_cn68xx; } ;
typedef TYPE_8__ cvmx_pow_load_addr_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 () ;
 void* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline cvmx_pow_tag_info_t FUNC_3(void)
{
    cvmx_pow_load_addr_t VAR_4;
    cvmx_pow_tag_info_t VAR_5;

    if (FUNC_2(VAR_3)) {
        cvmx_pow_sl_tag_resp_t VAR_6;
        VAR_4.u64 = 0;
        VAR_4.sstatus_cn68xx.mem_region = VAR_0;
        VAR_4.sstatus_cn68xx.is_io = 1;
        VAR_4.sstatus_cn68xx.did = VAR_2;
        VAR_4.sstatus_cn68xx.coreid = FUNC_0();
        VAR_4.sstatus_cn68xx.opcode = 3;
        VAR_6.u64 = FUNC_1(VAR_4.u64);
        VAR_5.grp = VAR_6.s.grp;
        VAR_5.index = VAR_6.s.index;
        VAR_5.tag_type = VAR_6.s.tag_type;
        VAR_5.tag = VAR_6.s.tag;
    } else {
        cvmx_pow_tag_load_resp_t VAR_7;
        VAR_4.u64 = 0;
        VAR_4.sstatus.mem_region = VAR_0;
        VAR_4.sstatus.is_io = 1;
        VAR_4.sstatus.did = VAR_1;
        VAR_4.sstatus.coreid = FUNC_0();
        VAR_4.sstatus.get_cur = 1;
        VAR_7.u64 = FUNC_1(VAR_4.u64);
        VAR_5.grp = VAR_7.s_sstatus2.grp;
        VAR_5.index = VAR_7.s_sstatus2.index;
        VAR_5.tag_type = VAR_7.s_sstatus2.tag_type;
        VAR_5.tag = VAR_7.s_sstatus2.tag;
    }
    return VAR_5;
}
