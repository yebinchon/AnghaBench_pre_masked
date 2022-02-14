
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_6__ {void* data; void* addr; } ;
struct TYPE_7__ {scalar_t__ u64; TYPE_2__ s; } ;
typedef TYPE_3__ cvmx_pescx_cfg_wr_t ;
struct TYPE_5__ {void* data; void* addr; } ;
struct TYPE_8__ {scalar_t__ u64; TYPE_1__ s; } ;
typedef TYPE_4__ cvmx_pemx_cfg_wr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

void FUNC_4(int VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
    if (FUNC_3(VAR_0))
    {
        cvmx_pescx_cfg_wr_t VAR_4;
        VAR_4.u64 = 0;
        VAR_4.s.addr = VAR_2;
        VAR_4.s.data = VAR_3;
        FUNC_2(FUNC_1(VAR_1), VAR_4.u64);
    }
    else
    {
        cvmx_pemx_cfg_wr_t VAR_5;
        VAR_5.u64 = 0;
        VAR_5.s.addr = VAR_2;
        VAR_5.s.data = VAR_3;
        FUNC_2(FUNC_0(VAR_1), VAR_5.u64);
    }
}
