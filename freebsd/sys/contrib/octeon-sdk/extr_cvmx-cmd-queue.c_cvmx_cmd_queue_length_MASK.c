
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int doorbell; } ;
struct TYPE_15__ {TYPE_1__ cn38xx; void* u64; } ;
typedef TYPE_6__ cvmx_pko_mem_debug9_t ;
struct TYPE_12__ {int doorbell; } ;
struct TYPE_11__ {int doorbell; } ;
struct TYPE_16__ {TYPE_3__ cn58xx; TYPE_2__ cn68xx; void* u64; } ;
typedef TYPE_7__ cvmx_pko_mem_debug8_t ;
struct TYPE_13__ {int dbell; } ;
struct TYPE_17__ {TYPE_4__ s; void* u64; } ;
typedef TYPE_8__ cvmx_npei_dmax_counts_t ;
struct TYPE_14__ {int dbell; } ;
struct TYPE_18__ {TYPE_5__ s; void* u64; } ;
typedef TYPE_9__ cvmx_dpi_dmax_counts_t ;
typedef int cvmx_cmd_queue_id_t ;





 int VAR_0 ;



 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;

int FUNC_7(cvmx_cmd_queue_id_t VAR_8)
{
    if (VAR_1)
    {
        if (FUNC_3(VAR_8) == ((void*)0))
            return VAR_0;
    }



    switch ((cvmx_cmd_queue_id_t)(VAR_8 & 0xff0000))
    {
        case 130:



            FUNC_5(VAR_4, VAR_8 & 0xffff);
            if (FUNC_2(VAR_5))
            {
                cvmx_pko_mem_debug9_t VAR_9;
                VAR_9 = FUNC_4(VAR_3);
                return VAR_9;
            }
            else
            {
                cvmx_pko_mem_debug8_t VAR_10;
                VAR_10 = FUNC_4(VAR_2);
                if (FUNC_6(VAR_7))
                    return VAR_10;
                else
                    return VAR_10;
            }
        case 128:
        case 133:
        case 129:

            return 0;
        case 132:
            if (FUNC_6(VAR_6))
            {
                cvmx_npei_dmax_counts_t VAR_11;
                VAR_11.u64 = FUNC_4(FUNC_1(VAR_8 & 0x7));
                return VAR_11.s.dbell;
            }
            else
            {
                cvmx_dpi_dmax_counts_t VAR_12;
                VAR_12.u64 = FUNC_4(FUNC_0(VAR_8 & 0x7));
                return VAR_12.s.dbell;
            }
        case 131:
            return VAR_0;
    }
    return VAR_0;
}
