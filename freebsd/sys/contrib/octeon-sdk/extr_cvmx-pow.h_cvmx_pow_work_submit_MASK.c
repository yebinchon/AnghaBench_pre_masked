
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef void* uint64_t ;
typedef void* uint32_t ;
struct TYPE_17__ {void* grp; void* qos; scalar_t__ zero_2; } ;
struct TYPE_15__ {void* grp; void* qos; scalar_t__ zero_2; scalar_t__ zero_1; scalar_t__ zero_0; } ;
struct TYPE_14__ {void* tag_type; void* tag; } ;
struct TYPE_18__ {TYPE_4__ cn38xx; TYPE_2__ cn68xx; TYPE_1__ s; } ;
struct TYPE_21__ {TYPE_5__ word1; } ;
typedef TYPE_8__ cvmx_wqe_t ;
typedef void* cvmx_pow_tag_type_t ;
struct TYPE_19__ {void* grp; void* qos; void* tag; void* type; void* op; } ;
struct TYPE_16__ {void* grp; void* qos; void* tag; void* type; void* op; } ;
struct TYPE_22__ {scalar_t__ u64; TYPE_6__ s_cn38xx; TYPE_3__ s_cn68xx_add; } ;
typedef TYPE_9__ cvmx_pow_tag_req_t ;
struct TYPE_20__ {int is_io; int offset; int did; int mem_region; } ;
struct TYPE_13__ {scalar_t__ u64; TYPE_7__ sio; } ;
typedef TYPE_10__ cvmx_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(cvmx_wqe_t *VAR_5, uint32_t VAR_6, cvmx_pow_tag_type_t VAR_7, uint64_t VAR_8, uint64_t VAR_9)
{
    cvmx_addr_t VAR_10;
    cvmx_pow_tag_req_t VAR_11;

    VAR_11.u64 = 0;

    VAR_5->word1.s.tag = VAR_6;
    VAR_5->word1.s.tag_type = VAR_7;

    if (FUNC_2(VAR_4)) {

        VAR_5->word1.cn68xx.zero_0 = 0;
        VAR_5->word1.cn68xx.zero_1 = 0;
        VAR_5->word1.cn68xx.zero_2 = 0;
        VAR_5->word1.cn68xx.qos = VAR_8;
        VAR_5->word1.cn68xx.grp = VAR_9;

        VAR_11.s_cn68xx_add.op = VAR_2;
        VAR_11.s_cn68xx_add.type = VAR_7;
        VAR_11.s_cn68xx_add.tag = VAR_6;
        VAR_11.s_cn68xx_add.qos = VAR_8;
        VAR_11.s_cn68xx_add.grp = VAR_9;
    } else {

        VAR_5->word1.cn38xx.zero_2 = 0;
        VAR_5->word1.cn38xx.qos = VAR_8;
        VAR_5->word1.cn38xx.grp = VAR_9;

        VAR_11.s_cn38xx.op = VAR_2;
        VAR_11.s_cn38xx.type = VAR_7;
        VAR_11.s_cn38xx.tag = VAR_6;
        VAR_11.s_cn38xx.qos = VAR_8;
        VAR_11.s_cn38xx.grp = VAR_9;
    }

    VAR_10.u64 = 0;
    VAR_10.sio.mem_region = VAR_0;
    VAR_10.sio.is_io = 1;
    VAR_10.sio.did = VAR_1;
    VAR_10.sio.offset = FUNC_0(VAR_5);



    VAR_3;
    FUNC_1(VAR_10.u64, VAR_11.u64);
}
