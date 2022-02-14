
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int buffers; int octets; } ;
struct TYPE_5__ {TYPE_1__ s; scalar_t__ u32; } ;
typedef TYPE_2__ cvmx_sriomaintx_ir_sp_rx_stat_t ;
struct TYPE_6__ {int flags; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int,int ,scalar_t__*) ;
 TYPE_3__* VAR_1 ;
 int FUNC_3 (char*,...) ;

int FUNC_4(int VAR_2, void *VAR_3, int VAR_4)
{
    uint32_t *VAR_5 = (uint32_t *)VAR_3;
    cvmx_sriomaintx_ir_sp_rx_stat_t VAR_6;


    if (FUNC_2(VAR_2, FUNC_1(VAR_2), &VAR_6.u32))
        return -1;


    if (VAR_6.s.buffers < 1)
        return 0;

    if (VAR_1[VAR_2].flags & VAR_0)
        FUNC_3("SRIO%d: Soft packet FIFO received %d bytes", VAR_2, VAR_6.s.octets);


    if (VAR_6.s.octets > VAR_4)
        return -1;


    VAR_4 = VAR_6.s.octets;
    while (VAR_4 > 0)
    {
        FUNC_2(VAR_2, FUNC_0(VAR_2), VAR_5);
        if (VAR_1[VAR_2].flags & VAR_0)
            FUNC_3(" %08x", (unsigned int)*VAR_5);
        VAR_5++;
        VAR_4-=4;
    }

    if (VAR_1[VAR_2].flags & VAR_0)
        FUNC_3("\n");


    return VAR_6.s.octets;
}
