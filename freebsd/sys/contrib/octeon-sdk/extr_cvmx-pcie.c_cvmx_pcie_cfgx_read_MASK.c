
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
struct TYPE_7__ {TYPE_2__ s; void* u64; } ;
typedef TYPE_3__ cvmx_pescx_cfg_rd_t ;
struct TYPE_5__ {void* data; void* addr; } ;
struct TYPE_8__ {TYPE_1__ s; void* u64; } ;
typedef TYPE_4__ cvmx_pemx_cfg_rd_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,void*) ;
 scalar_t__ FUNC_4 (int ) ;

uint32_t FUNC_5(int VAR_1, uint32_t VAR_2)
{
    if (FUNC_4(VAR_0))
    {
        cvmx_pescx_cfg_rd_t VAR_3;
        VAR_3.u64 = 0;
        VAR_3.s.addr = VAR_2;
        FUNC_3(FUNC_1(VAR_1), VAR_3.u64);
        VAR_3.u64 = FUNC_2(FUNC_1(VAR_1));
        return VAR_3.s.data;
    }
    else
    {
        cvmx_pemx_cfg_rd_t VAR_4;
        VAR_4.u64 = 0;
        VAR_4.s.addr = VAR_2;
        FUNC_3(FUNC_0(VAR_1), VAR_4.u64);
        VAR_4.u64 = FUNC_2(FUNC_0(VAR_1));
        return VAR_4.s.data;
    }
}
