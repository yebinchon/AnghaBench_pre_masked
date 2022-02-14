
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dici_mode; } ;
struct TYPE_8__ {TYPE_1__ s; int u64; } ;
typedef TYPE_3__ cvmx_dpi_dma_control_t ;
struct TYPE_7__ {int addr; scalar_t__ wqp; int type; } ;
struct TYPE_9__ {TYPE_2__ s; scalar_t__ u64; } ;
typedef TYPE_4__ cvmx_dma_engine_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,TYPE_4__,int ,int ,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static inline int FUNC_4(int VAR_3, void *VAR_4, void *VAR_5, int VAR_6, int VAR_7)
{
    cvmx_dma_engine_header_t VAR_8;
    VAR_8.u64 = 0;
    VAR_8.s.type = VAR_0;


    if (FUNC_3(VAR_2))
    {
        cvmx_dpi_dma_control_t VAR_9;
        VAR_9.u64 = FUNC_2(VAR_1);
        if (VAR_9.s.dici_mode)
        {
           VAR_8.s.wqp = 0;
           VAR_8.s.addr = VAR_7 + 1;
        }
    }
    return FUNC_0(VAR_3, VAR_8, FUNC_1(VAR_5),
                                    FUNC_1(VAR_4), VAR_6);
}
